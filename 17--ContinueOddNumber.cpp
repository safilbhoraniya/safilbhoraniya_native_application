#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    for(int i = 1;i<=100;i++){
        if(i % 2 == 00) continue;
        cout<<i<<"  ";
    }
}