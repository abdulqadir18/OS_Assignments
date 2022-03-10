#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>arrivalTime(n), burstTime(n), priority(n);
  for(int i=0; i<n; i++) cin>>arrivalTime[i];//assume arrival time to different
  for(int i=0; i<n; i++) cin>>burstTime[i];
  // for(int i=0; i<n; i++) cin>>priority[i];

  //making pair of arrival time and process no.
  vector<pair<int,int>>ans(n);
  for(int i=0; i<n; i++)
  {
    ans[i]=make_pair(arrivalTime[i],i+1);
  }
  vector<pair<int,int>>ans1(n);
  for(int i=0; i<n; i++)
  {
    ans1[i]=make_pair(arrivalTime[i],burstTime[i]);
  }
  //sorting according to arrival time
  sort(ans.begin(),ans.end());
  sort(ans1.begin(),ans1.end());
  int turnAroundTime=0;
  int totalTime=0;
  for(int i=0; i<n; i++)
  {
    if(totalTime-ans[i].second>=0) turnAroundTime+=totalTime-ans[i].second;
    totalTime+=ans1[i].second;
    cout<<ans[i].second<<" ";
  }
  cout<<"\n"<<"turn around time: "<<(double)turnAroundTime;  
  cout<<"\n"<<"avg waiting time: "<<(double)turnAroundTime/n;  

}