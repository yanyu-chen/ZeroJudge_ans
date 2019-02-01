#include <iostream>
#include <string>
using namespace std;

string to_upper(string);
int count(string); 

int main(){
	string str;
	while (cin >> str && str != "0"){
		str = to_upper(str);
		int pt = count(str);
		if (pt == 0){
			cout << "Fail" << endl;
		} else{
			cout << pt << endl; 
		}
	}
	return 0;
}

string to_upper(string str){
	for (int i = 0; i < str.length(); i++){
		if (str[i] > 96 && str[i] <= 122){
			str[i] = (char)(str[i] - 32);
		} 
	}
	return str;
}

int count(string str){
	int count = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] > 64 && str[i] <= 90){
			count += str[i] - 64;
		} else{
			count = 0;
			break;
		}
	}
	return count;
}
