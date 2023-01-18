#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(int pass=0 ; pass<n ; pass++)
    {
        int last = n-1-pass;
        bool sorted = true;
        for(int j=0 ; j<=last-1 ; j++ )
        {
            if( a[j+1] < a[ j ] )
            {
                swap( a [ j+1] , a[j] );
                sorted = false;
            }

        }
        if (sorted)
            break;
        cout<<"After pass "<<pass<<" : " ;
        for( int i=0 ; i<n ; i++)
        {
            cout<<a[i]<<" " ;
        }
        cout<<"\n";
    }
    cout<<"After sorting : " ;
    for( int i=0 ; i <n ; i++)
    {
        cout<<a[i]<<" " ;
    }
    cout<<"\n";
    return 0;

}

/*
7
3 5 1 4 2 6 1
*/

/*
Complexity
   Time: O(n^2)
   Memory: O(n)
*/

/*
in line 13
   when i=0, loop execute n-1 time
   when i=1, loop execute n-2 time
   when i=2, loop execute n-3 time
   when i=3, loop execute n-4 time
   .......
   when i=n-1, loop execute 0 time
total => ((n-1)*n)/2; => (n^2 - n)/2;
      => n^2, after removing constant and we can ignore n. Because n^2 will take much time than n.
   So, time complexity n^2
*/
