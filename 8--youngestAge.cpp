#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ram's age:";
    cin>>a;
    int b;
    cout<<"enter shyam's age:";
    cin>>b;
    int c;
    cout<<"enter rajiv's age:";
    cin>>c;

    if(a > b && a > c ){
        cout<<a<<" ram is youngest";
    }
    else if(b > c && b > a){
        cout<<b<<" shyam is youngest";
    }else{
        cout<<c<<" rajib is youngest";
    }
}
