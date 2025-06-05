// sum of digits and sQuare 
#include <iostream>
using namespace std;

void add(int a , int b ){
    int sum = a+b;
    cout<<sum<<" ";
}

void calcSQuare(int a , int b ){
    int ans = (a^2)+(b^2)+(2*a*b);
    cout<<ans<<" ";
}


int main(){
  add(35,47);

  calcSQuare(9, 8);
}

