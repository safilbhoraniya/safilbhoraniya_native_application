#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;

    (n>99 && n<1000) ? cout<<"three digit number": cout<<"not a three digit number";
}