#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    for(int i = 1;i<=n;i+=2){
        cout<<i<<"    ";
    }
    return 0;
}