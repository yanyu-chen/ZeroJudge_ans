#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		bool ans[n];
		for (int k = 0; k < n; k++){
			int a, b;
			cin >> a >> b;
			int matrix[a][b];
			for (int i = 0; i < a; i++){
				for (int j = 0; j < b; j++){
					cin >> matrix[i][j];
				}
			}
			ans[k] = true;
			for (int i = 0; i < a; i++){
				for (int j = 0; j < b; j++){
					if (matrix[i][j] != matrix[a-1-i][b-1-j]){
						ans[k] = false;
						break;
					}
				}
			}
		}
		for (int k = 0; k < n; k++){
			if (ans[k]){
				cout << "go forward" << endl;
			} else{
				cout << "keep defending" << endl;
			}
		}
	}
	return 0;
} 
