#include <iostream>
using namespace std;

int main()
{
    int a, s0 = 0,s1=0;
    while (true) {
        cin >> a;
        if (a == 0) {
            break;
        }
        if (a % 2 == 0) {
            s0++;
       }
        else {
            s1++;
        }
    }
    cout << "chet: " << s0 << endl << "nechet: " << s1;
}

