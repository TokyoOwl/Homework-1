#include <iostream>
#include <locale>
using namespace std;

double triangle_area_calculator(int b, int h)
{
    return b * h / 2;
}
int parallelepiped_volume_calculator(int l, int w, int h) {
    return l * w * h;
}
double circumference_calculator(int r) {
    return 2 * 3, 14 * r;
}
bool is_even(int number) {
    if (number % 2 == 0)
        return true;
    else
        return false;
}
int max_number(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else if (num2 > num1)
        return num2;
    else
        return 0;
}
bool is_prime(int number) {
    int check=0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            check += number / i;
    }
    if (check > 0)
        return false;
    else
        return true;
}
int sum_of_digits(int n) {
    int sum = 0;
    if (n / 10 < 1) {
        sum += n;
        return sum;
    }
    else {
        sum += n % 10 + sum_of_digits(int(n/10));
        return sum;
    }

}
// Надеюсь это будет работать а то гит ругается