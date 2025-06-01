// palindrome or not 
#include <iostream>
using namespace std;

void palindrome(int num){
    int original = num;
    int reverse = 0 ; 

    while(num > 0 ){
        int digit = num%10;
        reverse = (reverse*10)+digit;
        num/=10;
   
    }

    if (original == reverse){
        cout << "YES, palindrome: " << original << " = " << reverse << endl;
    } else {
        cout << "NOT a palindrome: " << original << " != " << reverse << endl;
    }

}


int main(){
    palindrome(123);
}