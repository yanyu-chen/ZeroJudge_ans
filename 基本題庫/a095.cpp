#include <iostream>
using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m){
		//by induction
		if (n == m){
			cout << n << endl;
		} else{
			cout << m+1 << endl;
		}
	}
	return 0;
}
