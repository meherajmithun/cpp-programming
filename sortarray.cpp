#include<iostream>
using namespace std;
void array(int arr[],int n);
int main(){
    int n,i;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    cout<<"Array in sorting order : ";
    array(arr,n);
}
void array ( int arr[],int n ){
    int min,i,temp,j;
    for(i = 0 ; i < n ; i++){
        min = arr[i];
        for(j = i+1 ; j < n ; j++){
            if(min > arr[j]){
                temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
        cout<<min<<" ";
    }
    cout<<endl;
}