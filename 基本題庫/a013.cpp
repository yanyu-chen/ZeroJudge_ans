#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int roman_to_num(string);
int abs(int);
string num_to_roman(int);

int main(){
	string str1, str2;
	while (cin >> str1 >> str2 && str1 != "#"){
		int a = roman_to_num(str1);
		int b = roman_to_num(str2);
		if (a == b){
			cout << "ZERO" << endl;
		} else{
			//cout << a - b << endl;
			cout << num_to_roman(abs(a - b)) << endl;
		}
	}
	return 0;
}

int roman_to_num(string str){
	int n = str.length();
	int a[n];
	for (int i = 0; i < n; i++){
		if (str[i] == 'I'){
			a[i] = 1;
		} else if (str[i] == 'V'){
			a[i] = 5;
		} else if (str[i] == 'X'){
			a[i] = 10;
		} else if (str[i] == 'L'){
			a[i] = 50;
		} else if (str[i] == 'C'){
			a[i] = 100;
		} else if (str[i] == 'D'){
			a[i] = 500;
		} else if (str[i] == 'M'){
			a[i] = 1000;
		}
	}
	int num = a[n-1];
	for (int i = 0; i < n-1; i++){
		if (a[n-1-i] <= a[n-2-i]){
			num += a[n-2-i];
		} else{
			num -= a[n-2-i];
		}
	}
	return num;
}

int abs(int a){
	return a < 0 ? -a : a;
}

string num_to_roman(int num){
	string s = to_string(num);
	string str;
	int l = s.length();
	for (int i = 0; i < l; i++){
		int a = num/pow(10, l-1-i);
		int dig = a%10;
		string _1 = "MCXI";
		string _5 = "DLV";
		//cout << dig << endl;
		if (1 <= dig && dig < 4){
			for (int j = 0; j < dig; j++){
				str += _1[4-l+i];
			}
		} else if (dig == 4){
			str += _1[4-l+i];
			str += _5[3-l+i];
		} else if (dig == 5){
			str += _5[3-l+i];
		} else if (5 < dig && dig < 9){
			str += _5[3-l+i];
			for (int j = 0; j < dig-5; j++){
				str += _1[4-l+i];
			}
		} else if (dig == 9){
			str += _1[4-l+i];
			str += _1[3-l+i];
		} else{
			continue;
		}
		//cout << str << endl;
	}
	return str;
}
