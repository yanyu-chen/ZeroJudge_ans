#include <iostream>
using namespace std;

int main(){
	int x, y;
	while (cin >> x >> y){
		x += 2;
		y += 30;
		if (y >= 60){
			y -= 60;
			x += 1;
		}
		if (x >=24 ){
			x -= 24;
		}
		if (x / 10 == 0){
			cout << "0" << x << ":"; 
		} else{
			cout << x << ":";
		}
		if (y / 10 == 0){
			cout << "0" << y << endl;
		} else{
			cout << y << endl;
		}
	}
	return 0;
}
