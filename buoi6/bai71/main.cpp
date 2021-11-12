#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class NSX
{
private:
      char TenNSX[30];
      char DiaChi[10];
public:
      void nhap();
      void xuat();
};
class DATE
{
private:
      int D,M,Y;
public:
      void nhap();
      void xuat();
};
class HANG
{
protected:
      string TenHang;
      NSX x;
      int dongia;
public:
      void nhap();
      void xuat();
      HANG()
      {
            TenHang="banh ngot";
            dongia=30;
      };
};
class TIVI:public HANG
{
private:
      int KichThuoc;
      DATE NN;
public:
      void nhap();
      void xuat();
      TIVI()
      {
            KichThuoc=30;
      }
};
void NSX::nhap()
{
      cout<<"TenNSX: ";         fflush(stdin);    gets(TenNSX);
      cout<<"DiaChi: ";         fflush(stdin);    gets(DiaChi);
}
void NSX::xuat()
{
      cout<<setw(5)<<"TenNSX: "<<TenNSX<<endl;
      cout<<setw(5)<<"DiaChi: "<<DiaChi<<endl;
}
void DATE::nhap()
{
      cout<<"ngay thang nam: ";                   cin>>D>>M>>Y;
}
void DATE::xuat()
{
      cout<<setw(30)<<"ngay nhap"<<D<<"/"<<M<<"/"<<Y;
}
void HANG::nhap()
{
      cout<<"TenHang: ";        fflush(stdin);    getline(cin,TenHang);
      x.nhap();
      cout<<"dongia: ";                           cin>>dongia;
}
void HANG::xuat()
{
      cout<<setw(5)<<"Ten hang: "<<TenHang;
      cout<<setw(20)<<"dongia: "<<dongia<<endl;
      x.xuat();
}
void TIVI::nhap()
{
      HANG::nhap();
      cout<<"KichThuoc: ";                        cin>>KichThuoc;
      NN.nhap();
}
void TIVI::xuat()
{
      HANG::xuat();
      cout<<setw(5)<<"KichThuoc: "<<KichThuoc;
      NN.xuat();
}
int main()
{
      TIVI ns;
      ns.nhap();
      ns.xuat();
    return 0;
}
