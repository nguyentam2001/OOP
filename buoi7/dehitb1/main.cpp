#include <iostream>
#include<bits/stdc++.h>
class SACHGK;
using namespace std;
class TACGIA{
private:
      string tenTG;
      string DIaChi_TG;
      friend class SACHGK;

};
class NXB{
private:
      string tenNXB;
      string DiaChi_NXB;
      friend class SACHGK;
      friend void HienThiNXB(SACHGK a[],int n);

};
class IDSACH{
protected:
      string TenSach;
      string MaSach;
public:
      void nhap();
      void xuat();
      friend void Hienthi(SACHGK a[],int n);
};
class SACHGK:public IDSACH{
private:
      TACGIA x;
      NXB y;
public:
      void nhap();
      void xuat();
      friend void HienThiNXB(SACHGK a[],int n);
      friend void Chen_Sach(SACHGK a[],int n);
};
void IDSACH::nhap(){
      cout<<"nhap ten sach: ";            fflush(stdin); getline(cin,TenSach);
      cout<<"nhap ma sach: ";             fflush(stdin); getline(cin,MaSach);
}
void IDSACH::xuat(){
      cout<<setw(10)<<TenSach;
      cout<<setw(10)<<MaSach;
}
void SACHGK::nhap(){
      IDSACH::nhap();
      cout<<"Tac gia: ";                  fflush(stdin);    getline(cin,x.tenTG);
      cout<<"Dia chi Tac gia: ";          fflush(stdin);    getline(cin,x.DIaChi_TG);
      cout<<"Nha xuat ban: ";             fflush(stdin);    getline(cin,y.tenNXB);
      cout<<"Dia chi nha xuat ban: ";     fflush(stdin);    getline(cin,y.tenNXB);
}
void SACHGK::xuat(){
      IDSACH::xuat();
      cout<<setw(15)<<x.tenTG;
      cout<<setw(15)<<x.DIaChi_TG;
      cout<<setw(15)<<y.tenNXB;
      cout<<setw(15)<<y.DiaChi_NXB<<endl;
}
void Nhap_N(SACHGK a[],int n){
      for(int i=0;i<n;i++)
            a[i].nhap();

}
void Xuat_N(SACHGK a[],int n)
{
      for(int i=0;i<n;i++)
            a[i].xuat();

}
void HienThiNXB(SACHGK a[],int n){
      for(int i=0;i<n;i++){
            if(a[i].y.tenNXB=="Giao Duc")
                  a[i].xuat();
      }
}
void Hienthi(SACHGK a[],int n){
      for(int i=0;i<n;i++)
      {
            if(a[i].TenSach=="LTHDT")
                  a[i].xuat();
      }
}
void Chen_Sach(SACHGK a[],int n)
{
      SACHGK x;
      x.nhap();
      int k;
      cout<<"Nhap so nguyen k<=n: ";          cin>>k;
      for(int i=0;i<n;i++){
            if(i==k-1){
                  a[i]=x;
            }
      }
      Xuat_N(a,n);

}
int main()
{
      int n;
      cout<<"nhap n sach giao khoa: ";          cin>>n;
      SACHGK*a=new SACHGK[n];
      Nhap_N(a,n);
      Xuat_N(a,n);
      Hienthi(a,n);
      Chen_Sach(a,n);

    return 0;
}
