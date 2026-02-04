#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the students marks : ";
    cin>>n;
    if(n>80 and n<=100) cout<<"very good";
    else if(n>60 && n<=80) cout<<"good";
    else if(n>40 and n<=60) cout<<"Average";
    else if(n<=40 && n>=0) cout<<"fail";
    else cout<<"enter valid marks";
    
}   