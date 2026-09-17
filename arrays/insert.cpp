#include<iostream>
using namespace std;

void insert(int arr[100],int &n,int pos, int value){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
}
void display(int arr[],int n){
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[100]= {10,20,40,50};
    int n = 4;
    insert(arr,n,2,30);
    display(arr,n);

}