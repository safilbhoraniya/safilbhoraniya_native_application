#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    for(int i = 1;i<=10;i++){
        
        int s = i*n;
        cout<<s<<"    ";
    }
}