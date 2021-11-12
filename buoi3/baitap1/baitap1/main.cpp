#include <bits/stdc++.h>

using namespace std;
class Hang;
class Date{
private:
      int D,M,Y;
      friend class Hang;
      friend void In_2017(Hang a[],int n);
};
class Hang{
private:
      int MaHang;
      string TenHang;
      long DonGia,TrongLuong;
      Date nsx;
public:
      void nhap();
      void xuat();
      friend void In_2017(Hang a[],int n);
      friend void Ten_hang(Hang a[],int n);
};
void Hang::nhap(){
      cout<<"Nhap ma hang: ";                         cin>>MaHang;
      cout<<"Nhap ten hang: ";        fflush(stdin);  getline(cin,TenHang);
      cout<<"Nhap don gia:  ";                        cin>>DonGia;
      cout<<"nhap trong luong: ";                     cin>>TrongLuong;
      cout<<"nhap ngay thang nam: ";                  cin>>nsx.D>>nsx.M>>nsx.Y;
}
void Hang::xuat(){
      cout<<setw(3)<<MaHang<<setw(10)<<TenHang<<setw(10);
      cout<<DonGia;
      cout<<setw(10)<<nsx.D<<"/"<<nsx.M<<"/"<<nsx.Y<<endl;
}
void In_2017(Hang a[],int n){
      for(int i=0;i<n;i++){
            if(a[i].nsx.Y==2007)    a[i].xuat();
      }
}
void Ten_hang(Hang a[],int n){
      for(int i=0;i<n;i++){
            if(a[i].TenHang=="keo deo")   a[i].xuat();
      }
}
int main()
{
      int n;
      cout<<"nhap so luong hang: ";       cin>>n;
      Hang*a=new Hang[n];
      for(int i=0;i<n;i++){
            cout<<"Nhap hang thu:"<<(i+1)<<endl;
            a[i].nhap();
      }
      for(int i=0;i<n;i++){
            cout<<"Xuat hang thu:"<<(i+1)<<endl;
            a[i].xuat();
      }
      In_2017(a,n);
      Ten_hang(a,n);
}
