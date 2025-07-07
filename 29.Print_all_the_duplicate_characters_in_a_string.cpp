#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string str;
    cin>>str;
    map<char , int>mp;
    for(char ch : str){
        mp[ch]++;
    }
    for(auto ch : mp){
        if(ch.second > 1){
            cout<<ch.first<<", "<<"count = "<<ch.second<<endl;
        }
    }
    return 0;
}
