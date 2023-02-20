
#include <bits/stdc++.h>
using namespace std;

int main() {


	vector<int> list; 
	int n; 
	while (cin >> n) {
        list.push_back(n); 
    }

	sort(list.begin(), list.end()); 

    int a = list[0];
	int b = list[1];
	int c = list[list.size()-1] - a- b; 

	cout<<a<<" "<<b << " " << c<<endl; 

}
