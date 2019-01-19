#include <iostream>
using namespace std;

int main(){
	int row, col;
	while (cin >> row >> col){
		int matrix[col][row];
		for(int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				cin >> matrix[j][i];
			}
		}
		for(int i = 0; i < col; i++){
			for (int j = 0; j < row; j++){
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}	
	}
	return 0;
}
