#include<iostream>
using namespace std;
void printFibo(int n1 , int n2 ){
    
    while (n1<50){ //n1<50 just for termination condition 
    
    int s = n1+n2;
    cout<<s<<endl;
    n1 = n2 ;
    n2 = s ; 
    }
}

int main (){
    int n1 = 0 ; 
    int n2 = 1 ;    
    cout<<n1<<endl<<n2<<endl;
    printFibo(n1,n2);
     

}