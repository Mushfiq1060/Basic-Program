#include<bits/stdc++.h>
#define ll long long 
using namespace std;
string str;
int k;
ll func()
{
    map<int,int>mp;
    mp[0]=1;
    ll sum=0,res=0;
    for(int i=0;i<str.size();i++)
    {
        sum+=str[i]-'0';
        sum%=k;
        res+=mp[sum];
        mp[sum]++;
    }
    return res;
}
int main()
{   
    cin>>str>>k;
    cout<<func();
    return 0;
}