package ru.akirakozov.sd.mvc.model;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

/**
 * @author akirakozov
 */
public class GroupOfToDo {
    private int id;
    private String groupName;
    private ArrayList<ToDo> toDos = new ArrayList<>();

    public GroupOfToDo() {
    }

    public ToDo getToDo(int id) {
        for (ToDo toDo: toDos) {
            if (toDo.getId() == id) {
                return toDo;
            }
        }

        throw new IllegalArgumentException();
    }

    public void deleteToDo(int id) {
        toDos.remove(new ToDo(id));
    }

    public GroupOfToDo(String groupName) {
        this.groupName = groupName;
    }

    public void addToDo(ToDo todo) {
        toDos.add(todo);
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getGroupName() {
        return groupName;
    }

    public void setGroupName(String groupName) {
        this.groupName = groupName;
    }

    public List<ToDo> getToDos() {
        return toDos;
    }

    public void setToDos(ArrayList<ToDo> toDos) {
        this.toDos = toDos;
    }

    public boolean isEmpty() {
        return toDos.isEmpty();
    }
}
