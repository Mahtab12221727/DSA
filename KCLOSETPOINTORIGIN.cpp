#include<iostream>
#include<queue>
#include<vector>
using namespace std;
typedef pair<int,vector<int>>pi;
int main(){
    int k=2;
    vector<vector<int>>arr={{3,3},{5,-1},{-2,4}};
    priority_queue<pi>pq;
    for(vector<int>v:arr){
        int x=v[0],y=v[1];
        int diff=x*x+y*y;
        pq.push({diff,v});
        if(pq.size()>k) pq.pop();
    }
    vector<vector<int>>ans;
    while(pq.size()>0){
        vector<int>v=pq.top().second;
        pq.pop();
        cout<<v[0]<<" "<<v[1]<<" ";
    }

}