#include <iostream>
#include <string>

struct User {
    std::string username;
    std::string password;
};

int main() {
   
    User users[5];
    users[0] = {"Jack", "2904"};



    std::string username;
    std::string password;

    std::cout << "Имя пользователя: ";
    std::cin >> username;

    std::cout << "Пароль: ";
    std::cin >> password;

   
    bool isAuthenticated = false;

    for (int i = 0; i < 5; i++) {
        if (username == users[i].username && password == users[i].password) {
            isAuthenticated = true;
            break;
        }
    }

   
    if (isAuthenticated) {
        std::cout << "Успешная аутентификация!" << std::endl;
    } else {
        std::cout << "Неверное имя пользователя или пароль!" << std::endl;
    }

    return 0;
}