#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long t;
     cin>>t;

     while(t--)
     {
          int x1,y1,x2,y2;
          cin>>x1>>y1;
          cin>>x2>>y2;

          if(x1==x2)
          {
               if(y1>y2)
               {
                    if((y1-y2==2)||(y1-y2==4))
                         cout<<"YES"<<"\n";
                    
                    else
                         cout<<"NO"<<"\n";
               }

               else
               {
                    if((y2-y1==2)||(y2-y1==4))
                         cout<<"YES"<<"\n";
                    
                    else
                         cout<<"NO"<<"\n";
               }
          }

          else if(y1==y2)
          {
               if(x1>x2)
               {
                    if((x1-x2==2)||(x1-x2==4))
                         cout<<"YES"<<"\n";
                    
                    else
                         cout<<"NO"<<"\n";
               }

               else
               {
                    if((x2-x1==2)||(x2-x1==4))
                         cout<<"YES"<<"\n";
                    
                    else
                         cout<<"NO"<<"\n";
               }
          }

          else if((x1!=x2)&&(y1!=y2))
               cout<<"NO"<<"\n";
     }

     return 0;
}