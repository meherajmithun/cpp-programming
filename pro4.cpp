#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    (n % 2 == 0) ? cout<< n <<" is even"<<endl : cout<< n <<" is odd"<<endl;
}