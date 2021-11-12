#include <bits/stdc++.h>

using namespace std;
class HocSinh{
private:
      string HovTen;
      int ngay,thang,nam;
      char gt[10];
      float DiemTb;
      char xl[5];
public:
      void nhap();
      void xuat();
      string get_HovTen();
      void set_Hovten(string t);
};
void HocSinh::nhap(){
      cout<<"Nhap Ho Va Ten: ";     fflush(stdin); getline(cin,HovTen);
      cout<<"nhap ngay /thang /nam sinh: ";           cin>>ngay>>thang>>nam;
      cout<<"nhap gioi tinh: ";     fflush(stdin);    gets(gt);
      cout<<"nhap diem tb: ";       cin>>DiemTb;
      cout<<"nhap xep loai: ";      fflush(stdin);    gets(xl);
}
string HocSinh::get_HovTen(){
      return HovTen;
}
void HocSinh::set_Hovten(string t){
      HovTen=t;
}
int main()
{
      HocSinh s1;
      s1.nhap();
      s1.set_Hovten("a");
    cout << "ho va ten: " <<s1.get_HovTen();
    return 0;
}
