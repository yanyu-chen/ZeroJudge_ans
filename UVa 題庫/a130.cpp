#include <iostream>
#include <string>
using namespace std;

bool cmp(int, int);

int main(){
	int n;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			string site[10];
			int highest = 0, rank[10];
			for (int j = 0; j < 10; j++){
				cin >> site[j] >> rank[j];
				if (highest < rank[j]){
					highest = rank[j];
				}
			}
			cout << "Case #" << i+1 << ":" << endl;
			for (int j = 0; j < 10; j++){
				if (highest == rank[j]){
					cout << site[j] << endl;
				}
			}
		}
	}
	return 0;
}

bool cmp(int a, int b){
	return a > b;
}
