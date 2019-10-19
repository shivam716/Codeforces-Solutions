#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    int arr[]={1,5,10,20,100};
    while(n!=0)
    {
        if(n>=100)
        {
          n -= 100;
          cnt++;
        }
        else if(n>=20)
        {
            n -= 20;
            cnt++;
        }
        else if(n>=10)
        {
            n -= 10;
            cnt++;
        }
        else if(n>=5)
        {
            n -= 5;
            cnt++;
        }
        else if(n>=1)
        {
            n -= 1;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
