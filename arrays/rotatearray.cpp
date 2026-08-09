#include<iostream>
#include<vector>
using namespace std;
vector<int>rotatearray(vector<int>&arr,int d){
    vector<int>temp(arr.size());
    int n=arr.size();
    d=d%n; // if d is greater than n then we will take the modulus of d with n to get the effective number of rotations
    for(int i=0;i<n;i++){
      temp[(i+d)%n]=arr[i];

 } 
    return temp;
 
}
void printarray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
   
    vector<int> arr={1,2,3,4,5};
    int n=5;
    int d=2; // number of times we have to rotate the array
   
    cout<<"Before rotating the array: "<<endl;
    printarray(arr);
    cout<<endl;
    
    cout<<"After rotating the array: "<<endl;
    vector<int>result=rotatearray(arr,d);
    printarray(result);
    return 0;
}