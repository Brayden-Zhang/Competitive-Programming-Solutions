
#include <bits/stdc++.h>
using namespace std;

int main() {



	int n; cin>>n; 
	vector<int> guesses(n);
	vector<pair<int, int>>swaps(n); 




	for (int i =0;i<n;i++){
		int a,b,g; cin>>a>>b>>g; 
		swaps[i] = make_pair(a,b); 
		guesses[i] = g;


	}

	// keep track of max points Elsie can earn across all starting locations
	int maxpoints = 0; 

// iterate throguh every possible starting location (1,2, or 3)
	for (int starting = 1; starting <=3; starting++){

		// vector that stores state of pebble
		vector<bool> hasPebble(4, false);

		hasPebble[starting] = true; 

		// num points that they have earned
		int numpoints=0; 

		// process of swapping
		for (int i = 0; i < n; i++){
			int a = swaps[i].first, b = swaps[i].second;

			swap(hasPebble[a], hasPebble[b]); 

			int guess = guesses[i];

			if (hasPebble[guess]){
				numpoints++; 
			}




		}
		maxpoints = max(maxpoints, numpoints); 

	}
	cout<<maxpoints<<endl; 


}
