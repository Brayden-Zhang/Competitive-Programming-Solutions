#include <bits/stdc++.h>
using namespace std;
 
 
vector<int> twoSum(vector<int> nums, int target) {
      map<int, int> map;
      vector<int> pairs;
      for(int i = 0; i < nums.size(); i++) {
          int complement = target - nums[i];
          if(map.find(complement) != map.end()) {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
};
 
int main() {
	int a, b; cin >> a >> b;
    vector<int> inputs; 
    for (int i = 0; i< a; i++){
        int c; 
        cin>> c; 
        inputs.push_back(c); 
    }
    vector<int> x = twoSum(inputs, b); 
    
    for (auto const &i: x) {
        cout << i+1 << " ";
    }
    if (x.size() < 1){
        cout<< "IMPOSSIBLE"; 
 
    }
}