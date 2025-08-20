#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,3,3,2};
    map<int,int>mp;
    for(int x:v){
        mp[x]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<" ";
    }
}

