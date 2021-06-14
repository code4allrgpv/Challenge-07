#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        long n,s=0;
        cin>>n;
        int a[n-1];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            s+=a[i];
        }
        cout<<(n*(n+1))/2-s<<endl;
    }
    return 0;
}
