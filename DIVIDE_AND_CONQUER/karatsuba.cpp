#include <iostream>
#include <math.h>
using namespace std;
typedef long long int ll;


int len(int number)
{
    return log10(number)+1;
}


ll karatsuba(ll x, ll y)
{
    if ( x < 10 || y < 10 )
        return x*y;
    
    int n = max(len(x), len(y));
    int half = n/2;
    ll a = x / pow(10, half); // Left half of x
    ll b = x % (ll)pow(10, half); // Right half of x 
    ll c = y / pow(10, half);
    ll d = y % (ll)pow(10, half);

    ll ac = karatsuba(a, c);
    ll bd = karatsuba(b, d);
    ll ad_plus_bc = karatsuba(a+b, c+d)-ac-bd;

    return ac*pow(10, 2*half) + (ad_plus_bc * pow(10, half) ) + bd;
}


int main()
{
    cout << "The product is: " << karatsuba(123445, 1232133) << endl;
    return 0;
}