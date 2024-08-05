#include<iostream>
using namespace std;

int main(){

    int balance;

    cout<<"Enter the balance available in your account: ";
    cin>>balance;

    if (balance>=20000){

        cout<<"You can purchase a mobile";

    }
    else{

        cout<<"You can't purchase a mobile";
    }

    return 0;



}