#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    char b = tolower(a);
    
    switch(b){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"Vowel"<<endl;
        break ; 
        
        default :
        cout<<"Consonant"<<endl;
    }
}