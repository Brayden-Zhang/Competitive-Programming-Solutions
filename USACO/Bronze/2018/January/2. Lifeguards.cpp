#include <bits/stdc++.h>
using namespace std;

int main() {

	// read in the number of cows
	int cows;
	cin >> cows;

	// create arrays to store start and end times of each cow's shift, and to count how many cows are working at each time
	int startT[cows];
	int endT[cows];
	int times[1000];
	int shiftTotal = -1;


	// initialize the times array to 0 for every time
	for (int q = 0; q < 1000; q++) { times[q] = 0; }

	// read in each cow's shift and update the times array accordingly
	for (int c = 0; c < cows; c++) {
		cin >> startT[c] >> endT[c];
		for (int k = startT[c]; k < endT[c]; k++) { times[k]++; }
	}

	// loop through each cow and temporarily remove their shift from the times array
	for (int i = 0; i < cows; i++) {
		for (int t = startT[i]; t < endT[i]; t++) { times[t]--; }

		// count how many times are still covered by at least one cow's shift
		int covered = 0;
		for (int t = 0; t < 1000; t++) {
			if (times[t] > 0) { covered++; }
		}

		// update the maximum amount of time that can still be covered by the remaining cows' shifts
		shiftTotal = max(shiftTotal, covered);

		// add the cow's shift back into the times array
		for (int t = startT[i]; t < endT[i]; t++) { times[t]++; }
	}

	// output the maximum amount of time that can still be covered
	cout << shiftTotal;
}
