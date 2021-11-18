

#include <iostream>
#include <iomanip>
using namespace std;
int koren(double& a) {
    if (a >= 0) {
        a = sqrt(a);
        return 1;
    }
    return 0;
}

int main()
{
    double a;
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
