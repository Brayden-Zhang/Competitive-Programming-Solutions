
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n,m; cin >> n>>m; 

	int limit[100], bessie[100]; 

	int length, speed, pos = 0; 

	for (int i = 0; i < n; i++ ){
		cin >> length >> speed; 

		// for each of the next length positions, set the speed limit

		for (int j = pos; j< pos + length; j++){
			limit[j] = speed; 
		}
		pos += length; 


	}
	pos  = 0; 
	for (int i = 0; i<m; i++){
		cin >> length >>speed; 
		for (int j = pos; j< (pos + length); j++){
			bessie[j] = speed; 

		}
		pos += length; 


	}
	int  max_over = 0; 

	for (int i = 0; i< 100; i++){
		// take max bsessie exceeded limit by over all positions
		max_over = max(max_over, bessie[i] - limit[i]); 
	}
	cout<< max_over<<endl; 

}
