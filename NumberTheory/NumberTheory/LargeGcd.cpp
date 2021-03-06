
//GCD of two numbers when one of them can be very large

//Given two numbers �a� and �b� such that (0 <= a <= 10^12 and b <= b < 10^250).
//Find the GCD of two given numbers.


#include<bits/stdc++.h>

using namespace std ;

#define ll long long

ll gcd(ll a , ll b)
{
    if(b==0 ){
        return a ;
    }
    return gcd(b ,a%b ) ;
}

// Here 'a' is integer and 'b' is string.
// The idea is to make the second number (represented
// as b) less than and equal to first number by
// calculating its mod with first integer number
// using basic mathematics

ll largeGcd(ll a , string b )
{
    ll mod = 0 ;

    for(int i=0 ; i<b.size() ; i++){
    // calculating mod of b with a to make
    // b like 0 <= b < a
        mod = (mod*10 + b[i]-'0') % a ;
    }


    ll r = gcd(a,mod) ;
    //cout<<r <<endl ;

    return r ;
}



int main()
{
    ll a  , res ;
    string b ;

    cin>>a  ;
    cin>>b ;

    res= 0 ;

    res = largeGcd(a,b) ;

    cout <<res <<endl ;

    return 0 ;
}
