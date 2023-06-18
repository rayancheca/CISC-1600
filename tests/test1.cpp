/*
write a program fragment that computes the sum 1+2+3+...+n
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int sum = 0, n=5;

    for(int i=1; i<=n; i++)
        sum += i;

    cout << sum << endl;

    return 0;
}