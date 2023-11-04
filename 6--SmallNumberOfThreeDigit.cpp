#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number of a:";
    cin>>a;
    int b;
    cout<<"enter number of b:";
    cin>>b;
    int c;
    cout<<"enter number of c:";
    cin>>c;

    if(a < b && a < c){
        cout<<a<<"  is very smallest";
    }
    else if( b < c && b < a){
        cout<<b<<"  is very smallest";
    }else{
        cout<<c<<"  is very smallest";
    }
}