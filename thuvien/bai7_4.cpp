#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class SANPHAM{
private:
      string Name;
      float Unitprice;
      int amout;
public:
      float Total(){
            return Unitprice*amout;
      }
      friend class PHIEU;
};
class PHIEU{
private:
      string Maphieu;
      string Ngaylap;
      SANPHAM*x;
      int n;
public:
      void nhap();
      void xuat();
};
void PHIEU::nhap(){
      cout<<"Nhap ma phieu: ";            fflush(stdin);                getline(cin,Maphieu);
      cout<<"Nhap ngay
      cout<<"Nhap so san pham: ";                     cin>>n;
      x=new SANPHAM[n];
      for(int i=0;i<n;i++)
      {
            cout<<"Ten hang: ";                 fflush(stdin);          getline(cin,)
            cout<<"Nhap don gia: ";             cin>>x[i].Unitprice;
            cout<<"Nhap so luong: ";            cin>>x[i].amout;
      }
}
void PHIEU::xuat(){

}
int main(){

}
