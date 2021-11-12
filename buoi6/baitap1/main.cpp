#include <bits/stdc++.h>
using namespace std;
class Pt{
private:
      float a,b,c;
public:
      Pt(){
            a=1;
            b=4;
            c=-5;
      }
      Pt(float m,float n,float p){
            this->a=m;
            this->b=n;
            this->c=p;
      }
      void Xuat(){
            cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
      }
      void giaipt(){
            float res1=0,res2=0;
            res1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
            res2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
            cout<<res1<<endl;
            cout<<res2<<endl;
      }
};
int main()
{
      Pt x,y,z(2,3,-5);
      x.giaipt();
      z.giaipt();
      y.giaipt();

}
