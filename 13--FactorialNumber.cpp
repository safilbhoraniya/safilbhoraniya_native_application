#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    
    int a = 1;
    for(int i = 1;i<=n/2;i++){
        if(n % i == 0) cout<<i<<"  ";
        
    }
}