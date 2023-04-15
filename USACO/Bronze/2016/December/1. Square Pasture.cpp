#include <bits/stdc++.h>
using namespace std;

int main() {
	// int a, b, c; cin >> a >> b >> c;
	// cout << "The sum of these three numbers is " << a + b + c << "\n";

	int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2; 
	int x3, y3, x4, y4; cin>>x3>>y3>>x4>>y4; 

	int left = min(x1, x3); 
	int right = max(x2,x4); 
	int bottom = min(y1, y3); 
	int top = max(y2, y4); 

	// smallest square
	int side = max(right-left, top-bottom); 
	cout<<pow(side, 2)<<endl; 
	
}
