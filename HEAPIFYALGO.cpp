#include<iostream>
using namespace std;
void heapi(int i,int arr[],int n){
    //reagrangment element;
    while(true){
        int lf=2*i, rt=2*i+1;
        if(lf>=n) break;
        if(rt>=n){
            if(arr[i]>arr[lf]){
                swap(arr[i],arr[lf]);
                i=lf;
            }else break;
        }
        if(arr[lf]<arr[rt]){
            if(arr[i]>arr[lf]){
                swap(arr[i],arr[lf]);
                i=lf;
            }else break;
        }else{
            if(arr[i]>arr[rt]){
                swap(arr[i],arr[rt]);
                i=rt;
            }else break;
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n=sizeof(arr)/4;
    display(arr,n);
    for(int i=n/2;i>=1;i--){
        heapi(i,arr,n);
    }
    display(arr,n);
    
}