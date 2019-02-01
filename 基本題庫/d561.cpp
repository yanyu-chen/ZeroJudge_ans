#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	char str[103];
	while (cin >> str){
		char tmp1[6];
		for (int i = 0; i < 7; i++){
			tmp1[i] = str[i];
		}
		double ans = round(atof(tmp1)*100) / 100;
		if (ans == -0.00){
			ans *= -1;
		}
		cout << fixed << setprecision(2) << ans << endl;
	}
	return 0;
}
