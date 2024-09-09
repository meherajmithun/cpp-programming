#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int arr1[n];
    for(int i = 0;i < n; i++){
        int min = arr[i];
        for(int j = i+1; j < n; j++){
            if(min > arr[j]){
                swap(min , arr[j]);
            }
        }
        arr1[i] = min;
    }
    for(auto u : arr1) cout<<u<<" ";
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n],i;
    cout<<"Enter "<<n<<" Elements : ";
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Array in sorting order : ";
    solve(arr,n);
}