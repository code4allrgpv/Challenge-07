#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int digitslength;
    cin >> digitslength;
    int arr[digitslength];
    for (int i = 0; i < digitslength; ++i)
    {
        cin >> arr[i];
    }
    for (int i = digitslength - 1; i >= 0; i--)
    {
        arr[i] += 1;
        arr[i] %= 10;
        if(arr[i] != 0){
            break;
        }
    }
    if(arr[0] == 0){
        cout << 1 << " "; 
    }
    for(int a : arr){
        cout << a << " ";
    } 
    return 0;
}
