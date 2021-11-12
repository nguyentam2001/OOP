#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class NHACC{
private:
      string MaNCC;
      string TenCC;
      string DiaChi;
public:
      friend class PHIEU;
};
class HANG
{
private:
      string TenHang;
      double DonGia;
      int SoLuong;
public:
      double ThanhTien(){
            return DonGia*SoLuong;
      }
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
      string MaPhieu;
      DATE ns;
      NHACC cc;
      HANG *hg;
      int n;
public:
      void Nhap();
      void Xuat();
};
void PHIEU::Nhap(){
      cout<<"MaPhieu: ";            fflush(stdin);          getline(cin,MaPhieu);
      cout<<"Ngay Lap: " ;                                   cin>>ns.D>>ns.M>>ns.Y;
      cout<<"MaNCC: ";              fflush(stdin);          getline(cin,cc.MaNCC);
      cout<<"Ten NCC: ";            fflush(stdin);          getline(cin,cc.TenCC);
      cout<<"Dia Chi: ";             fflush(stdin);          getline(cin,cc.DiaChi);
      cout<<"Nhap So Mat Hang: ";               cin>>n;
      hg=new HANG[n];
      for(int i=0;i<n;i++){
            cout<<"Hang thu: "<<i+1<<endl;
            cout<<"Ten hang: ";           fflush(stdin);          getline(cin,hg[i].TenHang);
            cout<<"Don gia: ";                  cin>>hg[i].DonGia;
            cout<<"So luong: ";                 cin>>hg[i].SoLuong;
      }


}
void PHIEU::Xuat(){
      cout<<setw(5)<<"MaPhieu: "<<MaPhieu;
      cout<<setw(25)<<"Ngay Lap: "<<ns.D<<"/"<<ns.M<<"/"<<ns.Y<<endl;
      cout<<setw(5)<<"MaNCC: "<<cc.MaNCC;
      cout<<setw(25)<<"Ten NCC: "<< cc.TenCC<<endl;
      cout<<setw(5)<<"Dia Chi: "<<cc.DiaChi<<endl;
      cout<<"-------------------------------------------------------------------------"<<endl;
      cout<<setw(5)<<"Ten Hang"<<setw(20)<<"Don gia"<<setw(20)<<"So luong"<<setw(20)<<"Thanh tien"<<endl;
      double sum=0;
      for(int i=0;i<n;i++)
      {
            cout<<setw(5)<<hg[i].TenHang;
            cout<<setw(20)<<hg[i].DonGia;
            cout<<setw(20)<<hg[i].SoLuong;
            cout<<setw(20)<<hg[i].ThanhTien()<<endl;
            sum+=hg[i].ThanhTien();
      }
      cout<<"-------------------------------------------------------------------------"<<endl;
      cout<<setw(70)<<"Cong tien: "<<sum;
}
int main()
{
      PHIEU ns;
      ns.Nhap();
      ns.Xuat();
    return 0;
}
