#include<iostream>
#include<vector>
using namespace std;
vector<int>twosum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    int arr[]={2,4,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
   
    int target=12;
    vector<int>ans=twosum(arr,size,target);
    cout<<" indices :";
    cout<<ans[0]<<" "<<ans[1];


}