#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter first number:";
    cin>>a;
    char op;
    cout<<"enter operator:";
    cin>>op;
    int b;
    cout<<"enter second number:";
    cin>>b;

    switch(op){
        case '+':
        cout<<a + b;
        break;
        case '-':
        cout<< a - b;
        break;
        case '/':
        cout<< a / b;
        case '*':
        cout<<a * b;
        break;
        default:
        cout<<"invalid operator";
    }
    return 0;

}