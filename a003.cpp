#include<iostream>
using namespace std;

int main(){
	int M, D;
	cin >> M;
	cin >> D;
	
	if((M*2+D) % 3 == 0){
		cout << "´¶³q" << endl;
	} else if ( (M*2+D) %3 == 1){
		cout << "¦N" << endl;
	} else{
		cout << "¤j¦N" << endl; 
	}
	return 0;	
}
