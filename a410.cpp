#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a[6];
	while(cin >> a[0]){
		for (int i = 1; i < 6; i++){
			cin >> a[i];
		}
		int delta = a[0]*a[4] - a[1]*a[3];
		int delta_x = a[2]*a[4] - a[1]*a[5];
		int delta_y = a[0]*a[5] - a[2]*a[3];
		if (delta == 0){
			if (delta_x != 0 || delta_y != 0){
				cout << "No answer" << endl;
			} else{
				cout << "Too many" << endl;
			}
		} else{
			double x = (double)(delta_x) / (double)(delta);
			double y = (double)(delta_y) / (double)(delta);
			cout << "x=" << setiosflags(ios::fixed) << setprecision(2) << x << endl;
			cout << "y=" << setiosflags(ios::fixed) << setprecision(2) << y << endl;
		}
	}
	return 0;
}
