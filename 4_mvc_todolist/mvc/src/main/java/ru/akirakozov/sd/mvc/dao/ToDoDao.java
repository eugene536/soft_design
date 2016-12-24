package ru.akirakozov.sd.mvc.dao;

import ru.akirakozov.sd.mvc.model.GroupOfToDo;
import ru.akirakozov.sd.mvc.model.ToDo;

import java.util.List;
import java.util.Optional;

/**
 * @author akirakozov
 */
public interface ToDoDao {
    void addGroupOfToDo(GroupOfToDo groupOfToDo);
    List<GroupOfToDo> getGroupOfToDos();
    void addToGroup(String groupName, ToDo todo);
    GroupOfToDo getGroup(String groupName);

    void deleteGroup(String groupName);
}
