#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input values
    int n, t;
    cin >> n >> t;

    // Read the time it takes to read each book into a vector
    vector<int> times(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i];
    }

    // Initialize variables to keep track of maximum books read, the start and end of the subarray being considered (pointers),
    // and the total time it takes to read the current subarray
    int max_books = 0;
    int i = 0, j = 0, time_sum = 0;

    // Iterate over all possible subarrays and find the one that maximizes the number of books read
    while (j < n) {
        // Add the time it takes to read the next book to the current subarray
        time_sum += times[j];

        // If the current subarray takes more than t minutes to read, remove books from the start of the subarray until
        // it takes less than t minutes to read
        while (time_sum > t) {
            time_sum -= times[i];
            i++;
        }

        // Update the maximum number of books read if the current subarray is longer than the previous maximum
        max_books = max(max_books, j - i + 1);

        // Move to the next subarray
        j++;
    }

    // Output the maximum number of books read
    cout << max_books << endl;

    return 0;
}
