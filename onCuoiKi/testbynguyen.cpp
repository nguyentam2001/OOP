#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class ChiTiet{
private:
      string MaPhieu;
      string Ngay;
      int soluong;
      int chitiet;
public:
      friend class PHIEU;
      friend void Xuat_Phieu_SL_Max(PHIEU a[],int m);
};
class Hang{
private:
      string TenSach;
      string TenTacGia;
      string TenNXB;
      int soLuong;

public:
      friend class PHIEU;
      friend int find_Max_Soluong(PHIEU p);
      friend void Xuat_Phieu_SL_Max(PHIEU a[],int m);
};
class PHIEU{
private:
      Hang*x;
      ChiTiet y;
      int n;
public:
      void nhap();
      void xuat();
      friend int find_Max_Soluong(PHIEU p);
      friend void Xuat_Phieu_SL_Max(PHIEU a[],int m);
};
void PHIEU::nhap(){
      cout<<"Nhap ma phieu: ";       fflush(stdin);     getline(cin,y.MaPhieu);
      cout<<"Nhap ngay: ";           fflush(stdin);     getline(cin,y.Ngay);
      cout<<"so luong: ";                 cin>>y.soluong;
      cout<<"chitet: ";                   cin>>y.chitiet;
      cout<<"Nhap so mat hang: ";         cin>>n;
      x=new Hang[n];
      for(int i=0;i<n;i++){
            cout<<"Nhap ten sach: ";       fflush(stdin);      getline(cin,x[i].TenSach);
            cout<<"Nhap Ten TG: ";         fflush(stdin);     getline(cin,x[i].TenTacGia);
            cout<<"Ten NXB: ";             fflush(stdin);    getline(cin,x[i].TenNXB);
            cout<<"Nhap so luong: ";            cin>>x[i].soLuong;
      }
}
void PHIEU::xuat(){
      cout<<"========================================================================="<<endl;
      cout<<"Ma Sach: "<<y.MaPhieu<<setw(25)<<"Ngay Nhap: "<<y.Ngay<<endl;
      cout<<"So luong: "<<y.soluong<<endl;
      cout<<"Chi tiet: "<<y.chitiet;
      cout<<"Ten sach"<<setw(15)<<"Ten Tac gia"<<setw(15)<<"Ten NXB"<<setw(15)<<"So luong"<<endl;
      for(int i=0;i<n;i++){
                  cout<<x[i].TenSach<<setw(15)<<x[i].TenSach<<setw(15)<<x[i].TenNXB<<setw(15)<<x[i].TenTacGia<<setw(15)<<x[i].soLuong<<endl;

      }
      cout<<"========================================================================="<<endl;
}
void Nhap_M_Phieu(PHIEU a[],int n){
      for(int i=0;i<n;i++){
            cout<<"Nhap phieu thu"<<i<<endl;
            a[i].nhap();
      }
}
void Xuat_M_Phieu(PHIEU a[],int n){
      for(int i=0;i<n;i++){
            cout<<"Phieu thu: "<<i<<endl;
            a[i].xuat();
      }
}
int find_Max_Soluong(PHIEU p){
      int Max=0;
       for(int i=0;i<p.n;i++){
            if(p.x[i].soLuong>Max)
                  Max=p.x[i].soLuong;
       }
       return Max;
 }
void Xuat_Phieu_SL_Max(PHIEU a[],int m){
      for(int i=0;i<m;i++){
            for(int j=0;j<a[i].n;j++){
                if( a[i].x[j].soLuong==find_Max_Soluong(a[i])){
                  cout<<a[i].y.MaPhieu<<"////"<<a[i].x[j].TenSach<<"////"<<a[i].x[j].TenNXB<<"////"<<a[i].x[j].TenTacGia<<"///"<<a[i].x[j].soLuong<<endl;
                }
            }
      }
}
int main(){
      int m;
      cout<<"Nhap so luong phieu: ";            cin>>m;

      PHIEU *a=new PHIEU[m];
    Nhap_M_Phieu(a,m);
    Xuat_M_Phieu(a,m);
    Xuat_Phieu_SL_Max(a,m);


}
