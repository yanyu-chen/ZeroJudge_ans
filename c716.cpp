#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	while (getline(cin, name)){
		cout << "Go, " << name << ", go go";
	}
	return 0;
}
