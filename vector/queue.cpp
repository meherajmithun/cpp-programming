#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        q.push(a);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}