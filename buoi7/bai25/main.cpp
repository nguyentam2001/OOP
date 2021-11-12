#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class HoaDon;
class HangHoa
{
private:
      string Mahang;
      string TenHang;
      int Soluong;
      friend class HoaDon;
};
class Date
{
private:
      int D,M,Y;
public:
      void Nhap();
      void Xuat();
};
class HoaDon
{
private:
      string Mahoadon;
      string Donvinhan;
      int Sotien;
      string NguoiTT;
      Date ns;
      HangHoa *x;
      int n;
public:
      void Nhap();
      void Xuat();
};
void Date::Nhap()
{
      cout<<"Nhap ngay thang nam: ";                        cin>>D>>M>>Y;
}
void Date::Xuat()
{
      cout<<setw(15)<<D<<"/"<<M<<"/"<<Y<<endl;
}
void HoaDon::Nhap()
{
      cout<<"Ma hoa don: ";         fflush(stdin);          getline(cin,Mahoadon);
      cout<<"Don vi nhan: ";        fflush(stdin);          getline(cin,Donvinhan);
      cout<<"So tien: ";                                    cin>>Sotien;
      cout<<"Nguoi Thanh toan: ";    fflush(stdin);          getline(cin,NguoiTT);
      ns.Nhap();
      cout<<"Nhap so hang hoa: ";                           cin>>n;
      x=new HangHoa[n];
      for(int i=0;i<n;i++){
            cout<<"Nhap hang thu: "<<i+1<<endl;
            cout<<"Ma Hang: ";            fflush(stdin);          getline(cin,x[i].Mahang);
            cout<<"Ten hang: ";           fflush(stdin);          getline(cin,x[i].TenHang);
            cout<<"So luong: ";                                   cin>>x[i].Soluong;
      }
}
void TieuDe();
void HoaDon::Xuat()
{
      cout<<setw(5)<<"Mahoadon: "<<Mahoadon;
      cout<<setw(15)<<"Donvinhan: "<<Donvinhan<<endl;
      cout<<setw(15)<<"Sotien: "<<Sotien;
      cout<<setw(15)<<"NguoiTT: "<<NguoiTT<<endl;
      ns.Xuat();
      TieuDe();
      int sum=0;
      for(int i=0;i<n;i++)
      {
            cout<<setw(10)<<x[i].Mahang;
            cout<<setw(10)<<x[i].TenHang;
            cout<<setw(10)<<x[i].Soluong<<endl;
            sum+=x[i].Soluong;
      }
      cout<<setw(25)<<"Tong Tien cua hoa don: "<<sum*Sotien<<endl;
}
void TieuDe(){
      cout<<setw(10)<<"Ma Hang";
      cout<<setw(10)<<"Ten Hang";
      cout<<setw(10)<<"So luong"<<endl;
}

int main()
{
    HoaDon ns;
    ns.Nhap();
    ns.Xuat();
    return 0;
}
