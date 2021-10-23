
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(15);
	double s=0,n = 100000;

	for (double i = 1; i <= n; i++) {
		s += (1 / i);
	}
	cout << s << endl;
	s = 0;
	for (double i = n; i >= 1; i--) {
		s += (1 / i);
	}
	cout << s << endl;
   
}
/*12.090146129863335
12.090146129863408*/
