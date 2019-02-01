#include <iostream>
using namespace std;

int main(){
	int role, lv, pt;

	while(cin >> role >> lv){
	if (role == 0){
			pt = 0;
	} else if (role == 2){
			if (lv < 8){
				pt = 0;
			} else if (8 <= lv && lv < 30){
				pt = (lv - 8)*3 + 1;
			} else if (30 <= lv && lv < 70){
				pt = (lv - 8)*3 + 2;  
			} else if (70 <= lv && lv <120){
				pt = (lv - 8)*3 + 3;
			} else{
				pt = (lv - 8)*3 + 6;
			}
	} else {
			if (lv < 10){
				pt = 0;
			} else if (10 <= lv && lv < 30){
				pt = (lv - 10)*3 + 1;
			} else if (30 <= lv && lv < 70){
				pt = (lv - 10)*3 + 2;
			} else if (70 <= lv && lv < 120){
				pt = (lv - 10)*3 + 3;
			} else{
				pt = (lv - 10)*3 + 6;
			}
			
	}
	
	cout << pt << endl;
	}
	return 0;
}
