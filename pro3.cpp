#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b = ";
    cin>>a>>b;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    cout<<setw(20)<<"Sum is = "<<a+b<<endl;
    cout<<setw(20)<<"Multiplication is = "<<a*b<<endl;
    cout<<setw(20)<<"Subtraction is = "<<a-b<<endl;
    cout<<setw(20)<<"Division is = "<<(float)a/b<<endl;
    cout<<setw(20)<<"Reminder is = "<<a%b<<endl;
    
}