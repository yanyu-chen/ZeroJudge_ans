#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int sum = 0;
		for (int i = 1; i < n; i++){
			if (n % i == 0){
				sum += i;
			}
		}
		if (n < sum){
			cout << "�ռ�" << endl; 
		} else if (n == sum){
			cout << "������" << endl; 
		} else{
			cout << "����" << endl; 
		}
	}
	return 0;
}
