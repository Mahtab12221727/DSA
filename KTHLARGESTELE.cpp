#include<iostream>
#include<queue>
using namespace std;
int main(){
    int k=2;
    int arr[]={10,9,8,7,6};
    priority_queue<int,vector<int>, greater<int> >pq;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}