// Lab_03_3.cpp
// Семенчук Крістіни
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 22

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, R, y;
    cout << "Введіть x: ";cin >> x;
    cout << "Введіть R: ";cin >> R;

    if (x <= -2 * R) 
        y = -R;
    else 
        if (x > -2 * R && x <= -R) 
        y = x + R;
    else 
            if (x > -R && x <= R) 
        y = -sqrt(R * R - x * x);
    
    else
                if (x > R && x <= 2 * R) 
        y = (2.0 / R) * (x - R);
    
    else 
        y = 2;
    

    cout << "y = " << y << endl;
    return 0;
}