#include <iostream>
using namespace std;

int main(){
	int a;
	
	while(cin >> a && a != 0){
		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0){
			cout << "a leap year" << endl;
		} else{
			cout << "a normal year" << endl; 
		}
	}
	return 0;
}
