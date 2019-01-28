#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			double a, b;
			cin >> a >> b;
			double rate1 = (b-a)/a*100;
			double rate2 = rate1;
			//cout << (int)(rate*1000) % 10 << endl;
			if ((int)(rate1*1000)%10 >= 5){
				rate2 += 0.005;
			} else if ((int)(rate1*1000)%10 <= -5){
				rate2 -= 0.005;
			}
			cout << fixed << setprecision(2) << rate2 << "% ";
			if (rate1 >= 10.00 || rate1 <= -7.004){
				cout << "dispose" << endl;
			} else{
				cout << "keep" << endl;
			}
		}
	}
	return 0;
}
