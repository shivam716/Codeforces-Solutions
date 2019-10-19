#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=1;
    cin>>n;
    vector<int> a(n);
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    for(i=0; i<n ; i++)
    {
        if(a[i] >= cnt)
        {
            cnt++;
        }
    }
    cout<< cnt-1;

    return 0;
}
