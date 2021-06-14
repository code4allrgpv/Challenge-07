#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>the-special-maze-walk
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x = 0, y = 0;
        for (auto i : s)
            if (i == 'R')
                x++;
            else if (i == 'L')
                x--;
            else if (i == 'U')
                y++;
            else
                y--;
        if (x == 0 && y == 0)
            cout << "true\n";
        else
            cout << "false\n";
    }
    return 0;
}
