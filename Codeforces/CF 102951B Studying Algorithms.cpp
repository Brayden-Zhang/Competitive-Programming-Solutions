
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, x; cin>>n>>x; 
	vector<int> algorithms;
	for (int i = 0; i<n; i++){
		int num; 
		cin>> num; 
		algorithms.push_back(num); 

	} 

	sort(algorithms.begin(), algorithms.end()); 
	int count = 0; 
	int  i =0; 
	while (i < n && count + algorithms[i] <=x){
		count +=algorithms[i]; 
		i++; 

	}
	cout<<i<<endl; 



	// for (auto num:algorithms){
	// 	cout<<num<< " "; 
	// }


}
