#include <iostream>
using namespace std;
int N, K;
int rankings[10][20], better[20][20];
int main() {

    // reading in input
    cin >> K >> N;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            cin >> rankings[i][j];
            rankings[i][j]--; // converting to 0-indexed
        }
    }
    // calculating the amount of times that cow a comes before cow b
    for (int i = 0; i < K; i++) {              // looping over the trials
        for (int j = 0; j < N; j++) {          // rankings[i][j] = cow a
            for (int k = j + 1; k < N; k++) {  // rankings[i][k] = cow b
                better[rankings[i][j]][rankings[i][k]]++;
            }
        }
    }
    // calculating answer
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (better[i][j] == K)  // if cow i comes before cow j K times then
                                    // increment our answer
                ans++;
        }
    }
    // print answer
    cout << ans;
}