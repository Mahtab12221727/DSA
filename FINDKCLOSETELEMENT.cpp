#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
typedef pair<int,int>pi;
int main(){
    vector<int>v={1,2,3,4,5,6};
    int x=3;
    int k=3;
    priority_queue<pi>pq;
    for(int i=0;i<v.size();i++){
        int diff=abs(x-v[i]);
        pq.push({diff,v[i]});
        if(pq.size()>k) pq.pop();

    }
    vector<int>ans;
    while(pq.size()>0){
      ans.push_back(pq.top().second);
      pq.pop();
    }
   sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}