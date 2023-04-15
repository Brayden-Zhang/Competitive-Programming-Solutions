// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


int n, m; 
string spotty[100], plain[100]; 

bool test_location(int j){
    bool found_cow[2][4] = {0}; 
    // found_cow[0] refers to spotty cows, found_cow[1] refers to plain cows
    // found_cow[0][0] stores whether spottty cows has character A at position j
    // found_cow[0][1] stores whether spottty cows has character C at position j
    // found_cow[0][2] stores whether spottty cows has character G at position j
    // and so on

    for (int i = 0; i < n; i++){
        if (spotty[i][j] == 'A'){
            found_cow[0][0] = true;

        }
        if (spotty[i][j] == 'C'){
            found_cow[0][1] = true;

        }
        if (spotty[i][j] == 'G'){
            found_cow[0][2] = true;

        }
        if (spotty[i][j] == 'T'){
            found_cow[0][3] = true;

        }
    }
    for (int i = 0; i < n; i++){
        if (plain[i][j] == 'A'){
            found_cow[1][0] = true;

        }
        if (plain[i][j] == 'C'){
            found_cow[1][1] = true;

        }
        if (plain[i][j] == 'G'){
            found_cow[1][2] = true;

        }
        if (plain[i][j] == 'T'){
            found_cow[1][3] = true;

        }
    }

    for (int i = 0; i < 4; ++i){
        if (found_cow[0][i] && found_cow[1][i]){
            return false; 
        }
    }
    return true; 
}

int main() {
    cin >> n >> m; 

// iterate through each position. see if the plain cows characters match characters that we saw in the spotty cows. 
    

    for (int i = 0; i< n; i++){
        cin >> spotty[i]; 


    }
    for (int i =0; i< n; i++){
        cin >> plain[i]; 
    }

    int answer = 0; 

    for (int j = 0; j < m; j++){
        if (test_location(j)){
            answer++;
        }

    }
    cout<<answer<<endl; 



}
