#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;

    if(marks > 89 && marks < 100){
        cout<<"very good marks";
    }
    else if(marks > 61 && marks < 89){
        cout<<"good marks";
    }
    if(marks > 41 && marks < 60){
        cout<<"average marks";
    }if(marks < 40){
        cout<<"fail";
    }
}