#include <iostream>
#include <locale>
#include <cassert>
using namespace std;

double triangle_area_calculator(int b, int h)
{
    return b * h / 2;
}
int parallelepiped_volume_calculator(int l, int w, int h) {
    return l * w * h;
}
double circumference_calculator(int r) {
    return r * 3.14 * 2;
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
    n = abs(n);
    if (n / 10 < 1) {
        sum += n;
        return sum;
    }
    else {
        sum += n % 10 + sum_of_digits(int(n/10));
        return sum;
    }

}
void test_function() {
    assert(triangle_area_calculator(2, 5) == 5);
    assert(triangle_area_calculator(2, 0) == 0);
    assert(triangle_area_calculator(2, -5) == -5);
    assert(triangle_area_calculator(10, 20) == 100);
    cout << "Tests 1: OK\n";
    assert(parallelepiped_volume_calculator(-8, -10, 10) == 800);
    assert(parallelepiped_volume_calculator(8, -10, 10) == -800);
    assert(parallelepiped_volume_calculator(-20, 1, 0) == 0);
    assert(parallelepiped_volume_calculator(1, 1, 1) == 1);
    cout << "Tests 2: OK\n";
    assert(circumference_calculator(100) == 628);
    assert(circumference_calculator(-100) == -628);
    assert(circumference_calculator(0) == 0);
    assert(circumference_calculator(1) == 6.28);
    cout << "Tests 3: OK\n";
    assert(is_even(20) == true);
    assert(is_even(21) == false);
    assert(is_even(-20) == true);
    assert(is_even(-21) == false);
    cout << "Tests 4: OK\n";
    assert(max_number(-100, 200) == 200);
    assert(max_number(-100, -200) == -100);
    assert(max_number(0, 0) == 0);
    assert(max_number(1, 1) == 0);
    cout << "Tests 5: OK\n";
    assert(is_prime(17) == true);
    assert(is_prime(18) == false);
    cout << "Tests 6: OK\n";
    assert(sum_of_digits(123456) == 21);
    assert(sum_of_digits(-201) == 3);
    assert(sum_of_digits(92781) == 27);
    assert(sum_of_digits(1020102) == 6);
    cout << "Tests 7: OK\n";
}
// Надеюсь это будет работать а то гит ругается