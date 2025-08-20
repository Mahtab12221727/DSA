#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>v={2,7,4,1,8,1};
    priority_queue<int>pq;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }
    int n=v.size()/2;
    while(pq.size()>1){
        int s1=pq.top();
        pq.pop();
        int s2=pq.top();
        pq.pop();
        if(s1==s2) pq.push(0);
        else{
            pq.push(s1-s2);
        }
        n--;

    }
    while(pq.size()>0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}