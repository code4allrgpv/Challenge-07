#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, k, answer = 1;
    cin >> n >> k;
    string s;
    cin >> s;
    int leng= s.length(), j = s.length()-1;
    
    for(int i = 0; i < leng; ++i){
        if(s[i] != s[j]){
            answer = 0;
            break;
        }
        j--;
    }
    if((answer == 1 && (2*k + 1)<= n) || k == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}
