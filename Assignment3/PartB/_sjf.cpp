#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>arrivalTime(n), burstTime(n), priority(n);
  // for(int i=0; i<n; i++) cin>>arrivalTime[i];//assume arrival time to zero
  for(int i=0; i<n; i++) cin>>burstTime[i];
  // for(int i=0; i<n; i++) cin>>priority[i];

  //making pair of burst time and process no.
  vector<pair<int,int>>ans(n);
  for(int i=0; i<n; i++)
  {
    ans[i]=make_pair(burstTime[i],i+1);
  }
  //sorting according to burst time
  sort(ans.begin(),ans.end());
  for(int i=0; i<n; i++)
  {
    cout<<ans[i].second<<" ";
  }  

}