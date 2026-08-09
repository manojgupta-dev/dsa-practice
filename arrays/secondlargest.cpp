#include<iostream>
using namespace std;
int secondlargest(int arr[],int size){
    int largest =0;
    int secondLargest=0;
    for(int i=0; i<size;i++) {
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>secondLargest && arr[i]!= largest){
            secondLargest=arr[i];
        }

    }    
    return secondLargest;
     }

int main (){
    int size =5;
    int arr[size]={2,6 ,3,78,9};
    int ans =secondlargest(arr,size);
    cout<<" second largest number is "<<ans;
}