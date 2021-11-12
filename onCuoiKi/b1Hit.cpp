#include<iostream>
#include<bits/stdc++.h>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
class SACHGK;
class TacGia{
private:
      string TenTacGia;
      string DiaChiTG;
public:
      friend class SACHGK;
};
class NXB{
private:
      string Ten_NXB;
      string DiaChi;
public:
      friend class SACHGK;
      friend void HienThi_NXB(SACHGK a[],int n);
};
class IDSACH{
protected:
      string TenSach;
      string MaSach;
public:
      void Nhap();
      void Xuat();

};
class SACHGK:public IDSACH{
private:

      TacGia x;
      NXB y;
public:
      void Nhap();
      void Xuat();
      friend void HienThi_NXB(SACHGK a[],int n);
      friend void  HienThi_Sgk(SACHGK a[],int n);
};
void IDSACH::Nhap(){
      cout<<"Nhap id sach: ";       fflush(stdin);          getline(cin,TenSach);
      cout<<"Xuat ma sach: ";       fflush(stdin);          getline(cin,MaSach);
}
void IDSACH::Xuat(){
      cout<<TenSach<<setw(15)<<MaSach;
}
void SACHGK::Nhap(){
      IDSACH ::Nhap();
      cout<<"Nhap ten tac gia: ";         fflush(stdin);          getline(cin,x.DiaChiTG);
      cout<<"Nhap dia chi: ";             fflush(stdin);          getline(cin,x.TenTacGia);
      cout<<"Nhap ten xnb: ";             fflush(stdin);          getline(cin,y.Ten_NXB);
      cout<<"Dia chi nxb: ";              fflush(stdin);          getline(cin,y.DiaChi);
}
void SACHGK::Xuat(){
      IDSACH::Xuat();
      cout<<x.TenTacGia<<setw(15)<<x.DiaChiTG<<setw(15)<<y.Ten_NXB<<setw(15)<<y.DiaChi<<endl;
}
void TieuDe(){
      cout<<"id sach"<<setw(15)<<" ma sach"<<setw(15)<<"Ten tac gia"<<setw(15)<<"Dia chi tac gia "<<setw(15)<<"Ten NXB"<<setw(15)<<"dia chi nha xb"<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
}
void Nhap_N(SACHGK a[],int n){
      for(int i=0;i<n;i++){
                  cout<<"sach thu: "<<i<<endl;
            a[i].Nhap();
      }
}
void Xuat_N(SACHGK a[],int n){
      for(int i=0;i<n;i++){
                   cout<<"sach thu: "<<i<<endl;
            a[i].Xuat();
      }
}
void HienThi_NXB(SACHGK a[],int n){
      for(int i=0;i<n;i++){
           if( a[i].y.Ten_NXB=="Giao Duc"){
            a[i].Xuat();
           }
      }
}
void  HienThi_Sgk(SACHGK a[],int n){
      for(int i=0;i<n;i++){
           if( a[i].TenSach=="LTHDT"){
            a[i].Xuat();
           }
      }
}
void NhapThemSach(SACHGK *a,int &n,int k){
    a = (SACHGK *)realloc(a, n+1);
    SACHGK newBook;
    cout << "Nhap thong tin SGK can them: " << endl;
    newBook.Nhap();
    for(int i=n-1; i>=k-1; i--){
        a[i+1] = a[i];
    }
    a[k-1] = newBook;
    n++;
}
int main(){
      int n;
      cout<<"Nhap n sach: ";        cin>>n;
      SACHGK *a;
      a=new SACHGK[n];
      Nhap_N(a,n);
      Xuat_N(a,n);
      int k;
      cout<<"nhap vi tri can chen";       cin>>k;
      NhapThemSach(a,n,k);

}
