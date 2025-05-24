// WAP to calculate sum of n numbers using function.

#include <iostream> 
using namespace std;

int calcSum(int sum ,int n){

    for (int i = 0 ; i< n ; i++){
        sum+=i;
        } return sum ; 
}
int main(){
    int sum = 0 ; 
    int n = 120;
    cout<<calcSum(sum , n);


}

