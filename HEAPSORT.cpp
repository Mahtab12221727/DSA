#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>v={4,3,21,5,1,6};
    priority_queue<int,vector<int>,greater<int> >pq;
    for(int i:v){
        pq.push(i);
    }
    while(pq.size()>0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    //using maxheap
    priority_queue<int>pq1;
    for(int i:v){
pq1.push(i);
    }
    cout<<endl;
    while(pq1.size()>0){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

}