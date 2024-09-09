#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    for(int i = 0; i < 10; i++){
        int a; cin >> a;
        dq.push_front(a);
    }
    while( !dq.empty()){
        cout<<dq.front() <<" "<<dq.back()<<endl;
        dq.pop_front();
        dq.pop_back();
    }
}