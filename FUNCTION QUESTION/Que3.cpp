//Calculate Binomial Coefficient using factorial function

#include <iostream>
using namespace std ; 

int calcBino(int nfact , int rfact , int nMrfact ){
    return ((nfact/(rfact*nMrfact)));
}
int calcFact(int n ){
    int fact = 1 ; 
    for (int i = 1 ; i <= n ; i++){
        fact*=i;
        }  
        return fact ;
}
int main ()
{
    int n ; 
    int r  ;
    cout<<"ENTER VALUES OF N AND R ";
    cin>>n>>r;

int nfact =  calcFact(n);
int rfact = calcFact(r);
int nMrfact = calcFact(n-r);
cout<<calcBino(nfact,rfact, nMrfact );


}