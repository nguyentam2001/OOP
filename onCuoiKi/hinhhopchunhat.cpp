#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class HHCN{
private:
      double a,b,h;
public:
      HHCN(){a=1;b=2;h=3;}
      double theTich(){
            return a*b*h;
      }
      friend ostream&operator<<(ostream &os,HHCN ob);
      HHCN operator+(double d);
};

ostream&operator<<(ostream &os,HHCN ob){
      double x=ob.theTich();
      os<<x;
}
HHCN HHCN::operator+(double d){
      HHCN sum;
      sum.a=a+d;
      sum.b=b+d;
      sum.h=h+d;
      return sum;

}
int main(){
      double d;
      cin>>d;
      HHCN x,a;
      cout<<a<<endl;
      x=a+d;
      cout<<x;

}
