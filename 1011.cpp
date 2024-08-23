#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double r;
	cin >> r;
	r = (4/3.0) * 3.14159 * (r*r*r);
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << r << endl;
}
