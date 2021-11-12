#include <bits/stdc++.h>

using namespace std;
class Vector
{
private:
      int x,y;
public:
      void nhap();
      void xuat();
      Vector operator+(Vector&obj);
      Vector operator-(Vector&obj);
};
void Vector::nhap()
{
      cin>>x>>y;
}
void Vector::xuat()
{
      cout<<"( "<<x<<" , "<<y<<" )";
}
Vector Vector::operator+(Vector&obj)
{
      Vector temp;
      temp.x=x+obj.x;
      temp.y=y+obj.y;
      return temp;
}
Vector Vector::operator-(Vector&obj)
{
      Vector temp;
      temp.x=x-obj.x;
      temp.y=x-obj.y;
      return temp;
}
int main()
{
    Vector A,B,kq;
    cout<<"nhap A: ";         A.nhap();
    cout<<"nhap B: ";         B.nhap();
    kq=A+B;
    cout<<"A + B = ";         kq.xuat(); cout<<endl;
    kq=A-B;
    cout<<"A - B = ";         kq.xuat();
    return 0;
}
