#include <bits/stdc++.h>
using namespace std;
int main()
{
    long  int n;
    cin>>n;
    if(n>3 || n<2)
    {
       for(long  int i=2;i<=n;i+=2)
           cout<<i<<"\n";
       for(long  int j=1;j<=n;j+=2)
           cout<<j<<"\n";
    }
    else{
        cout <<"NO SOLUTION";
    }
    return 0;
     }
