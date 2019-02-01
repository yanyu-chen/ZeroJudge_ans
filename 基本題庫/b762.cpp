#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int count = 0;
		int kill = 0, assist = 0, die = 0;
		string str[n];
		vector<string> ans;
		for (int i = 0; i < n; i++){
			cin >> str[i];
			if (!str[i].compare("Get_Kill")){
				count += 1;
				kill += 1;
				if (count <= 2){
					ans.push_back("You have slain an enemie.");
				} else if (count == 3){
					ans.push_back("KILLING SPREE!");
				} else if (count == 4){
					ans.push_back("RAMPAGE~");
				} else if (count == 5){
					ans.push_back("UNSTOPPABLE!");
				} else if (count == 6){
					ans.push_back("DOMINATING!");
				} else if (count == 7){
					ans.push_back("GUALIKE!");
				} else if (count >= 8){
					ans.push_back("LEGENDARY!");
				}
			} else if (!str[i].compare("Die")){
				if (count < 3){
					ans.push_back("You have been slained.");
				} else if (count >= 3){
					ans.push_back("SHUTDOWN.");
				}
				count = 0;
				die += 1;
			} else{
				assist += 1;
			}
		}
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i] << endl;
		}
		cout << kill << "/" << die << "/" << assist << endl;
	}
	return 0;
}
