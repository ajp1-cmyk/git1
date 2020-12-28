#include<bits/stdc++.h>

using namespace std;

int dif(vector<vector<int>>b,int n)
{   int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)  // diagonal difference  
         
      {  
          if(i==j)
             s1=s1+b[i][j];
      }
      for(int j=0;j<n;j++)
      {  if(i+j==n-1)
              s2=s2+b[i][j];
          
      }}
     int s3;
     if(s1>s2)
       s3=s1-s2;
     else 
       s3=s2-s1;
    
  return s3;
              }


int main()
{ vector<vector<int>> a;
   int n;
   cin>>n;
   a.resize(n);
   
  
  for(int i=0;i<n;i++)
 {   a[i].resize(n);
     for(int j=0;j<n;j++)
  {   
      cin>>a[i][j];
  }
  }
  int d=dif(a,n);
  cout<< d;
}
