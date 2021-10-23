

#include <iostream>
#include <iomanip>
using namespace std;
int koren(int& a) {
    for (int j = 0; j * j <= a; j++) {
        if (j * j == a) {
            a = j;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        if (koren(a) == 1) {
            cout << a << endl;
        }
        else {
            cout << "oshibka"<<endl;
        }
    }

}
