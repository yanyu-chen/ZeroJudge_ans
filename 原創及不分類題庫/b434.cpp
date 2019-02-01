#include <iostream>
#include <math.h>
using namespace std;

int abs(int);

int main(){
	int w, h;
	while (cin >> w >> h){
		double img[h][w][3];
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				for (int k = 0; k < 3; k++){
					cin >> img[i][j][k];
				}
			}
		}
		int edge[h][w][3];
		int delta_x[h][w][3];
		int delta_y[h][w][3];
		for (int i = 0; i < h; i++){
			for (int k = 0; k < 3; k++){
				for (int j = 0; j < w-1; j++){
					delta_x[i][j][k] = abs(img[i][j+1][k] - img[i][j][k]);
				}
				delta_x[i][w-1][k] = 0;
			}
		}
		for (int j = 0; j < w; j++){
			for (int k = 0; k < 3; k++){
				for (int i = 0; i < h-1; i++){
					delta_y[i][j][k] = abs(img[i+1][j][k] - img[i][j][k]);
				}
				delta_y[h-1][j][k] = 0;
			}
		}
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				for (int k = 0; k < 3; k++){
					edge[i][j][k] = (int) round(((double)delta_x[i][j][k] + (double)delta_y[i][j][k]) / 2);
				}
			}
		}
		cout << w << " " << h << endl;
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				for (int k = 0; k < 3; k++){
					cout << edge[i][j][k] << " ";
				}
			}
			cout << endl;
		}		
	}
	return 0;
}

int abs(int a){
	return a < 0 ? -1*a : a;
}
