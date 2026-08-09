#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100,'.'); // to read a string with spaces
    cout<<"You entered: "<<str<<endl;
    char str2[100]={'a','b','c','\0'};
    cout<<str2;

    return 0;
}