//Calculate factorial using function.

#include <iostream> 
using namespace std ; 

void calcFact(int n ){
    int fact = 1 ; 
    for (int i = 1 ; i <= n ; i++){
        fact*=i;
        } cout<< fact ; 
        return;
}

int main (){
    int n ; 
    cout<<"enter value of n ";
    cin>>n;
    calcFact(n);

}
