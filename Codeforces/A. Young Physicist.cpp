#include <bits/stdc++.h>
using namespace std;
#include <vector> 
 
int main() {
	int n; cin>>n; 
	// cout << "The sum of these three numbers is " << a + b + c << "\n";
	vector <int> x(n); 
	vector <int> y(n); 
	vector <int> z(n);
 
	for (int i = 0; i< n; i++){
		cin >> x[i] >> y[i] >>z[i]; 
 
	}

 
	int x_sum = accumulate(x.begin(), x.end(), 0);
	int y_sum = accumulate(x.begin(), x.end(), 0);
 
	int z_sum  = accumulate(x.begin(), x.end(), 0);
 
	
	if ((x_sum && y_sum && z_sum )== 0){
		cout<<"YES"; 
	}
	else{cout<<"NO";}
 
 
}
