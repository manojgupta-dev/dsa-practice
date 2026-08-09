#include <iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[],int lenght){
    int st=0;
    int end=lenght-1;
    while(st<end){
        swap(name[st++],name[end--]);
    } 
}
bool checkpalidrome(char name[],int n){
    int st=0;
    int end=n-1;
    while(st<end){
        if(name[st]!=name[end]){
        return 0;
        }
        else
        st++;
        end--;
    }
    return 1;
    

}
int main()
{
    char name[20];
    cout << "Enter your name:";
    cin>>name;
    cout <<"your name is "<<name<<endl;
    int lenght=getlength(name);
    cout<<lenght<<endl;
    reverse(name,lenght);
    cout<<name<<endl;
    bool palidrome=checkpalidrome(name,lenght);
    if(palidrome){
        cout<<"palidrome number";
    }
    else
    {
        cout<<"not palidrome";
    }
}