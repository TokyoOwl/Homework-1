#include "main.h"
#include <iostream>

int main()
{   
    setlocale(LC_ALL, "RUS");
    cout << "Выберите действие:\n1.Вычисление площади треугольника\n2.Вычисление объёма параллелепипеда\n3.Вычисление площади круга\n4.Проверка числа на чётность/нечётность\n5.Максимальное число из 2-ух\n6.Проверка числа на простое\n7.Вычисление суммы цифр числа\n";
    int x, b, h, r, w, l, num, num1, num2, number, n;
    string str1;
    cin >> x;
    switch(x) {
    case 1: {
        cin >> b;
        cin >> h;
        const double triangle_area = triangle_area_calculator(b, h);
        cout << triangle_area << endl;
        break;
    }
    case 2: {
        h = 0;
        cin >> l;
        cin >> w;
        cin >> h;
        const int parallelepiped_volume = parallelepiped_volume_calculator(l, w, h);
        cout << parallelepiped_volume << endl;
        break; 
    }
    case 3: {
        cin >> r;
        const double circumference = circumference_calculator(r);
        cout << circumference << endl;
        break;
    }
    case 4: {
        cin >> num;
        if (is_even(num) == true)
            str1 = "Число чётное";
        else
            str1 = "Число нечётное";
        cout << str1 << endl;
        break;
    }
    case 5:
    {
        cin >> num1;
        cin >> num2;
        if (max_number(num1, num2) == 0)
            cout << "Числа равны" << endl;
        else
            cout << max_number(num1, num2) << endl;
        break;
    }
    case 6:
    {
        cin >> number;
        if (is_prime(number) == true)
            cout << "Число простое" << endl;
        else
            cout << "Число не простое" << endl;
        break;
    }
    case 7: {
        cin >> n;
        cout <<"Сумма цифр числа "<< n << " равна: " << sum_of_digits(n) << endl;
        break;
    }
    }
}