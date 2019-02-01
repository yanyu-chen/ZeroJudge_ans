#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		// reduced by induction
		if (n % 4 == 0){
			cout << "egg" << endl;
		} else{
			cout << "fat" << endl;
		}
	}
	return 0;
}
