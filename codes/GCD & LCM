#include <iostream.h>
using namespace std;

void gcd(int a,int b) {
    return b==0?a:gcd(b,a%b);
}
void lcm(int a,int b) {
    int c = abs(a*b);
    int ans = c/gcd(a,b);
    return ans;
}

void main(){

    cout<<gcd(10,4);
    cout<<lcm(10,4);
}
