#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			int h1, m1, h2, m2, t;
			cin >> h1 >> m1 >> h2 >> m2 >> t;
			if ((h2 - h1)*60 + m2 - m1 -t >= 0){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
