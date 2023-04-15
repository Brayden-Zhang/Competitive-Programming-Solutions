#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cows(n);
    vector<int> prefix(n+1);

    // use prefix sum but instead of a normal sum array, we have an array that stores the sums mod 7
    // i.e. instead of (3, 8, 9, 15, 17, 31, 41) as the sum array, we have (3, 1, 2, 1, 3, 3, 6)

    for (int i = 0; i < n; i++) {
        cin >> cows[i];
        prefix[i+1] = (prefix[i] + cows[i]) % 7;
    }

    vector<int> last_found(7); //contains the first instance of every value mod 7
    for (int i = 0; i < 7; i++){
        last_found[i] = -1;
    }
    int maximum = 0;

    // loop through every value in the prefix sum
    for (int i = 0; i < prefix.size(); i++){
        if (last_found[prefix[i]] == -1){
            last_found[prefix[i]] = i;
        }
        else{
            maximum = max(i - last_found[prefix[i]], maximum);
        }
    }

    cout << maximum << endl;

    return 0;
}
