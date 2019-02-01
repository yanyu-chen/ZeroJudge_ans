#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string add(int, int, int, int);
string min(int, int, int, int);
string mul(int, int, int, int);
string div(int, int, int, int);
int gcd(int, int);

int main(){
	int a, b, c, d;
	char e;
	while (cin >> a >> b >> c >> d >> e){
		if (e == '+'){
			cout << add(a, b, c, d) << endl;
		} else if (e == '-'){
			cout << min(a, b, c, d) << endl; 
		} else if (e == '*'){
			cout << mul(a, b, c, d) << endl;
		} else if (e == '/'){
			cout << div(a, b, c, d) << endl;
		}
	}
	return 0;
}

string add(int a, int b, int c, int d){
	if (b < 0){
		b *= -1;
		a *= -1;
	}
	if (d < 0){
		d *= -1;
		c *= -1;
	}
	int num = a*d + b*c;
	if (num ==  0){
		return "0";
	} else{
		int den = b*d;
		int e = gcd(abs(num), abs(den));
		num /= e;
		den /= e;
		if (den == 1){
			return to_string(num);
		} else{
			return to_string(num) + "/" + to_string(den);
		}
	}
}

string min(int a, int b, int c, int d){
	return add(a, b, -c, d);
}

string mul(int a, int b, int c, int d){
	if (b < 0){
		b *= -1;
		a *= -1;
	}
	if (d < 0){
		d *= -1;
		c *= -1;
	}
	int num = a*c;
	if (num ==  0){
		return "0";
	} else{
		int den = b*d;
		int e = gcd(abs(num), abs(den));
		num /= e;
		den /= e;
		if (den == 1){
			return to_string(num);
		} else{
			return to_string(num) + "/" + to_string(den);
		}
	}
}

string div(int a, int b, int c, int d){
	return mul(a, b, d, c);
}

int gcd(int a, int b){
	while (a != 0 && b != 0){
			if (a < b){
				b %= a;
			} else{
				a %= b;	
			}
			if (a == 0){
				return b;
			} else if (b == 0){
				return a; 
			} else{
				continue;
			}
	}
}
