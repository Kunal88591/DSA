#include <iostream>
using namespace std;

char nextAlphabet(char ch) {
    if (ch == 'z') {
        return 'a';
    } else if (ch == 'Z') {
        return 'A';
    } else {
        return ch + 1;
    }
}

int main(){
   char ans = nextAlphabet('h');
   cout<<ans<<" ";


}