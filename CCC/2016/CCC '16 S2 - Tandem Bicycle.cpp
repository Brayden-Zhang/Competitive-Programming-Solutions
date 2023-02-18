#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v1;
	vector<int> v2;
	int n;
	cin>>n;

	int speeds;
	int  kmh;
	int sum=0;

	cin>>speeds;
   
	for(int i = 0 ; i < speeds ; i++) {
		cin>>kmh; v1.push_back(kmh);
		}

	for(int i = 0 ; i < speeds ; i++) {
		cin>>kmh; v2.push_back(kmh);
		}

	if(n==1){

		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		for(int j = 0 ; j < speeds ; j++){
			sum+=max(v1[j],v2[j]);
		}


		cout<<sum;

	}

	else {

		sort(v1.rbegin(),v1.rend());
		sort(v2.begin(),v2.end());

		for(int j = 0 ; j < speeds ; j++){

			sum+=max(v1[j],v2[j]);

		}
	cout<<sum;
	}

}
