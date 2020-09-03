#include<iostream>
using std::cin;
using std::cout;
int pow(int, int );
int main(){

    int base,expo;
    int x;
    cout<<"input the base?";
    cin>>base;
    cout<<"input the expon?";
    cin>>expo;
    x = pow(base,expo);
    cout<<"print the power is "<<x;
}
int pow(int base, int expo){
    int results = 1;
    for (int i = 1;i<=expo;i++){

    results = results*base;
    }
return results;
}
