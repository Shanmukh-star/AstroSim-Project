#include<bits/stdc++.h>
#define ld long double
using namespace std;

vector<ld> force(ld m1, ld m2, ld r1x,ld r1y,ld r1z,ld r2x,ld r2y,ld r2z)
       {
          vector<ld> v;
          ld x=r2x-r1x;
          ld y=r2y-r1y;
          ld z=r2z-r1z;
          ld G= 6.67e-11;
          ld k = G*m1*m2;
          ld dcube=pow((x*x+y*y+z*z),1.5);
          ld Fx= (k/dcube)*x;
          ld Fy= (k/dcube)*y;
          ld Fz= (k/dcube)*z;
          v.push_back(Fx);v.push_back(Fy);v.push_back(Fz);
          return v;
       }
int main()
{
  ld m1,m2,r1x,r1y,r1z,r2x,r2y,r2z;
  cin>>m1>>m2>>r1x>>r1y>>r1z>>r2x>>r2y>>r2z;
  cout<<force(m1,m2,r1x,r1y,r1z,r2x,r2y,r2z)[0]<<" "<<force(m1,m2,r1x,r1y,r1z,r2x,r2y,r2z)[1]<<" "<<force(m1,m2,r1x,r1y,r1z,r2x,r2y,r2z)[2];
}
