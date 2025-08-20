#include<iostream>
using namespace std;
class MinHeap{
    public:
    int arr[40];
    int idx;
    MinHeap(){
        idx=1;
    }
    //top element
    int top(){
        return arr[1];
    }
    //push functiom
    void push(int n){
        arr[idx]=n;
        int i=idx;
        idx++;
        while(i!=1){
            int pr=i/2;
            if(arr[i]<arr[pr]) swap(arr[i],arr[pr]);
            else break;
        }

    }
    //pop function for inheap
    void pop(){
       //swap last element to first element
       idx--;
       arr[1]=arr[idx];
       //rearrangment
       int i=1;
       while(true){
        int lf=2*i, rt=2*i+1;
        //for cheking break rules 
        if(lf>idx-1) break;
        //for right child value
        if(rt>idx-1){
            if(arr[i]>arr[lf]){
                swap(arr[i],arr[lf]);
                i=lf;
                break;
            }
        }
        //for cheking parent to child which is smaller 
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
    //display function of minheap
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    //cal size of minheap
    int size(){
        return idx-1;
    }

};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.size()<<" "<<pq.top()<<endl;
    pq.push(2);
   cout<<pq.size()<<" "<<pq.top()<<endl;
   pq.display();
   pq.pop();
   pq.display();
   cout<<pq.size()<<" "<<pq.top()<<endl;
    


}