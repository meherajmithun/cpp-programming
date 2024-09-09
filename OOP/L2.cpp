#include<bits/stdc++.h>
using namespace std;

class student{
	public:
		string name;
		long long id;
		string dept;
		void display(){
			cout<<"Student's name is : "<<name<<endl;
			cout<<"Student's id is : "<<id<<endl;
			cout<<"Student's department is : "<<dept<<endl;
		}
};

int main(){
	student mithun;
	mithun.name = "Meheraj";
	mithun.id = 20245103430;
	mithun.dept = "CSE";
	mithun.display();
}
