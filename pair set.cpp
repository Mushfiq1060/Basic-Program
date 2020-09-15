/*make set descending order basis of first element*/

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
struct cmp
{
    bool operator() (pair<int,int>a,pair<int,int>b)
    {
        return a.first>b.first;
    }
};
int main()
{
    int n,a;
    cin>>n;
    set<pair<int,int>,cmp>s;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.insert({a,i});
    }
    for(auto it=s.begin();it!=s.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}