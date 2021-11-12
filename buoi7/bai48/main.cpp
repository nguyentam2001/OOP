#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class NhanVien;
class Date
{
private:
      int D,M,Y;
public:
      void Nhap();
      void Xuat();
};
class PBan{
private:
      int maPb;
      char TenPb[30];
      char TrPhong[30];
      int Sonv;
      friend class NhanVien;
      friend void display_finance(NhanVien x[],int n);
};
class NhanVien{
private:
      int maNV;
      char Ho[25];
      char Ten[25];
      Date ns;
      PBan pb;
public:
      void Nhap();
      void Xuat();
      friend void display_finance(NhanVien x[],int n);
      friend void sort_staff(NhanVien x[],int n);
      friend void add_staff(NhanVien x[],int n);
      friend void Del_staff(NhanVien x[],int n);
};
void Date::Nhap()
{
      cout<<"Nhap ngay thang nam: ";      cin>>D>>M>>Y;
}
void Date::Xuat()
{
      cout<<setw(15)<<D<<"/"<<M<<"/"<<Y;
}
void NhanVien::Nhap()
{
      cout<<"Nhap ma NV: ";                     cin>>maNV;
      cout<<"Ho: ";           fflush(stdin);    gets(Ho);
      cout<<"Ten: ";          fflush(stdin);    gets(Ten);
      ns.Nhap();
      cout<<"Ma pb: ";                          cin>>pb.maPb;
      cout<<"Ten Phong: ";    fflush(stdin);    gets(pb.TenPb);
      cout<<"Truong Phong: "; fflush(stdin);    gets(pb.TrPhong);
      cout<<"So nhap vien: ";                   cin>>pb.Sonv;
}
void NhanVien::Xuat()
{
      cout<<setw(15)<<maNV
      <<setw(15)<<Ho<<" "<<Ten
      <<setw(15)<<pb.maPb
      <<setw(15)<<pb.TenPb
      <<setw(15)<<pb.TrPhong
      <<setw(15)<<pb.Sonv<<endl;
}
void TieuDe(){
       cout<<setw(15)<<"maNV"
      <<setw(15)<<"Ho"<<" "<<"Ten"
      <<setw(15)<<"maPb"
      <<setw(15)<<"TenPb"
      <<setw(15)<<"TrPhong"
      <<setw(15)<<"Sonv"<<endl;
}
void Nhap_N(NhanVien x[],int n)
{
      for(int i=0;i<n;i++)    x[i].Nhap();
}
void Xuat_N(NhanVien x[],int n)
{
      for(int i=0;i<n;i++)    x[i].Xuat();
}
void display_finance(NhanVien x[],int n){
      for(int i=0;i<n;i++){
            if(strcmp(x[i].pb.TenPb,"tai chinh")==0){
            x[i].Xuat();
            }
      }
}
void sort_staff(NhanVien x[],int n){
      for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                 if(strcmp(x[i].Ten,x[j].Ten)>0){
                  NhanVien tmp;
                  tmp=x[i];
                  x[i]=x[j];
                  x[j]=tmp;
                 }
            }
      }
      Xuat_N(x,n);
      cout<<endl;
}
void add_staff(NhanVien x[],int n){
      NhanVien y;
      y.Nhap();
      int k;
      cout<<"Chen Nhan Vien vao vi tri Thu: ";        cin>>k;
      n++;
      int i;
      for(i=n-1;i>=k;i--){
                  x[i]=x[i-1];
      }
      x[i]=y;
      Xuat_N(x,n);
      cout<<endl;
}
void Del_staff(NhanVien x[],int n){
      for(int i=0;i<n;i++){
            if(x[i].maNV==123)
            {
                  for(int j=i;j<n;j++){
                        x[j]=x[j+1];
                  }
                  n--;
                  i--;
            }
      }
      Xuat_N(x,n);
      cout<<endl;
}
int main()
{
      NhanVien*x;
      int n;
      cout<<"Nhap so nhan vien: ";        cin>>n;
      x=new NhanVien[n];
      Nhap_N(x,n);
      cout<<endl;
      display_finance(x,n);
      sort_staff(x,n);
      add_staff(x,n);
    return 0;
}
