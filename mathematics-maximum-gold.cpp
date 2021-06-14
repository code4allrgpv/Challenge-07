#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr[],vector<bool> visited[],int sum[],int i,int j,int n){
    
    if( i<0 || j<0 || i>=n || j>=n || visited[i][j] == true || arr[i][j] ==0) {
        return;
    }
    
    visited[i][j]=true;
    sum[0]+=arr[i][j];
    solve(arr,visited,sum,i+1,j,n);
    solve(arr,visited,sum,i,j+1,n);
    solve(arr,visited,sum,i-1,j,n);
    solve(arr,visited,sum,i,j-1,n);
}


int main(){
    int n;
    cin>>n;
    int x;
    vector<int> arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            arr[i].push_back(x);
        }
    }
    vector<bool> visited[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i].push_back(false);
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( arr[i][j]!=0 && visited[i][j] == false ){
                int sum[1];
                sum[0]=0;
                solve(arr,visited,sum,i,j,n);
            
                res = max(res,sum[0]);
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
