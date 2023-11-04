#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int i = 2;
    while(i<=n){
        cout<<i<<"  ";
        i+=2;
    }
}