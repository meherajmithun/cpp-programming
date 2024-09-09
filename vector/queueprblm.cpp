#include<bits/stdc++.h>
using namespace std;
class solution{
  public:
  queue<int>modify(queue<int>q , int k){
      int n = k;
      stack<int>st;
      while(k--){
          int a = q.front();
          st.push( a );
          q.pop();
      }
      while( !st.empty()){
          int a = st.top();
          q.push( a );
          st.pop();
      }
      int remain = q.size() - n;
      while(remain--){
          int a = q.front();
          q.push( a );
          q.pop();
      }
      return q;
  }
  
};
int main(){
    int n; cin >> n;
    queue<int>q;
    int k ; cin >> k;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        q.push(a);
    }
    solution ans;
    queue<int>result = ans.modify(q,k);
    while( !result.empty()){
        cout<<result.front()<<endl;
        result.pop();
    }
}