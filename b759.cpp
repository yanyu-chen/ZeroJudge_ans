#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	while (cin >> str){
		int l = str.length();
		for (int i = 0; i < l ; i++){
			cout << str << endl;
			char temp = str[0];
			for (int j = 0; j < l-1; j++){
				str[j] = str[j+1];
			}
			str[l-1] = temp;
		}
	}
	return 0;
}
