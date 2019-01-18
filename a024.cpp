#include <iostream>
using namespace std;

int main(){
	long a, b;
	
	while(cin >> a >> b){
		while (a != 0 && b != 0){
			if (a < b){
				b %= a;
			} else{
				a %= b;	
			}
			if (a == 0){
				cout << b << endl;
			} else if (b == 0){
				cout << a << endl; 
			} else{
				continue;
			}
		}
	}
	return 0;
}	
