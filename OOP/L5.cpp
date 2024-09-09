

 //Types of Constructor

#include<bits/stdc++.h>
using namespace std;

class student{
	public :
		string name;
		int id;
		string dept;

		student(){
			cout<<"A default constructor is called"<<endl;
		}
		student(string s, int n , string s2){
			name = s;
			id = n;
			dept = s2;
		}
		void display(){
			cout<<"Student's name is : "<<name<<endl;
			cout<<"Student's id is : "<<id<<endl;
			cout<<"Student's department is : "<<dept<<endl;
		}

};

int main(){
	student mithun("Meheraj",430,"CSE");
	mithun.display();
	student naim;
}
