#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class PhieuMuaHang;
class Date
{
private:
      int D,Y,M;
      friend class PhieuMuaHang;
};
class Hang
{
private:
      string TenHang;
      float Dongia;
      int Soluong;
      friend class PhieuMuaHang;
public:
      float Thanhtien();
      float Tongtien();
};
float Hang::Thanhtien()
{
      float x;
      x=Soluong+Dongia;
      return x;
}
class PhieuMuaHang{
private:
      Date ns;
      string Maphieu;
      Hang*x;
      int n;
public:
      void Nhap();
      void Xuat();
};
void PhieuMuaHang::Nhap()
{
      cout<<"nhap ngay: ";                                  cin>>ns.D>>ns.M>>ns.Y;
      cout<<"nhap ma phieu: ";      fflush(stdin);          getline(cin,Maphieu);
      cout<<"nhap so hang: ";                               cin>>n;
      x=new Hang[n];
      for(int i=0;i<n;i++)
      {
          cout<<"nhap ten hang: ";       fflush(stdin);     getline(cin,x[i].TenHang);
          cout<<"nhap don gia: ";                           cin>>x[i].Dongia;
          cout<<"nhap soluong: ";                           cin>>x[i].Soluong;
      }

}
void tieude()
{
      cout<<setw(10)<<"Ten Hang";
      cout<<setw(15)<<"Do gia";
      cout<<setw(20)<<"So luong";
      cout<<setw(20)<<"Thanh tien"<<endl;
}
void PhieuMuaHang::Xuat()
{
      cout<<"========================PHIEU MUA HANG========================="<<endl;
      cout<<setw(10)<<"Ma phieu: "<<Maphieu;
      cout<<setw(40)<<"Ngay lap: "<<ns.D<<"/"<<ns.M<<"/"<<ns.Y<<endl;
      float sum=0;
      tieude();
      for(int i=0;i<n;i++){
            cout<<setw(5)<<x[i].TenHang;
            cout<<setw(18)<<x[i].Dongia;
            cout<<setw(18)<<x[i].Soluong;
            cout<<setw(18)<<x[i].Thanhtien()<<endl;
            sum+=x[i].Thanhtien();
      }
      cout<<setw(50)<<"Cong thanh tien"<<sum<<endl;
      cout<<"================================================================="<<endl;
}

int main()
{
      PhieuMuaHang h;
      h.Nhap();
       h.Xuat();
      return 0;
}
