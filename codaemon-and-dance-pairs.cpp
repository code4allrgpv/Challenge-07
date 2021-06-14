
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll int ans(ll int a, ll int b)
{
    ll int ans = 0;     
    for (ll int i = 1; i <= a; i++)
    {   
        ans += b / 5; 
        if(i % 5 + b % 5 >= 5)
            ans += 1;
    }    
    return ans;
}

 
int main()
{
   ll int a,b;
    cin >> a >> b;
    cout << ans(a,b);
    return 0;
}

