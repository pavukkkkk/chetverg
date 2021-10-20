#include <iostream>
using namespace std;

int main()
{
    int a,b=11,c, i=1;
    cin >> a;
    if (a > 10) {
        i = -1;
        b = 9;

    }
    for (a; a != b; a += i) {
        cout << a << endl;
    }
}

