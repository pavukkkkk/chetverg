#include <iostream>
using namespace std;

int main()
{
    int a,i=0, n, b, m1=-1,m2=-1, s = 0;
    cin >> n;
    for (i; i < n; i++) {
        cin >> a;
        if (a > 0) {
            if (m1 > 0) {
                if (a < m1) {
                    m2 = m1;
                    m1 = a;
                }
                else if (m1 < a && m2 > a) {
                    m2 = a;
                }
            }
            else {
                if (m2 < 0 || m2<a){
                    m1 = m2;
                    m2 = a;
                }
                else {
                    m1 = a;
                }
            }
        }
    }
    if (m2 > m1) {
        cout << m2;
    }
    else {
        cout << "oshibka";
    }
}

