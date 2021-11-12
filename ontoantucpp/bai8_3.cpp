#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class NHANVIEN{
private:
      string TenNV;
      string ChucVu;
public:
     friend class PHIEU;
};
class PHONG{
private:
      string TenP;
      string MaP;
      string TP;
public:
      friend class PHIEU;
};
class TAISAN{
private:
      string TenTS;
      int soL;
      string TinhT;
public:
    friend class PHIEU;
};
class DATE{
private:
      int D,M,Y;
public:
      friend class PHIEU;
};
class PHIEU{
private:
      string MaPh;
      DATE ns;
      NHANVIEN x;
      PHONG y;
      TAISAN *z;
      int n;
public:
      void nhap();
      void xuat();
};
void PHIEU::nhap(){
      cout<<"Nhap ma phieu: ";            fflush(stdin);          getline(cin,MaPh);
      cout<<"NHap ngay kiem: ";                 cin>>ns.D>>ns.M>>ns.Y;
      cout<<"Ten nhan vien: ";           fflush(stdin);           getline(cin,x.TenNV);
      cout<<"Chuc vu NV: ";               fflush(stdin);          getline(cin,x.ChucVu);
      cout<<"Phong Kiem: ";               fflush(stdin);          getline(cin,y.TenP);
      cout<<"Ma Phong: ";                 fflush(stdin);          getline(cin,y.MaP);
      cout<<"Truong Phong: ";             fflush(stdin);          getline(cin,y.TP);
      cout<<"Nhap so tai san: ";          cin>>n;
      z=new TAISAN[n];
      for(int i=0;i<n;i++){
            cout<<"Ten TS: ";       fflush(stdin);          getline(cin,z[i].TenTS);
            cout<<"So luong: ";                       cin>>z[i].soL;
            cout<<"Tinh trang: ";        fflush(stdin);           getline(cin,z[i].TinhT);
      }
}
void PHIEU::xuat()
{
      cout<<setw(5)<<"Ma phieu: "<<MaPh<<setw(25)<<"Ngay kiem ke: "<<ns.D<<"/"<<ns.M<<"/"<<ns.Y<<endl;
      cout<<setw(5)<<"Nhan vien kiem ke: "<<x.TenNV<<setw(25)<<"Chuc vu: "<<x.ChucVu<<endl;
      cout<<setw(5)<<"Kiemke tai phong: "<<y.TenP<<setw(25)<<"Ma Phong: "<<y.MaP<<endl;
      cout<<setw(5)<<"Truong Phong: "<<y.TP<<endl;
      cout<<"-----------------------------------------------------------"<<endl;
      cout<<setw(5)<<"Ten Tai San"<<setw(25)<<"So luong"<<setw(25)<<"Tinh Trang"<<endl;
      int sum=0,count=0;
      for(int i=0;i<n;i++){
            cout<<setw(5)<<z[i].TenTS<<setw(25)<<z[i].soL<<setw(25)<<z[i].TinhT<<endl;
                  sum+=z[i].soL;
      count++;
      }
      cout<<setw(10)<<"so tai san da kiem ke: "<<count<<setw(50)<<"Tong so: "<<sum;
}
int main(){
      PHIEU x;
      x.nhap();
      x.xuat();
}
