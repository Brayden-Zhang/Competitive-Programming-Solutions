
#include <bits/stdc++.h>
using namespace std;

// This code defines a function called count_freq that takes a string s as input and returns a vector of integers representing the frequency of each lowercase letter in the input string.

// The function first initializes a vector freq of size 26, with all elements set to zero. This vector will be used to store the frequency count of each letter in the input string.

// Then, the function iterates over each character c in the input string s. For each character, the code calculates the corresponding index in the freq vector by subtracting the ASCII value of lowercase 'a' from the ASCII value of the current character 'c'. This index corresponds to the position of the letter in the vector. The frequency count for that letter is then incremented by 1.

// Finally, the function returns the freq vector, which contains the frequency count for each lowercase letter in the input string.



vector<int> count_freq(string s) {
	vector<int> freq(26);
	for (char c : s) {
		freq[c - 'a']++;
	}
	return freq;
}

int main() {
	ifstream read("blocks.in");
	ofstream written("blocks.out");

	int n;
	read >> n;
	vector<pair<string, string>> words(n);
	for (auto& [w1, w2] : words) {
		read >> w1 >> w2;
	}

	vector<int> max_blocks(26);
	for (const auto& [w1, w2] : words) {
		vector<int> freq1 = count_freq(w1);
		vector<int> freq2 = count_freq(w2);
		for (int c = 0; c < 26; c++) {
			max_blocks[c] += max(freq1[c], freq2[c]);
		}
	}

	for (int i : max_blocks) {
		written << i << '\n';
	}
}
