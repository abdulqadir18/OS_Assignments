#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>arrivalTime(n), burstTime(n), priority(n);
  // for(int i=0; i<n; i++) cin>>arrivalTime[i];//assume arrival time to zero
  // for(int i=0; i<n; i++) cin>>burstTime[i];
  for(int i=0; i<n; i++) cin>>priority[i];

  //making pair of priority and process no.
  vector<pair<int,int>>ans(n);
  for(int i=0; i<n; i++)
  {
    ans[i]=make_pair(priority[i],i+1);
  }
  vector<pair<int,int>>ans1(n);
  for(int i=0; i<n; i++)
  {
    ans1[i]=make_pair(priority[i],burstTime[i]);
  }
  //sorting according to arrival time
  sort(ans.begin(),ans.end());
  sort(ans1.begin(),ans1.end());
  int turnAroundTime=0;
  int totalTime=0;
  for(int i=0; i<n; i++)
  {
    cout<<ans[i].second<<" ";
  }
}