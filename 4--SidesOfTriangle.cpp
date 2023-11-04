#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first side:";
    cin>>a;
    int b;
    cout<<"enter second size:";
    cin>>b;
    int c;
    cout<<"enter third size:";
    cin>>c;

    (a + b > c && a + c > b && b + c > a) ? cout<<"valid triangle " : cout<<"invalid triangle";

    return 0;
}