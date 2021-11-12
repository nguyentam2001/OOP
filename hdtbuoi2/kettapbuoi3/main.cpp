#include <iostream>

using namespace std;
class Date{
private:
      int d,m,y;
public:
      void nhap();
      void xuat();
};
class NhanSu{
private:
      string Mans;
      string HoVaTen;
      Date ns;
public:
      void nhap();
      void xuat();
};
void Date::nhap(){
      cout<<"nhap ngay thang nam"<<endl;        cin>>d>>m>>y;
}
void Date::xuat(){
      cout<<"ngay "<<d<<" / "<<m<<" / "<<y<<endl;
}
void NhanSu::nhap(){
      cout<<"Ma nhan su: ";           getline(cin,Mans);
      cout<<"Ho va ten: ";            getline(cin,HoVaTen);
      ns.nhap();
}
void NhanSu::xuat(){
      cout<<"Ma nhan su: "<<Mans<<endl;
      cout<<"Ho va ten: "<<HoVaTen<<endl;
      ns.xuat();
}
int main()
{
    NhanSu s1;
    s1.nhap();
    s1.xuat();
}
