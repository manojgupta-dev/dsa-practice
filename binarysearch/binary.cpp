#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid<key]){
            st=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,6,9,12,45,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key =9;
    int ans=binarysearch(arr,6,key);
    cout<<" postion of 45 is ";
    cout<<ans;


    
}