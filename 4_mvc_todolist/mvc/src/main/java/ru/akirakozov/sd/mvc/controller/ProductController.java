package ru.akirakozov.sd.mvc.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import ru.akirakozov.sd.mvc.dao.ToDoDao;
import ru.akirakozov.sd.mvc.model.GroupOfToDo;
import ru.akirakozov.sd.mvc.model.ToDo;

import java.util.List;
import java.util.Map;
import java.util.Optional;

/**
 * @author akirakozov
 */
@Controller
public class ProductController {
    @Autowired
    private ToDoDao toDoDao;

    @RequestMapping(value = "/in-group", method = RequestMethod.GET)
    public String inGroup(@RequestParam Map<String, String> allRequestParams, ModelMap map) {
        String groupName = allRequestParams.get("group");
        String toDoName = allRequestParams.get("new_name");
        allRequestParams.remove("group");
        allRequestParams.remove("new_name");

        assert allRequestParams.size() == 1;

        if (allRequestParams.containsKey("add")) {
            toDoDao.addToGroup(groupName, new ToDo(toDoName));
        } else  {
            String name = (String) allRequestParams.keySet().toArray()[0];
            name = name.substring(name.indexOf('_') + 1);
            int id = Integer.parseInt(name);
            GroupOfToDo g = toDoDao.getGroup(groupName);

            if (allRequestParams.containsValue("Done")) {
                g.getToDo(id).setDone(true);
            } else if (allRequestParams.containsValue("Delete")) {
                g.deleteToDo(id);
                if (g.isEmpty()) {
                    toDoDao.deleteGroup(groupName);
                }
            } else {
                assert allRequestParams.containsValue("UnDone");
                g.getToDo(id).setDone(false);
            }
        }

        return "redirect:/get-todos";
    }

    @RequestMapping(value = "/get-todos", method = RequestMethod.GET)
    public String getToDos(ModelMap map) {
        prepareModelMap(map, toDoDao.getGroupOfToDos());
        return "index";
    }

    @RequestMapping(value = "/add-group", method = RequestMethod.GET)
    public String addGroup(@ModelAttribute("groupOfToDo") GroupOfToDo groupOfToDo) {
        toDoDao.addGroupOfToDo(groupOfToDo);
        return "redirect:/get-todos";
    }

    private void prepareModelMap(ModelMap map, List<GroupOfToDo> groupOfToDos) {
        map.addAttribute("groups", groupOfToDos);
        map.addAttribute("groupOfToDo", new GroupOfToDo());
    }
}
