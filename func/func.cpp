// func.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double f(double x,double a,double b) {
    return a * x * x * x + b / (x - 1);
}

int main()
{
    double a, b, c, d, h;
    cin >> a >> b >> c >> d>>h;
    for (double i = c; i <= d; i += h) {
        cout << f(i, a, b)<<endl;
    }
    
}

