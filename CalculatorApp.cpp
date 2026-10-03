// CalculatorApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
double sum(double a, double b)
{
    double temp = a + b;
    return temp;
}

int main()
{
    std::cout << "Dobro pozhalocat v calculator!\n";
    double a;
    double b;
    std::cout << "vvedite pervoe chislo: ";
    std::cin >> a;
    std::cout << "vvedite vtoroe chislo: ";
    std::cin >> b;
    double result = sum(a, b);
    std::cout << "Cumma: " << result << "\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"


