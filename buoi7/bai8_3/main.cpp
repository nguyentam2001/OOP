#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class NHANVIEN{
private:
      string Ten;
      string Chucvu;
      friend class PHIEU;
};
class PHONG{
      private:
      string Tenp;
      string Map;
      string Tentp;
      friend class PHIEU;
};
class SANPHAM{
      private:
      string Tensp;
      int Sol;
      string TT;
      friend class PHIEU;
};
class PHIEU
{
private:
      string Maphieu;
      string ngay;
      NHANVIEN x;
      PHONG y;
      int n;
      SANPHAM*z;
public:
      void nhap();
      void xuat();
};
void PHIEU::nhap(){
      cout<<"Nhap ma phieu: ";            fflush(stdin);          getline(cin,Maphieu);
      cout<<"Nhap ngay: ";                fflush(stdin);          getline(cin,ngay);
      cout<<"Nhap Ten nhan vien: ";           fflush(stdin);      getline(cin,x.Ten);
      cout<<"NHap chuc vu: ";             fflush(stdin);          getline(cin,x.Chucvu);
      cout<<"Nhap Ten phong: ";           fflush(stdin);          getline(cin,y.Tenp);
      cout<<"Nhap phong: ";               fflush(stdin);          getline(cin,y.Map);
      cout<<"NHap ten truong phong: ";    fflush(stdin);          getline(cin,y.Tentp);
      cout<<"NHap so san pham: ";            cin>>n;
      z=new SANPHAM[n];
      for(int i=0;i<n;i++){
            cout<<"Ten san pham: ";       fflush(stdin);          getline(cin,z[i].Tensp);
            cout<<"So luong sp: ";                                cin>>z[i].Sol;
            cout<<"Tinh trang: ";         fflush(stdin);          getline(cin,z[i].TT);
      }
}
void PHIEU::xuat(){
      cout<<"Ma phieu: "<<Maphieu;
      cout<<setw(15)<<"Ngay kiem phieu: "<<ngay<<endl;
      cout<<"Ten nhan vien: "<<x.Ten;
      cout<<setw(15)<<"Chuc vu: "<<x.Chucvu<<endl;
      cout<<"Kiem ke tai phong: "<<y.Tenp;
      cout<<setw(15)<<"Maphong: "<<y.Map<<endl;
      cout<<"Truong phong: "<<y.Tentp<<endl;
      int sum_sl=0,dakiem=0;
      for(int i=0;i<n;i++){
            cout<<z[i].Tensp;
            cout<<setw(15)<<z[i].Sol;
            cout<<setw(15)<<z[i].TT<<endl;
            sum_sl+=z[i].Sol;
            dakiem++;
      }
      cout<<"So tai san da kiem ke: "<<dakiem;
      cout<<setw(15)<<"Tong so luong: "<<sum_sl;
}
int main()
{
      PHIEU a;
      a.nhap();
      a.xuat();
    return 0;
}
