#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	double a[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
		double det = a[0]*a[3] - a[1]*a[2];
		if (det == 0){
			cout << "cheat!" << endl;
		} else{
			double b[4];
			b[0] = a[3]/det;
			b[1] = -1*a[1]/det;
			b[2] = -1*a[2]/det;
			b[3] = a[0]/det;
			cout << fixed << setprecision(5) << b[0] << " " << b[1]<< endl << b[2] << " " << b[3] << endl;
		}
	}
	return 0;
}
