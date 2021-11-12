#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class EQUATION{
private:
      double a,b,c,d;
public:
      EQUATION(){a=1;b=2;c=3.5;d=4;}
      EQUATION(double x,double y,double z,double t){
            a=x;
            b=y;
            c=z;
            d=t;
      }
      void Xuat(){
            cout<<a<<"x^3";
            if(b<0)
                  cout<<b<<"x^2";
            else
                  cout<<"+"<<b<<"X^2";
            if(c<0)
                  cout<<c<<"x";
            else
                  cout<<"+"<<c<<"x";
            if(d<0)
                  cout<<d<<" = 0";
            else
                  cout<<"+"<<d<<" = 0";
      }
      EQUATION operator+(EQUATION &obj);
      EQUATION operator++();
      friend istream&operator>>(istream &is,EQUATION &obj);
      friend ostream&operator<<(ostream &os,EQUATION obj);



};
EQUATION EQUATION::operator+(EQUATION &obj){
      EQUATION tmp;
      tmp.a=a+obj.a;
      tmp.b=b+obj.b;
      tmp.c=c+obj.c;
      tmp.d=d+obj.d;
      return tmp;
}
EQUATION EQUATION::operator++(){
      int *a=new int[4];
      a[0]=this->a;
      a[1]=this->b;
      a[2]=this->c;
      a[3]=this->d;
      for(int i=0;i<4-1;i++){
            for(int j=i+1;j<4;j++){
                  if(a[i]>a[j]){
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                  }
            }
      }
      this->a=a[0];
      this->b=a[1];
      this->c=a[2];
      this->d=a[3];
      return *this;
}
istream&operator>>(istream &is,EQUATION &obj){
      cout<<"nhap he so pt: "<<endl;
      cout<<"a = ";     is>>obj.a;
      cout<<"b = ";     is>>obj.b;
      cout<<"c = ";     is>>obj.c;
      cout<<"d = ";     is>>obj.d;
      return is;
}
ostream&operator<<(ostream &os,EQUATION obj){
      cout<<"equation is: ";
      os<<obj.a<<"x^3 ";
            if(obj.b<0)
                  os<<obj.b<<"x^2 ";
            else
                  os<<"+"<<obj.b<<"X^2 ";
            if(obj.c<0)
                  os<<obj.c<<"x";
            else
                  os<<"+"<<obj.c<<"x ";
            if(obj.d<0)
                  os<<obj.d<<" = 0";
            else
                  os<<"+"<<obj.d<<" = 0";

}
int main(){
      EQUATION a,x;
      cin>>a;
      x=++a;
      cout<<x;

}
