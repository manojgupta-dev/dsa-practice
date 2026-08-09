#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter a elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi= arr[0];
    int mini= arr[0];

    for(int i = 0; i<n ; i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    
    cout<<"max="<<maxi<<endl;
    cout<<mini;
}