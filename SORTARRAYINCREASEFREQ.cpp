#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
typedef pair<int,int>pi;
int main(){
    vector<int>v={-1,1,-6,4,5,-6,1,4,1};
    map<int,int>mp;
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto x:mp){
        int ele=x.first;
        int fre=x.second;
       // cout<<ele<<" "<<fre<<" ";
        pq.push({fre,ele});
    }
    //cout<<pq.top().second<<" "<<pq.top().first;
    vector<int>ans;
    while(pq.size()>0){
        int fre=pq.top().first;
        int ele=pq.top().second;
        pq.pop();
        while(fre>0){
            ans.push_back(ele);
            fre--;
        }
     }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}