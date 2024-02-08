#include "main.h"
#include <iostream>
#include <conio.h>

int main()
{   
    setlocale(LC_ALL, "RUS");
    int x, b, h, r, w, l, num, num1, num2, number, n;
    string str1;
    
    while (_getch() != 27)
    {
        system("cls");
        cout << "�������� ��������:\n1.���������� ������� ������������\n2.���������� ������ ���������������\n3.���������� ������� �����\n4.�������� ����� �� ��������/����������\n5.������������ ����� �� 2-��\n6.�������� ����� �� �������\n7.���������� ����� ���� �����\nESC - ����� �� ���������\n";
        cin >> x;
        system("cls");
        switch (x) 
        {
            case 1:
            {
                cout << "1.���������� ������� ������������\n";
                cout << "������� �������� b � h\n";
                cin >> b;
                cin >> h;
                if ((b | h) < 0)
                {
                    cout << "�������� b � h �� ����� ���� ��������������\n";
                    break;
                }
                const double triangle_area = triangle_area_calculator(b, h);
                cout << triangle_area << endl;
                break;
            }
            case 2:
            {
                cout << "2.���������� ������ ���������������\n";
                h = 0;
                cout << "������� �������� l, w � h\n";
                cin >> l;
                cin >> w;
                cin >> h;
                if ((l | w | h) < 0)
                {
                    cout << "�������� l, w � h �� ����� ���� ��������������\n";
                    break;
                }
                const int parallelepiped_volume = parallelepiped_volume_calculator(l, w, h);
                cout << parallelepiped_volume << endl;
                break;
            }
            case 3:
            {
                cout << "3.���������� ������� �����\n";
                cout << "������� �������� r\n";
                cin >> r;
                if (r < 0)
                {
                    cout << "�������� r �� ������ ���� �������������\n";
                    break;
                }
                const double circumference = circumference_calculator(r);
                cout << circumference << endl;
                break;
            }
            case 4:
            {
                cout << "�������� ����� �� ��������/����������\n";
                cin >> num;
                if (is_even(num) == true)
                    str1 = "����� ������";
                else
                    str1 = "����� ��������";
                cout << str1 << endl;
                break;
            }
            case 5:
            {
                cout << "5.������������ ����� �� 2-��\n";
                cin >> num1;
                cin >> num2;
                if (max_number(num1, num2) == 0)
                    cout << "����� �����" << endl;
                else
                    cout << max_number(num1, num2) << endl;
                break;
            }
            case 6:
            {
                cout << "6.�������� ����� �� �������\n";
                cin >> number;
                if (is_prime(number) == true)
                    cout << "����� �������" << endl;
                else
                    cout << "����� �� �������" << endl;
                break;
            }
            case 7: 
            {
                cout << "7.���������� ����� ���� �����\n";
                cin >> n;
                cout << "����� ���� ����� " << n << " �����: " << sum_of_digits(n) << endl;
                break;
            }
        }        
    }
    return 0;
}