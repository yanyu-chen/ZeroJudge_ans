#include<iostream>
using namespace std;

int main(){
	int M, D;
	cin >> M;
	cin >> D;
	
	if((M*2+D) % 3 == 0){
		cout << "普通" << endl;
	} else if ( (M*2+D) %3 == 1){
		cout << "吉" << endl;
	} else{
		cout << "大吉" << endl; 
	}
	return 0;	
}
