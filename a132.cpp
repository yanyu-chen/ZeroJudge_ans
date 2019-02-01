#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int n;
	while (cin >> n && n != 0){
		if (n == 1){
			cout << "The parity of 1 is 1 (mod 2)." << endl;
		} else{
			int i = 0;
			string ans;
			int sum = 0;
			while (n > 0){
				int tmp = n % 2;
				sum += tmp;
				ans.insert(0, to_string(tmp));
				n /= 2;
				i++;
			}
			cout << "The parity of " << ans << " is " << sum << " (mod 2)." << endl; 
		}
	}
	return 0;
}
