package ru.akirakozov.sd.mvc.model;

/**
 * Created by eugene on 12/23/16.
 */
public class ToDo {
    private boolean done = false;
    private int id;
    private String name;

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        ToDo toDo = (ToDo) o;

        return id == toDo.id;
    }

    public ToDo(int id) {
        this.id = id;
    }

    public ToDo(String name) {
        this.name = name;
    }

    public ToDo(String name, boolean done) {
        this.name = name;
        this.done = done;
    }

    public boolean isDone() {
        return done;
    }

    public void setDone(boolean done) {
        this.done = done;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
