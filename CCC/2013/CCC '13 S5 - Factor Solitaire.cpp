#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int cost=0; 
    
    while (n > 1) {
        for (int i = 2; i <= n; i++)
            if (n % i == 0) {
				int mid = n / i; 
                n -= mid;
                cost += n / mid;
                break;
            }
    }
    
    cout << cost << endl;
    return 0;
}
