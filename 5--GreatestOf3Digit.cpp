#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    int b;
    cout<<"enter a number:";
    cin>>b;
    int c;
    cout<<"enter a number:";
    cin>>c;

    if(a > b && a > c){
        cout<<a<<"  is greatest";
    }
    else if(b > c && b > a){
        cout<<b<<"  is greatest";
    }else{
        cout<<c<<"  is greatest";
    }
}