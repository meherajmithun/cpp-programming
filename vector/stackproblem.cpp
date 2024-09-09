#include<bits/stdc++.h>
using namespace std;

bool isBalanced(char c1, char c2){
    return (c1 == '(' and c2 == ')' || c1 == '{' and c2 == '}' || c1 == '[' and c2 == ']');
}
int main(){
    int n; cin >> n;
    while(n--){
        bool done = 1;
        string s;
        cin >> s;
        stack<char>st;
        for(auto u : s){
            if(u =='(' || u == '{' || u == '[') st.push(u);
            else {
                if(st.empty()){
                    done = 0;
                    break ;
                }
                else {
                    if(isBalanced(st.top() ,u)){
                        st.pop();
                    }
                    else {
                        done = 0;
                        break ;
                    }
                }
            }
        }
        if( !st.empty()) done = 0;
        if(done) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
}