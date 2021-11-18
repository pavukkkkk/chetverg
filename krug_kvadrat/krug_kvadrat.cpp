

#include <iostream>
#include <string>
const double PI = acos(-1.0);
using namespace std;
string s(double r, double x, double eps) {
    double s1, s2;
    s1 = PI * r * r;
    s2 = x * x;
    if (s1 +eps< s2){
        return "krug";
    }
    else if (s1 > s2+eps) {
        return "kvadrat";
    }
    else {
        return "ravni";
    }
}
int main()
{
    double eps = 10e-6;
    double x, r;
    cin >> x >> r;
    cout << s(x, r,eps);
}

