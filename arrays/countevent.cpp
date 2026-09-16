#include<iostream>
using namespace std;
int main(){
   int nums[] = {12, 5, 1234, 7};
   int size=4;
   int count=0;
   for(int i=0;i<size;i++){
        int num=nums[i];
        
        int digit =0;
        while(num>0){
            num=num/10;
            digit++;
          
        }
        if(digit%2==0){
            count++;
        }
   }
   cout<<count;
}