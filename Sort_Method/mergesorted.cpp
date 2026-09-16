// hmare pass 2 arrays honge sorted order me, hume unko merge krna hai sorted order me
#include<iostream>
using namespace std;
void mergearrays(int arr1[],int n,int arr2[],int m,int arr3[],int x){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i] <arr2[j]){
         arr3[k++]=arr1[i++];
             }
             else{
                arr3[k++]=arr2[j++];
             }

    }
    // copy the remaining elements of arr1 into arr3
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    // copy the remaining elements of arr2 into arr3
    while(j<m){
        arr3[k++]=arr2[j++];
    }


}
void print(int arr3[],int k){
    for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }

}
int main(){
    int arr1[]={1,2,4,6,8,9};
    int arr2[]={3,5,6,7};
    int n=6, m=4;
    int arr3[10]={0};
   
    mergearrays(arr1,n,arr2,m,arr3,10);
    print(arr3,10);

}