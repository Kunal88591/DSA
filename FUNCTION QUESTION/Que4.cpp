
//Calculate sum of digits in a given number
#include<iostream>
using namespace std;

int main (){
    int n , a ;
    cout<<"ENTER NUMBER ";
    cin>>n;
     int sum = 0 ;
    while(n!=0){
        a = n%10;
        sum+=a;
        n /=10;
    } cout<<sum;

}