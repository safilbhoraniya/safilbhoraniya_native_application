#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    for(int i = 4;i<=n*3-1;i+=3){
        cout<<i<<"    ";
    }
}