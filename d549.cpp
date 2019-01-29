#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double a, b ,c;
	while (cin >> a >> b >> c){
		cout << fixed << setprecision(2) << sqrt(a*a + c*c - b*b) << endl;
		//reduced by the geometric relation
	}
	return 0;
}
