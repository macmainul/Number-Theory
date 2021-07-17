#include <bits/stdc++.h>
using namespace std;

/*bool prime(int n)   {
    for(int i=2;i<n;i++)    {
        if(n%i == 0) return false;       ///Time complixity  ---  O(n)
    }
    return true;
}*/

bool prime(int n)   {
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3; i <= sqrt(n); i+=2 )    {
        if(n%i == 0) return false;                     ///Time complixity --- O(sqrt(n))
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    if(prime(n) ==  true) printf("Prime\n");
    else printf("Not Prime\n");

    return 0;
}
