#include<iostream>
using namespace std;

int removeduplicate(int arr[], int size){
    int i = 0;
    for(int j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
void display(int arr[] ,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,1,2,2,2,3,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int newsize=removeduplicate(arr,size);
    display(arr,newsize);
    
}