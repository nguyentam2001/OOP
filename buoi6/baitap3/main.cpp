#include <bits/stdc++.h>

using namespace std;
class Phanso
{
private:
      float a,b;
public:
      Phanso(int x=0,int y=0){
            a=x;
            b=y;
      }
      friend ostream& operator<<(ostream& s,const Phanso& d);
      Phanso operator+(Phanso &obj);
      Phanso operator-(Phanso &obj);
      Phanso operator*(Phanso &obj);
      Phanso operator/(Phanso &obj);
};
/*istream& operator>>(istream& s,Phanso& d)
{
      cout<<"nhap tu so";           s>>d.a;
      cout<<"nhap mau so";          s>>d.b;
      return s;
}*/
ostream&operator<<(ostream& s,const Phanso& d)
{
      s<<d.a<<"/"<<d.b;
}
Phanso Phanso::operator+(Phanso &obj)
{
   Phanso temp;
   temp.a=a*obj.b+b*obj.a;
   temp.b=b*obj.b;
   return temp;
}
Phanso Phanso::operator-(Phanso &obj)
{
   Phanso temp;
   temp.a=a*obj.b-b*obj.a;
   temp.b=b*obj.b;
   return temp;
}
Phanso Phanso::operator*(Phanso &obj)
{
     Phanso temp;
     temp.a=a*obj.a;
     temp.b=b*obj.b;
     return temp;
}
Phanso Phanso::operator/(Phanso &obj)
{
      Phanso temp;
      temp.a=a*obj.b;
      temp.b=b*obj.a;
      return temp;
}
int main()
{
      Phanso A(2,3),B(4,5),kq;

      kq=A+B;
      cout<<kq;
      kq=A-B;
      cout<<kq;
    return 0;
}
