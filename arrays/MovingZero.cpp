#include<iostream>
using namespace std;
void moveZero(int arr[], int n){
    int nonzero =0;
    for(int i =0; i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonzero]);
            nonzero ++;
        }
    }
}
void print(int arr[],int n) {
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[8]={0,1,0,3,12,0,0,5};
    int n=8;
    moveZero(arr,n);
    cout<<" moving zero  array is :";
    print(arr,n);
   
}