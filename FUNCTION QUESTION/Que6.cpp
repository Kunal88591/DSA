//Code to convert decimal to binary 

#include<iostream>
using namespace std;
int main(){
    int n = 4 ; 
    while (n!=1){
        cout<<n%2; // wrong code make 2 fun and ensure to reverse output to get exact bit 
        n/=2;
    }cout<<"1";
}