#include <iostream>
using namespace std;

int main(){
	int a, b;
	while (cin >> a >> b){
		if (a >= 17){
			cout << "Off School" << endl;
		} else if (a == 7 && b < 30){
			cout << "Off School" << endl;
		} else if (a < 7){
			cout << "Off School" << endl;
		} else{
			cout << "At School" << endl;
		}
	}
	return 0;
}
