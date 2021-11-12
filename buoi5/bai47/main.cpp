#include <bits/stdc++.h>

using namespace std;
class DoanhNghiep;
class Date{
private:
      int D,M,Y;
public:
      void nhap();
      void xuat();
      friend long Sum_2015(DoanhNghiep a[],int n);
};
void Date::nhap(){
      cout<<"nhap ngay thang nam";        cin>>D>>M>>Y;
}
void Date::xuat(){
      cout<<setw(10)<<D<<"/"<<M<<"/"<<Y;
}
class DiaChi{
private:
      string DienThoai;
      string Phuong;
      string Quan;
      string ThanhPho;
      friend void In_Hanoi(DoanhNghiep a[],int n);
      friend class DoanhNghiep;
};
class DoanhNghiep{
private:
      int MaDN;
      string TenDN;
      Date ns;
      DiaChi dc;
      string GiamD;
      long DoanhThu;
public:
      void nhap();
      void xuat();
      friend void In_Hanoi(DoanhNghiep a[],int n);
      friend long Sum_2015(DoanhNghiep a[],int n);
      friend void Sua_Dn(DoanhNghiep a[],int n);
      void Nhap_NDn(DoanhNghiep a[],int n);
      void Xuat_NDn(DoanhNghiep a[],int n);
      void MENU(DoanhNghiep a[], int n)
};
void DoanhNghiep::nhap(){
      cout<<" ma dn: ";                                           cin>>MaDN;
      cout<<" ten doanh nghiep: ";              fflush(stdin);    getline(cin,TenDN);
      ns.nhap();
      cout<<" dien thoai: ";                    fflush(stdin);    getline(cin,dc.DienThoai);
      cout<<" phuong: ";                        fflush(stdin);    getline(cin,dc.Phuong);
      cout<<" quan: ";                          fflush(stdin);    getline(cin,dc.Quan);
      cout<<" thanh pho: ";                     fflush(stdin);    getline(cin,dc.ThanhPho);
      cout<<" Giam Doc: ";                      fflush(stdin);    getline(cin,GiamD);
      cout<<" DoanhThu: ";                                        cin>>DoanhThu;
}
void DoanhNghiep::xuat(){
      cout<<setw(10)<<MaDN;
      cout<<setw(10)<<TenDN;
      ns.xuat();
      cout<<setw(10)<<dc.DienThoai;
      cout<<setw(10)<<dc.Phuong;
      cout<<setw(10)<<dc.Quan;
      cout<<setw(10)<<dc.ThanhPho;
      cout<<setw(10)<<GiamD;
      cout<<setw(10)<<DoanhThu<<endl;
}
void TieuDe(){
      cout<<setw(10)<<"MaDN";
      cout<<setw(10)<<"TenDN";
      cout<<setw(10)<<"Ngaytl";
      cout<<setw(10)<<"DienThoai";
      cout<<setw(10)<<"Phuong";
      cout<<setw(10)<<"Quan";
      cout<<setw(10)<<"ThanhPho";
      cout<<setw(10)<<"GiamD";
      cout<<setw(10)<<"DoanhThu"<<endl;
}
void Nhap_NDn(DoanhNghiep a[],int n){
      cout<<" nhap doanh nghiep thu: "<<i+1<<endl;
      for(int i=0;i<n;i++){
            a[i].nhap();
      }
}
void Xuat_NDn(DoanhNghiep a[],int n){
      for(int i=0;i<n;i++){
            a[i].xuat();
      }
}
void In_Hanoi(DoanhNghiep a[],int n){
      for(int i=0;i<n;i++){
           if(a[i].dc.ThanhPho=="Ha Noi"){
            a[i].xuat();
           }
      }
}
long Sum_2015(DoanhNghiep a[],int n){
      long sum=0;
      for(int i=0;i<n;i++){
            if(a[i].ns.Y==2015){
                 sum+=a[i].DoanhThu;
            }
      }
      return sum;
}
void Sua_Dn(DoanhNghiep a[],int n){
      int m;
      cout<<"nhap ma doanh nghiep muon sua: ";        cin>>m;
      for(int i=0;i<n;i++){
            if(a[i].MaDN==m){
                  a[i].nhap();
            }
      }
}
int main()
{
      int n;
      cout<<"Nhap so doanh nghiep: ";            cin>>n;
      DoanhNghiep *a=new DoanhNghiep[n];
      Nhap_NDn(a,n);
      TieuDe();
      Xuat_NDn(a,n);
      TieuDe();
      In_Hanoi(a,n);
      cout<<"Doanh thu doanh nghiep nam 2015: "<<Sum_2015(a,n)<<endl;
      Sua_Dn(a,n);
}
