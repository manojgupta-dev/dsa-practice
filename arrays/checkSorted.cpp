#include<iostream>
using namespace std;
bool sorted(int arr[],int size){
    for(int i=0;i<size-1;i++) {
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int size;
    cout<<"Enter a array size :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array :";
    for ( int i=0;i<size;i++){
        cin>>arr[i];
    }
   bool found=sorted(arr,size);
    if(found){
        cout<<"array is sorted ";
    }
    else {
        cout<<" array is not sorted ";
    }
    
}