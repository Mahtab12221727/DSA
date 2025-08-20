#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,7,4,1,8};
    int cost=0;
    priority_queue<int, vector<int>, greater<int> >pq;
    for(int a:v){
        pq.push(a);
    }
    while(pq.size()>1){
        int r1=pq.top(); pq.pop();
        int r2=pq.top(); pq.pop();
        pq.push(r1+r2);
        cost+=(r1+r2);
    }
    cout<<cost;
}