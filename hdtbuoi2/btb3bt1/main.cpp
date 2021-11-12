#include <bits/stdc++.h>

using namespace std;
class NSX{
private:
      char maNSX[25];
      char tenNSX[30];
      char dcNSX[30];
public:
      friend class Hang;
};
class Hang{
private:
      char maHang[30];
      char tenHang[30];
      int donGia;
      int trongLuong;
      NSX x;
public:
      void nhap(){
            cout<<"nhap ma Hang";   fflush(stdin);          gets(maHang);
            cout<<"nhap ten Hang";   fflush(stdin);         gets(tenHang);
            cout<<"nhap don gia";                           cin>>donGia;
            cout<<"nhap trong luong";                       cin>>trongLuong;
            cout<<"nhap ma nsx";          fflush(stdin);    gets(x.maNSX);
            cout<<"nhap ten nsx";         fflush(stdin);    gets(x.tenNSX);
            cout<<"nhap dc sx";           fflush(stdin);    gets(x.dcNSX);

      }
      void xuat(){
            cout<<"xuat ma hang: "<<maHang<<endl;
            cout<<"nhap ten Hang: "<<tenHang<<endl;
            cout<<"xuat don gia: "<<donGia<<endl;
            cout<<"xuat trong luong: "<<trongLuong<<endl;
            cout<<"xuat ma nsx: "<<x.maNSX<<endl;
            cout<<"xuat ten nsx: "<<x.tenNSX<<endl;
            cout<<"xuat dia chi: "<<x.dcNSX<<endl;
      }
};
int main()
{
    Hang a;
    a.nhap();
    a.xuat();
    return 0;
}
