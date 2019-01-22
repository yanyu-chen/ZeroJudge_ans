#include <iostream>
#include <string>
using namespace std;

int main(){
	long int a[3];
	while (cin >> a[0] >> a[1] >> a[2]){
		string A = "ABC";
		for (int i = 0; i < 2; i++){
			for (int j = i+1; j < 3; j++){
				if (a[i] < a[j]){
					int temp1 = a[i];
					a[i] = a[j];
					a[j] = temp1;
					char temp2 = A[i];
					A[i] = A[j];
					A[j] = temp2;
				}
			}
		}
		if (a[0] > a[1]+a[2]){
			cout << A[0] << endl;
		} else{
			cout << A[1] << endl;
		}
	}
	return 0;
}
