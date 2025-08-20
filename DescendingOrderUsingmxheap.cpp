#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,4,3,2,8,10,9};
    priority_queue<int>pq;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int j=0;
    while(pq.size()>0){
      arr[j++]=pq.top();
      pq.pop();
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
