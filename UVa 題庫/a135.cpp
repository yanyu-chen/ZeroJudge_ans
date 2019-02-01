#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int n = 0;
	while (cin >> str){
		string ans;
		if (!str.compare("#")){
			break;
		} else if (!str.compare("HELLO")){
			ans = "ENGLISH";
		} else if (!str.compare("HOLA")){
			ans = "SPANISH";
		} else if (!str.compare("HALLO")){
			ans = "GERMAN";
		} else if (!str.compare("BONJOUR")){
			ans = "FRENCH";
		} else if (!str.compare("CIAO")){
			ans = "ITALIAN";
		} else if (!str.compare("ZDRAVSTVUJTE")){
			ans = "RUSSIAN";
		} else{
			ans = "UNKNOWN";
		}
		n++;
		cout << "Case " << n << ": " << ans << endl;
	}
	return 0;
}
