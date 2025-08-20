#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    priority_queue<int, vector<int>, greater<int> >pq;
    int j=0;
    for(int i=0;i<n;i++){
     pq.push(arr[i]);
     if(pq.size()>k){
        ans[j++]=pq.top();
        pq.pop();
     }
    }
    while(pq.size()>0){
        ans[j++]=pq.top();
        pq.pop();
    }
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}