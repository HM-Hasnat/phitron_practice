#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Time complexity O(1)
    Memory complexity

    */

    int a,b,c;
    cin>>a>>b>>c ;
    int maxi = max ( {a,b,c});
    int mini = min({a,b,c});
    int sum = a+b+c;
    int mul = a* b* c;

    cout<<maxi<<"\n";
    cout<< mini<<"\n";
    cout<<sum<<"\n";
    cout<< mul<<"\n";
    return 0;
}
