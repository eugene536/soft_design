package ru.akirakozov.sd.mvc.dao;

import com.sun.xml.internal.bind.v2.TODO;
import ru.akirakozov.sd.mvc.model.GroupOfToDo;
import ru.akirakozov.sd.mvc.model.ToDo;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;

/**
 * @author akirakozov
 */
public class ToDoInMemoryDao implements ToDoDao {
    private int lastId = 0;
    private final ArrayList<GroupOfToDo> groupOfToDos = new ArrayList<>();

    public ToDoInMemoryDao() {
//        String name = "University";
//        GroupOfToDo group = new GroupOfToDo(name);
//        addGroupOfToDo(group);
//        addToGroup(name, new ToDo("task1"));
//        addToGroup(name, new ToDo("task2", true));
    }

    @Override
    public void addGroupOfToDo(GroupOfToDo groupOfToDo) {
        groupOfToDo.setId(lastId);
        groupOfToDos.add(groupOfToDo);
        lastId++;
    }

    @Override
    public void addToGroup(String groupName, ToDo todo) {
        GroupOfToDo group = getGroup(groupName);
        todo.setId(lastId);
        group.addToDo(todo);
        lastId++;
    }

    @Override
    public GroupOfToDo getGroup(String groupName) {
        for (GroupOfToDo g : groupOfToDos) {
            if (g.getGroupName().equals(groupName)) {
                return g;
            }
        }

        throw new IllegalArgumentException();
    }

    @Override
    public void deleteGroup(String groupName) {
        Iterator<GroupOfToDo> it = groupOfToDos.iterator();
        while (it.hasNext()) {
            if (it.next().getGroupName().equals(groupName)) {
                it.remove();
                break;
            }
        }
    }

    @Override
    public List<GroupOfToDo> getGroupOfToDos() {
        return new ArrayList(groupOfToDos);
    }
}
