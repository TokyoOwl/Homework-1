#include <iostream>
#include <locale>
#include <cassert>
using namespace std;

double triangle_area_calculator(int b, int h)
{
    if ((b | h) < 0) {
        cerr << "Error\n b or h cannot be negative\n";
        return 0;
    }
    else if ((b|h)==0){
        cerr << "Error\n b or h cannot be zero\n";
        return 1;
    }
    else
    {
        return b * h / 2;
    }
}
int parallelepiped_volume_calculator(int l, int w, int h) {
    if ((l | w | h) < 0) {
        cerr << "Error\n l, w or h cannot be negative\n";
        return 0;
    }
    else if ((l | w | h) == 0) {
        cerr << "Error\n l, w or h cannot be zero\n";
        return 1;
    }
    else return l * w * h;
}
double circumference_calculator(int r) {
    if (r <= 0) {
        cout << "Error\n r cannot be zero\n";
        return 1;
    }
    else return r * 3.14 * 2;
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
void test_triangle_area() {
    cout << "2*5*0.5 = 5?\n";
    assert(triangle_area_calculator(2, 5) == 5);
    cout << "Yes!\n";
    cout << "10*5*0.5 = 25?\n";
    assert(triangle_area_calculator(10, 5) == 25);
    cout << "Yes!\n";
    cout << "200*50*0.5 = 2500?\n";
    assert(triangle_area_calculator(200, 50) != 2500);
    cout << "No!\n";
    cout << "Test 1: OK\n";
}
void test_parallelepiped_volume() {
    cout << "8*10*20 = 1600?\n";
    assert(parallelepiped_volume_calculator(8, 10, 20) == 1600);
    cout << "Yes!\n";
    cout << "4*5*1 = 200?\n";
    assert(parallelepiped_volume_calculator(4, 5, 1) != 200);
    cout << "No!\n";
    cout << "7*11*2 = 154?\n";
    assert(parallelepiped_volume_calculator(7, 11, 2) == 154);
    cout << "Yes!\n";
    cout << "Test 2: OK\n";
}
void test_circumference() {
    cout << "100*3.14*2 = 628?\n";
    assert(circumference_calculator(100) == 628);
    cout << "Yes!\n";
    cout << "1*3.14*2 = 6.28?\n";
    assert(circumference_calculator(1) == 6.28);
    cout << "Yes!\n";
    cout << "Test 3: OK\n";
}
void test_even() {
    cout << "20 is even?\n";
    assert(is_even(20) == true);
    cout << "Yes!\n";
    cout << "21 is even?\n";
    assert(is_even(21) == false);
    cout << "No!";
    cout << "Test 4: OK\n";
}
void test_max() {
    cout << "20 bigger than 28?\n";
    assert(max_number(20, 28) != 20);
    cout << "No!\n";
    cout << "-5 bigger than -100?\n";
    assert(max_number(-5, -100) == -5);
    cout << "Yes!\n";
    cout << "Test 5: OK\n";
}
void test_prime() {
    cout << "9 is prime?\n";
    assert(is_prime(9) == false);
    cout << "No!\n";
    cout << "7 is prime?\n";
    assert(is_prime(7) == true);
    cout << "Yes!\n";
    cout << "Test 6: OK\n";
}
void test_digits() {
    cout << "Sum of digits in 123 = 6?\n";
    assert(sum_of_digits(123) == 6);
    cout << "Yes!\n";
    cout << "Sum of digits in 201 = 7?\n";
    assert(sum_of_digits(201) != 7);
    cout << "No!\n";
    cout << "Test 7: OK\n";

}
// Надеюсь это будет работать а то гит ругается
