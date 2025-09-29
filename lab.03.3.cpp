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

    if (x <= -8) 
        y = -R;
    else 
        if (x > -8 && x <= -R) 
        y = (2.0/(8-R))*(x+8)-2;
    else 
            if (x > -R && x <= R) 
        y = -sqrt(R * R - x * x);
    
    else
                if (x >= R && x <5 ) 
        y = (3.0/(5- R)) * (x - R);
    
    else // x>=5
        y = 3;
    

    cout << "y = " << y << endl;
    return 0;
}