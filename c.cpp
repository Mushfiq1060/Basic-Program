#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n+5],b[n+5],f[n+5];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int lis=0;
  for(int i=0;i<n;i++){
    f[i]=lower_bound(b,b+lis, a[i])-b; 
    lis=max(lis,f[i]+1); /// 0 based indexing so 1 is added
    b[f[i]]=a[i];
  }
  cout<<lis<<endl;
  vector<int>ans;
  for(int i=n-1;i>=0;i--){
    if(f[i]+1==lis){ /// 0 based indexing so 1 is added
      ans.push_back(a[i]);
      lis--;
    }
  }
  reverse(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
  return 0;
}