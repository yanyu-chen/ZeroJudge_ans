#include <iostream>
using namespace std;

int main(){
	int line;
	cin >> line;
	
	while (line > 0){
		int a1, a2, a3, a4;
		cin >> a1 >> a2 >> a3 >> a4;
		
		if (a2%a1 == 0 && a2 / a1 == a3/a2){
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a4*a3/a2 << endl;
		} else{
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a4 + (a3-a2) << endl; 
		}
		line -= 1;
	}
return 0;
}
