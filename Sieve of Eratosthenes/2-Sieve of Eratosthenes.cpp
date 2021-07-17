///tutorial link: https://youtu.be/8l22HQv9DHs

#include <bits/stdc++.h>
using namespace std;

void sieve(int n)   {

    int prime[n+3];
    memset(prime,0,sizeof(prime));    ///input zero --in all the position array of prime

    for(int i=2;i*i<n; i++) {      ///NOTE: Don't start this loop from 1;

        if(prime[i] == 0)   {       ///"0" means - that position or that number is prime

            for(int j=i*i;j<n;j+=i) {  /// here j started from i*i because before i*i, all non prime number omitted by >i prime numbers

                prime[j] = 1;   ///here "1" means that position or that number - not prime
            }
        }
    }
    for(int i=2;i<=n;i++)   {
        if(prime[i] == 0) printf("%d ",i);    ///Print all prime numbers from 2 to n
    }
    printf("\n");
}

int main()
{
    while(1)    {
        int  n;
        scanf("%d",&n);
        sieve(n);
    }

    return 0;
}
