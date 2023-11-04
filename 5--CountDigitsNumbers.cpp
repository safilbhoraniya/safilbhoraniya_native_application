#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int s = 0;
    while(n>0){
        n = n / 10;
        s++;

    }
    cout<<s;
}
