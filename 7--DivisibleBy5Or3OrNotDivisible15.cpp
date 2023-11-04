#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number :";
    cin>>a;

    if((a%3 == 0 && a % 5 == 0  )&&(a %15 != 0)){
        cout<<"divisible by 5 or 3 and divisible by 15";
    }
    else if( a % 15 == 0){
        cout<<"divisible by 15";
    }
    
}