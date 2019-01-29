#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int , int);

int main(){
	int n;
	while(cin >> n){
		vector<int> num;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			num.push_back(a);
		}
		sort(num.begin(), num.end(), cmp);
		for(int i = 0; i < n; i++){
			cout << num[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

bool cmp(int a, int b){
	if(a%10 == b%10){
		return a > b;
		}
	else{
		return a%10 < b%10;
	}
}
