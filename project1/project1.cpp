#include <iostream>

using namespace std;

int main()
{   
    setlocale(0, "");
    int a, b; 
    cout << "Введите 2 числа\n";
    cin >> a >> b;
    cout << "Сумма: " << a + b << endl;
    cout << "Произведение: " << a * b;
    cout << "РАЗНОСТЬ: " << a - b;
}

