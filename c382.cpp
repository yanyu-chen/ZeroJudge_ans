#include <iostream>
using namespace std;

int main(){
	int a, c;
	char b;
	while (cin >> a >> b >> c){
		if (b == '+'){
			cout << a+c << endl;
		} else if (b == '-'){
			cout << a-c << endl;
		} else if (b == '*'){
			cout << a*c << endl;
		} else if (b == '/'){
			cout << a/c << endl;
		}
	}
	return 0;
}
