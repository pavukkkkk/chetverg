#include <iostream>
using namespace std;

int main()
{
    int a,n, b, s=0;
    cin >> n;

    for (int i= 0; i <n;  i++) {
        cin >> b;
        if (b < 0) {
            s += b;
        }
    }
    cout << s;
}

