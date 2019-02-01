#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			int d = 100 - x - y;
			if (0 < d && d <= 30){
				cout << "sad!" << endl;
			} else if (30 < d && d <= 60){
				cout << "hmm~~" << endl;
			} else if (60 < d && d < 100){
				cout << "Happyyummy" << endl;
			} else{
				cout << "evil!!" << endl;
			}
		}
	}
	return 0;
}
