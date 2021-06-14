#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void check_reach(int x,int y,string s)
{
    int u=0,d=0,l=0,r=0,lr=0,ud=0;
    if(x==0)
        lr=1;
    if(y==0)
       ud=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='U')
            u++;
        else if(s[i]=='D')
            d--;
        else if(s[i]=='R')
            r++;
        else
            l--;
    }
        if((x>0)&&(r>=x))
           lr=1;
        else if((x<0)&&(l<=x))
            lr=1;
        if((y>0)&&(u>=y))
           ud=1;
        else if((y<0)&&(d<=y))
            ud=1;
       if((lr==1)&&(ud==1))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        int x,y;
        cin>>x>>y;
        cin>>s;
        check_reach(x,y,s);
        t--;
    };
    return 0;
}
