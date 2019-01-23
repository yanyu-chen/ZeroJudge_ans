#include <iostream>
#include <string>
using namespace std;

string trans(string);

int main(){
	string str;
	while (getline(cin, str)){
		cout << trans(str) << endl;
	}
	return 0;
}

string trans(string str){
	for (int i = 0; i < str.length(); i++){
		str[i] = (char)(str[i] - 7); // k = -7
	}
	return str;
}
