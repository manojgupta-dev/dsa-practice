//most optimised method for find maximum of subarray 
#include<iostream>
#include<climits>
using namespace std;
int main (){
int n =7;
int arr[]={3,-4,5,4,-1,7,-8};
int maxsum=INT_MIN;
int currsum=0;
for(int i=0;i<n;i++){
    currsum +=arr[i];
    maxsum=max(currsum,maxsum);
    if(currsum<0){
        currsum=0;
    }
}
cout<<maxsum;
}