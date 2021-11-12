#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class BENHNHAN{
private:
      string HoTen;
      string Gt;
      string time;
};
class THUOC{
private:
      string TenThuoc;
      string DVT;
      int SoL;
      int lieu;
public:
      friend class PHIEU;

};
class Date{
private:
      int D,M,Y;
public:
      friend class PHIEU;
};
class PHIEU{
private:
      Date ns;
      string TenBS;
      BENHNHAN bn;
      THUOC *x;
      int n;
public:
      void nhap();
      void xuat();
};
void PHIEU::nhap(){
      cout
}
int main(){
}
