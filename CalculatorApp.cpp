// CalculatorApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
double sum(double a, double b, double c)
{
    double temp = a + b + c;
    return temp;
}

int main()
{
    std::cout << "Dobro pozhalocat v calculator!\n";
    double a;
    double b;
    double c;
    std::cout << "vvedite pervoe chislo!: ";
    std::cin >> a;
    std::cout << "vvedite vtoroe chislo!: ";
    std::cin >> b;
    std::cout << "vvedite tretie chislo!: ";
    std::cin >> c;
    double result = sum(a, b, c);
    std::cout << "Cumma thex chisel: " << result << "\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"


