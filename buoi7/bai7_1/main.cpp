#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class NSX
{
private:
      string Tennsx;
      string dc;
public:
      void nhap();
      void xuat();
      friend class Hang;

};
class Date
{
private:
      int D,M,Y;
public:
      void nhap();
      void xuat();
      friend class Tivi;
};
class Hang
{
protected:
      string Th;
      NSX x;
      int dg;
public:
      void nhap();
      void xuat();
      Hang()
      {
            Th="keo";
            x.dc="bg";
            x.Tennsx="hvt";
      }
};
class Tivi:public Hang
{
private:
      int kt;
      Date ns;
public:
      void nhap();
      void xuat();
      Tivi():Hang()
      {
           kt=30;
           ns.D=6;
           ns.M=7;
           ns.Y=2001;
      }
};
void NSX::nhap()
{
      cout<<"Ten nsx: ";            fflush(stdin);          getline(cin,Tennsx);
      cout<<"dia chi: ";            fflush(stdin);          getline(cin,dc);
}
void NSX::xuat()
{
      cout<<setw(15)<<"ten nsx: "<<Tennsx;
      cout<<setw(10)<<"dia chi: "<<dc<<endl;
}
void Date::nhap()
{
      cout<<"ngay thang nam: ";     cin>>D>>M>>Y;
}
void Date::xuat()
{
      cout<<setw(15)<<"ngay thang nam: "<<D<<"/"<<M<<"/"<<Y<<endl;
}
void Hang::nhap()
{
      cout<<"Ten hang: ";           fflush(stdin);          getline(cin,Th);
      x.nhap();
      cout<<"don gia: ";                                    cin>>dg;

}
void Hang::xuat()
{
      cout<<setw(15)<<"Ten hang: "<<Th;
      x.xuat();
      cout<<setw(15)<<"Don gia: "<<dg<<endl;
}
void Tivi::nhap()
{
      Hang::nhap();
      cout<<"kich thuoc: ";         cin>>kt;
      ns.nhap();
}
void Tivi::xuat()
{
      Hang::xuat();
      cout<<setw(15)<<"kich thuoc: "<<kt<<endl;
      ns.xuat();
}
int main()
{
      Tivi x;
      x.nhap();
      x.xuat();
    return 0;
}
