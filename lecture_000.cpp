// Writing first hello world program in C++
// using i/o streams

#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are "<< age << " years old" << std::endl;
    return 0;
}