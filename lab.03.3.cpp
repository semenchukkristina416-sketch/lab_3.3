// Lab_03_3.cpp
// �������� ������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 22

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, R, y;
    cout << "������ x: ";cin >> x;
    cout << "������ R: ";cin >> R;

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