#include <iostream>

// working with strings

#include <string>

// int main()
// {
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::cin >> name;
//     std::cout << "Hello " << name << "! It is nice to meet you." << std::endl;
//     return 0;
// }

// working with arrays

#include <array>

// int main() {
//     std::array<float, 3> arr = {1.0f, 2.0f, 3.0f};
//     for (int i = 0; i < arr.size(); ++i) {
//         std::cout << arr[i] << std::endl;
//     }

//     std::cout << arr.front() << " " << arr.back() << std::endl;
//     return 0;
// }

// working with vectors

#include <vector>

// int main () {
//     std::vector<std::string> my_todos;
//     my_todos.reserve(30);
//     std::cout << "Enter your todos (q to end): ";
//     std::string item;
//     std::cin >> item;
//     while (item != "q") {
//         my_todos.push_back(item);
//         std::cin >> item;
//     }

//     std::cout << "TO-DOs" << std::endl;
//     for (int i = 0; i < my_todos.size(); ++i) {
//         std::cout << i+1 << " " << my_todos[i] << std::endl;
//     }
//     return 0;
// }

// using references

// int main () {
//     const std::string name = "Allison Ogechukwu";
//     const std::string& name_ref = name;
//     std::cout << "Original variable: " << name << std::endl;
//     std::cout << "Reference: " << name_ref << std::endl;
//     return 0;
// }

// using range for loop

int main () {
    std::vector<std::string> my_todos;
    my_todos.reserve(30);
    std::cout << "Enter your todos (q to end): ";
    std::string item;
    std::cin >> item;
    while (item != "q") {
        my_todos.push_back(item);
        std::cin >> item;
    }

    std::cout << "TO-DOs" << std::endl;
    for (const auto& todos: my_todos) {
        std::cout << todos << std::endl;
    }
    return 0;
}