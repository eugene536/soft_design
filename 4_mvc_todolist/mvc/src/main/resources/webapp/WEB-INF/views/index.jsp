<%@ page contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib prefix="form" uri="http://www.springframework.org/tags/form"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jstl/core_rt" %>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Title</title>
</head>
<body>
    <style>
body {
}

.main_table {
    border-spacing: 10px 20px;
    text-align: center;
}

.main_table td {
    border-style: solid;
    border-width: 1px;
    border-color: black;
}

.secondary_table td {
    border-style: solid;
    border-width: 0px;
    border-color: black;
}

.add_group {
    margin-top: 10px;
}

h2 {
    padding: 2px;
    margin:auto;
}
    </style>
    <table class="main_table">

        <c:forEach var="group" items="${groups}">
            <tr>
                <td>
                    <form method="GET" action="in-group">
                        <input type="hidden" name="group" value="${group.getGroupName()}" />
                        <h2>
                            ${group.getGroupName()}
                        </h2>

                        <table class="secondary_table">

                            <c:forEach var="todo" items="${group.getToDos()}">
                                        <tr>
                                            <c:choose>
                                                <c:when test="${todo.isDone()}">
                                                    <td><strike> ${todo.getName()} </strike></td>
                                                    <td>
                                                        <input type="submit" name="done_${todo.getId()}" value="UnDone" />
                                                    </td>
                                                </c:when>
                                                <c:otherwise>
                                                    <td>${todo.getName()}</td>
                                                    <td>
                                                        <input type="submit" name="done_${todo.getId()}" value="Done" />
                                                    </td>
                                                </c:otherwise>
                                            </c:choose>

                                            <td>
                                                <input type="submit" name="delete_${todo.getId()}" value="Delete" />
                                            </td>
                                        </tr>

                            </c:forEach>

                        </table>

                        <input name="new_name" value="" />
                        <input type="submit" name="add" value="Add" />
                    </form>
                </td>
            </tr>
        </c:forEach>

    </table>

    <form:form modelAttribute="groupOfToDo" method="GET" action="add-group" class="add_group">
        <form:label path="groupName">Add group:</form:label>
        <form:input path="groupName"/>

        <input type="submit" value="add">
    </form:form>
</body>
</html>

