#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;

    (n % 2 == 0) ? cout<<"even number" : cout<<"odd number";
}