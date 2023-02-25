
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);

	int m,n,k; cin >> m>>n>>k; 
	vector<string> signal(k); 
	for (int i = 0; i< m; i++){

		string line; cin>>line; 
		string output_line; 
		for (int j = 0; j <n;j++ ){
			for (int l = 0; l<k; l++){
				output_line +=line[j]; 
			}
		}
		for (int j = 0; j<k; j++){
			cout<<output_line<<endl; 
		}
	}
}
