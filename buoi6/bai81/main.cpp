#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class NHACC
{
private:
      string Mancc;
      string Tenncc;
      string Diac;
      friend class PHIEU;
};
class HANG
{
private:
      string Tenh;
      float Dongia;
      int Soluong;
public:
      float ThanhTien();
      friend class PHIEU;
};
class PHIEU
{
private:
      string Maphieu;
      int namtl;
      HANG *x;
      NHACC y;
      int n;
public:
      void nhap();
      void xuat();
};
float HANG::ThanhTien()
{
      float sum;
      sum=Dongia*Soluong;
      return sum;
}
void PHIEU::nhap()
{
     cout<<"Ma phieu: ";            fflush(stdin);          getline(cin,Maphieu);
     cout<<"man tl: ";                                      cin>>namtl;
     cout<<"nhap so mat hang: " ;                           cin>>n;
     x=new HANG[n];
     for(int i=0;i<n;i++)
     {
           cout<<"Ten hang: ";            fflush(stdin);     getline(cin,x[i].Tenh);
           cout<<"Don gia: ";                               cin>>x[i].Dongia;
           cout<<"So luong: ";                              cin>>x[i].Soluong;
     }
     cout<<"Ma nha cc: ";                 fflush(stdin);    getline(cin,y.Mancc);
     cout<<"Ten nha cc: ";                fflush(stdin);    getline(cin,y.Tenncc);
     cout<<"Dia chi: ";                   fflush(stdin);    getline(cin,y.Diac);
}
void TieuDe()
{
      cout<<setw(10)<<"Ten Hang";
      cout<<setw(20)<<"Don Gia";
      cout<<setw(20)<<"So luong";
      cout<<setw(20)<<"Thanh tien"<<endl;
}
void PHIEU::xuat()
{
      cout<<"==========================PHIEU NHAP HANG=========================="<<endl;
      cout<<setw(10)<<"Ma phieu: "<<Maphieu;
      cout<<setw(40)<<"Ngay Thanh Lap: "<<namtl<<endl;
      cout<<setw(10)<<"Ma NCC: "<<y.Mancc;
      cout<<setw(40)<<"Ten NCC: "<<y.Tenncc<<endl;
      cout<<setw(10)<<"Dia Chi: "<<y.Diac<<endl;
      float sum=0;
      TieuDe();
      for(int i=0;i<n;i++)
      {
            cout<<setw(5)<<x[i].Tenh;
            cout<<setw(20)<<x[i].Dongia;
            cout<<setw(20)<<x[i].Soluong;
            cout<<setw(20)<<x[i].ThanhTien()<<endl;
            sum+=x[i].ThanhTien();
      }
      cout<<setw(45)<<"Cong thanh tien: "<<sum<<endl;
      cout<<"==================================================================="<<endl;
}
int main()
{
    PHIEU ns;
    ns.nhap();
    ns.xuat();
    return 0;
}
