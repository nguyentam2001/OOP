#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class FRACTION
{
private:
      int a,b;
public:
      FRACTION(){a=3;b=6;}
      FRACTION(int x,int y){a=x;b=y;}
      void Nhap(){
            cout<<"nhap tu so: ";         cin>>a;
            cout<<"nhap mau so: ";        cin>>b;
      }
      friend istream&operator>>(istream&is,FRACTION&ob);
      friend ostream&operator<<(ostream&os,FRACTION ob);
      FRACTION operator+(FRACTION &ob);
      FRACTION operator-(FRACTION &ob);
      FRACTION operator*(FRACTION &ob);
      FRACTION operator/(FRACTION &ob);
      FRACTION operator--();
};
istream&operator>>(istream&is,FRACTION&ob){
      cout<<"Nhap tu so: ";         is>>ob.a;
      cout<<"Mau tu so: ";         is>>ob.b;
}
ostream&operator<<(ostream&os,FRACTION ob){
            os<<ob.a<<"/"<<ob.b<<endl;
}
FRACTION FRACTION::operator+(FRACTION &ob)
{
      cout<<"Phan so sau khi cong la: ";
      FRACTION tmp;
      tmp.a=a*ob.b+ob.a*b;
      tmp.b=b*ob.b;
      return tmp;
}
FRACTION FRACTION::operator-(FRACTION &ob)
{
      FRACTION tmp;
      tmp.a=a*ob.b-ob.a*b;
      tmp.b=b*ob.b;
      return tmp;
}
FRACTION FRACTION::operator*(FRACTION &ob)
{
      FRACTION tmp;
      tmp.a=a*ob.a;
      tmp.b=b*ob.b;
      return tmp;

}
FRACTION FRACTION::operator/(FRACTION &ob)
{

      FRACTION tmp;
      tmp.a=a*ob.b;
      tmp.b=b*ob.a;
      return tmp;

}
FRACTION FRACTION::operator--(){
      cout<<"Phan so sau khi rut gon la: ";
      int x=1;
      int m=this->a,n=this->b;
      if(m<0){
            m=-m;
      }
      if(n<0){
            n=-n;
      }
      for(int k=2;k<=m/2&&k<=n/2;k++)
      {
            if(m%k==0&&n%k==0)
                  x=k;
      }

      this->a=this->a/x;
      this->b=this->b/x;
      return *this;

}
int main(){
      FRACTION a,b,m;
      cin>>a;
      cin>>b;
      cout<<endl;
      cout<<a;
      cout<<endl;
      cout<<b;
      cout<<endl;
      m=a+b;
      cout<<m;
      cout<<endl;
      m=--m;
      cout<<m;


}
