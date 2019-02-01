#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		int count = 0;
		bool start = false, end = false;
		for (int i = 0; i < str.length(); i++){
			if (start && str[i] < 65){
				end = true;
			} else if (start && str[i] > 90 && str[i] < 97){
				end = true;
			} else if (start && str[i] > 122){
				end = true;
			} else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122){
				start = true;
			}
			if (start && end){
				count++;
				start = false;
				end = false;
			} else if (start && i == str.length()-1){
				count++;
			}
			//cout << str[i] << " " << count << " " << start << " " << end << endl;
		}
		cout << count << endl;
	}
	return 0;
}
