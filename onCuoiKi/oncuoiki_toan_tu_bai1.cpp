#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class FACTION{
private:
      int a,b;
public:
      FACTION(){a=2;b=3;}
      FACTION(int x,int y){a=x;b=y;}
      void Nhap(){
            cout<<"Nhap tu so: ";         cin>>a;
            cout<<"Nhap mau so: ";        cin>>b;
      }
      friend istream&operator>>(istream &is, FACTION &obj);
      friend ostream&operator<<(ostream &os, FACTION obj);
      FACTION operator+(FACTION &obj);
      FACTION operator-(FACTION &obj);
      FACTION operator*(FACTION &obj);
      FACTION operator/(FACTION &obj);
      FACTION operator--();
};
istream &operator>>(istream &is, FACTION &obj){
      cout<<"Nhap Tu So: ";         is>>obj.a;
      cout<<"nhap mau So: ";        is>>obj.b;
      return is;
}
ostream &operator<<(ostream &os,FACTION obj){
      os<<"facTion is: "<<obj.a<<"/"<<obj.b<<endl;
}
FACTION FACTION::operator+(FACTION &obj){
      FACTION temp;
      temp.a=a*obj.b+obj.a*b;
      temp.b=b*obj.b;
      return temp;
}
FACTION FACTION::operator-(FACTION &obj){
      FACTION temp;
      temp.a=a*obj.b-b*obj.a;
      temp.b=b*obj.b;
      return temp;
}
FACTION FACTION::operator*(FACTION &obj){
      FACTION temp;
      temp.a=a*obj.a;
      temp.b=b*obj.b;
      return temp;
}
FACTION FACTION::operator/(FACTION &obj){
      FACTION temp;
      temp.a=a*obj.b;
      temp.b=b*obj.a;
      return temp;
}
FACTION FACTION::operator--(){
      int x=1;
      int m=this->a;
      int n=this->b;
      if(this->a<0)
            m=-this->a;
      if(this->b<0)
            n=-this->b;
      for(int k=2;k<=m&&k<=n;k++)
            if(m%k==0&&n%k==0)
            x=k;
      this->a=this->a/x;
      this->b=this->b/x;
      return *this;
}
int main(){
      FACTION a,b,x;
      a.Nhap();
      b.Nhap();
      cout<<a;
      cout<<b;
      x=a+b;
      cout<<x;
      x=a-b;
      cout<<x;
      x=--a;
      cout<<"a sau khi rut gon la: "<<endl;
      cout<<x;

}
