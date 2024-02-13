#include <iostream>

int main()
{   
    setlocale(0, "");
    int a, b; 
    std::cout << "Введите 2 числа";
    std::cin >> a >> b;
    std::cout << "Ответ:" << a + b;
}

