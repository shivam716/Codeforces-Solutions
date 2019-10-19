#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=0,cnt=1,res=0;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    for(i=1; i<n ; i++)
    {
        if(a[i] >= a[i-1])
        {
            cnt++;
        }
        else
        {
            res = max(cnt,res);
            cnt=1;
        }
    }
    cout<< max(res,cnt);

    return 0;
}
