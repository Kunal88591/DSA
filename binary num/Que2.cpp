#include <iostream>
using namespace std;

int DecNum (int num ){
    int n = num;
    int pow = 1;
    int BinNum = 0;

    while(n>0){
     int rem = n%2;
     BinNum += (rem*pow);
     pow*=10;
     n/=2;
    }
 return BinNum;
}


int main(){
    cout<<DecNum(25)<<" ";
    cout<<DecNum(49)<<" ";
    cout<<DecNum(31)<<" ";
    cout<<DecNum(88)<<" ";
    
    
}