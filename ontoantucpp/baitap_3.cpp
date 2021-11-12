#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class PHUONGTRINH
{
private:
      double a,b,c,d;
public:
      PHUONGTRINH(){
            a=2;
            b=3;
            c=4;
            d=5;
     }
     PHUONGTRINH(double x,double y,double z,double t)
     {
           a=x;
           b=y;
           c=z;
           d=t;
     }
     friend ostream&operator<<(ostream&os,PHUONGTRINH ob);
     PHUONGTRINH operator+(PHUONGTRINH &ob);
     PHUONGTRINH operator++();
     friend istream&operator>>(istream&is,PHUONGTRINH &ob);
};
istream &operator>>(istream&is,PHUONGTRINH &ob)
{
      cout<<"Nhap hs phuong trinh: ";        is>>ob.a>>ob.b>>ob.c>>ob.d;
}
ostream&operator<<(ostream&os,PHUONGTRINH ob){
      cout<<"phuong trinh vua nhap la: ";       os<<ob.a<<"x^3 +("<<ob.b<<")x^2+("<<ob.c<<")x+("<<ob.d<<")";
}
PHUONGTRINH PHUONGTRINH::operator+(PHUONGTRINH &ob){
      PHUONGTRINH tmp;
      tmp.a=this->a+ob.a;
      tmp.b=this->b+ob.b;
      tmp.c=this->c+ob.c;
      tmp.d=this->d+ob.d;
      return tmp;
}
PHUONGTRINH PHUONGTRINH::operator++()
{
     double *x;
     x=new double[3];
     x[0]=this->a; x[1]=this->b;x[2]=this->c;x[3]=this->d;
     for(int i=0;i<4;i++){
      for(int j=i+1;j<4;j++){
                  if(x[i]>x[j]){
                        double tmp;
                        tmp=x[i];
                        x[i]=x[j];
                        x[j]=tmp;
                  }

      }
     }
     this->a=x[0]; this->b=x[1]; this->c=x[2]; this->d=x[3];
     return *this;

}

int main(){
      PHUONGTRINH a,b;
      cin>>a;
      cout<<a;
      b=++a;
      cout<<endl;
      cout<<b;
}
