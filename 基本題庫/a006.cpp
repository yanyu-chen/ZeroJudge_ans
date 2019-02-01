#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c, x1, x2;
	cin >> a >> b >> c;
	 
	x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
	x2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
	if (b*b - 4*a*c > 0){
		cout << "Two different roots x1=" << x1 << " , x2=" << x2;
	} else if(b*b - 4*a*c == 0){
		cout << "Two same roots x=" << x1 << endl;
	} else {
		cout << "No real root" << endl;
	}
	return 0;
}
