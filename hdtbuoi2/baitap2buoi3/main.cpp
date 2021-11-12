#include <bits/stdc++.h>

using namespace std;
class NSX{
private:
      string maNSX;
      int tenNSX;
      string dcNSX;
public:
      friend class Hang;
};
class Hang{
private:
      string maHang;
      string Tenhang;
      int dongia;
      int kl;
      NSX x;
public:
      void nhap();
      void xuat();
};
void Hang::nhap(){
      cout<<"nhap ma hang: ";       fflush(stdin);    getline(cin,maHang);
      cout<<"nhap ten hang: ";      fflush(stdin);    getline(cin,Tenhang);
      cout<<"nhap don gia: ";                         cin>>dongia;
      cout<<"nhap khoi luong: ";                      cin>>kl;
      cout<<"nhap ma sx: ";         fflush(stdin);    getline(cin,x.maNSX);
      cout<<"nhap ngay san xuat: ";                   cin>>x.tenNSX;
      cout<<"nhap dia chi sx: ";                      cin>>x.dcNSX;
}
void Hang::xuat(){
      cout<<"ma hang: "<<maHang<<endl;
      cout<<"ten hang: "<<Tenhang<<endl;
      cout<<"don gia: "<<dongia<<endl;
      cout<<"khoi luong: "<<kl<<endl;
      cout<<"ma san xuat: "<<x.maNSX<<endl;
      cout<<"ngay san xuat: "<<x.tenNSX<<endl;
      cout<<"dia chi: "<<x.dcNSX<<endl;
}
int main()
{
    Hang s1;
    s1.nhap();
    s1.xuat();
    return 0;
}
