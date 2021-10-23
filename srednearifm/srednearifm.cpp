

#include <iostream>
#include <iomanip>
using namespace std;

double geom(double x, double y) {
    return (sqrt(x * y));

}
double arifm(double x, double y) {
    return ((x+y)/2);

}

bool chto(double a, double b) {
    if (a > b){
        return true;
    }
    else {
        return false;
    }

}



int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << boolalpha<<chto(arifm(a, b), geom(a, b))<<endl;
    cout <<chto(arifm(c, d), geom(c, d))<<endl;
    cout << arifm(max(arifm(a, b), geom(a, b)), max(arifm(c, d), geom(c, d)));
}

