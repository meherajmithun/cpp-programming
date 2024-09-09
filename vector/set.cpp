#include<bits/stdc++.h>
using namespace std;

int main(){
   /* set<int>v = {1,2,23,12343,1,2,2,3,3,34};
    for(auto u : v) cout<<u<<" ";
    cout<<endl;

    set<int>:: iterator it;
    for(it = v.begin(); it != v.end(); it++) cout<<*it<<" ";
    cout<<endl;


   int n;
   cin >> n;
   set<int>s;
   for(int i = 0; i < n; i++){
    int a; cin >> a;
    s.insert(a);
   }
   //cout<<s.size()<<endl;
   for(auto u : s) cout<<u<<" ";
   cout<<endl; 
   
   */

   //For count a element in set
   /*
   cout<<s.count(0)<<endl;
   cout<<s.count(1)<<endl;
   cout<<s.count(2)<<endl;
   cout<<s.count(3)<<endl;

   */
   //cout<<*(--s.end()) <<endl;

   /*
   set<string>s;
   s.insert("Meheraj");
   s.insert("Hossain");
   s.insert("Mithun");
   s.insert("Naimul");
   s.insert("Karim");
   s.insert("Naimul");
   cout<<s.size()<<endl;
   cout<<endl;
    for(auto u :s) cout<<u<<endl;

    

   set<pair<int,int>,greater<pair<int,int>>>s;

   s.insert({ 212 ,32});
   s.insert({ 2231 ,32});
   s.insert({ 212 ,32});
   s.insert({ 212 ,32});
   s.insert({ 2213 ,32});
   s.insert({ 123 ,32});
   cout<<s.size()<<endl;
   for(auto u : s) cout<<u.first<<" "<<u.second<<endl;


    */

   unordered_set<string>s;
   s.insert("Meheraj");
   s.insert("Hossain");
   s.insert("Mithun");
   s.insert("Naimul");
   s.insert("Karim");
   for(auto u : s) cout<<u<<endl;

}

