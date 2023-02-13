#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int a,b,diff;
          cin>>a>>b;

          if(a>=b)
               diff=7-a;

          else
               diff=7-b;

          cout<<diff<<"\n";
     }

     return 0;
}