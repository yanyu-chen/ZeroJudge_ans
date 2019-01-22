#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		cout << (n + 1) * n * (n - 1) / 6 + n + 1 << endl;
		/* consider the case of a plane with n distinct lines,
		   one can formulate it as (n+1)*n/2+1 by the intersection of an additional line.
		   Generate it to a space,
		   the additional (n+1)th cut will have additonal (n+1)*n/2+1 regiion since there are n distinct lines on it.
		   Then, we obtain the result.
		*/ 
	}
	return 0;
} 
