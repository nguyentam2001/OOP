#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class EQUATION{
private:
      float a,b,c;
public:
      EQUATION(){
            a=2;
            b=3;
            c=4;
      }
      EQUATION(float x,float y,float z){
            a=x;
            b=y;
            c=z;
      }
      void output(){
            cout<<"Equation is: "<<a<<"x^4";
            if(b<0){
                  cout<<b<<"x^2";
            }
            else
                  cout<<" + "<<b<<"x^2";
            if(c<0){
                  cout<<c;
            }
            else
                  cout<<" + "<<c;
      }

      EQUATION operator-(EQUATION &ob);
      EQUATION operator--();
      friend istream&operator>>(istream&is,EQUATION &ob);
};
istream&operator>>(istream&is,EQUATION &ob){
      cout<<"Enter Equation: ";     is>>ob.a>>ob.b>>ob.c;
}
EQUATION EQUATION::operator-(EQUATION &ob)
{
      EQUATION tmp;
      tmp.a=this->a-ob.a;
      tmp.b=this->b-ob.b;
      tmp.c=this->c-ob.c;
      return tmp;
}
EQUATION EQUATION::operator--()
{

      int x=1;
      int m=(int)this->a,n=(int)this->b, p=(int)this->c;
      if(m<0)//doi am thanh duong
            m=-m;
      if(n<0)
            n=-n;
      if(p<0)
            p=-p;
      for(int k=2;k<=m/2&&k<=n/2&&k<=p/2;k++){
            if(m%k==0&&n%k==0&&p%k==0){
            x=k;
            }
}
      this->a=a/x;
      this->b=b/x;
      this->c=c/x;
      return *this;
}
int main(){
      EQUATION a,c;
      cin>>a;
      a.output();
      cout<<endl;
      c=--a;
      c.output();

}
