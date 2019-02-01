#include <iostream>
using namespace std;

int main(){
	long long int line, a, b, c;
	cin >> line;
	
	while (line > 0){
		cin >> a >> b >> c;
		if (a == 1){
			cout << b+c << endl;
		} else if (a == 2){
			cout << b-c << endl;
		} else if (a == 3){
			cout << b*c << endl;
		} else {
			cout << b/c << endl;
		}
		line -= 1;
		}
	return 0;
	}
