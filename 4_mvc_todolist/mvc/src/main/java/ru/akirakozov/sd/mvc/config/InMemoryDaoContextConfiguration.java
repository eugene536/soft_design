package ru.akirakozov.sd.mvc.config;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import ru.akirakozov.sd.mvc.dao.ToDoDao;
import ru.akirakozov.sd.mvc.dao.ToDoInMemoryDao;

/**
 * @author akirakozov
 */
@Configuration
public class InMemoryDaoContextConfiguration {
    @Bean
    public ToDoDao productDao() {
        return new ToDoInMemoryDao();
    }
}
