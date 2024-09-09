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
		void info(string s,int n, string s2){
			name = s;
			id = n;
			dept = s2;
		}
		void dis(){
			cout<<"Student's name is : "<<name<<endl;
			cout<<"Student's id is : "<<id<<endl;
			cout<<"Student's department is : "<<dept<<endl;

		}
};

int main(){
	student mithun,naim;

	mithun.info("Meherahj",430,"CSE");
	naim.info("Naim",439,"CSE");

	mithun.display();
	naim.dis();

}
