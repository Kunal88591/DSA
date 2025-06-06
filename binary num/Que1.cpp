#include <iostream>
using namespace std;

int BinNum (int num ){
    int n = num;
    int pow = 1;
    int decNum = 0;

    while(n>0){
     int lastDig = n%10;
     decNum+=(lastDig*pow);
     pow*=2;
     n/=10;
    }
 return decNum;
}


int main(){
    cout<<BinNum(111111)<<" ";
    cout<<BinNum(10110)<<" ";
    cout<<BinNum(10011)<<" ";
    cout<<BinNum(111111)<<" ";
    cout<<BinNum(110010)<<" ";
}