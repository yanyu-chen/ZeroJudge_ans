#include <iostream>
using namespace std;

int main(){
	long long int n, m;
	while(cin >> n >> m){
		bool test = false;
		if (m == 0){
			test = true;
		} else{
			for (long long int i = 1; ; i++){
				if (i+i*(i-1)*m/2 == n){
					test = true;
					break;
				} else if (i+i*(i-1)*m/2 > n){
					break;
				}
			}	
		}
		if (test){
			cout << "Go Kevin!!" << endl;	
		} else{
			cout << "No Stop!!" << endl;
		}
	}
	return 0;
}
