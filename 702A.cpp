#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=1,res=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cnt++;
        }
        else{
            res=max(cnt,res);
            cnt=1;
        }
    }
    res=max(cnt,res);
    cout<<res<<endl;
    return 0;
}
