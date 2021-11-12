#include <iostream>

using namespace std;
class Trinomial
{
private:
      float a,b,c;
public:
      Trinomial (float x=0,float y=0,float z=0)
      {
            a=x;
            b=y;
            c=z;
      }
      friend ostream&operator<<(ostream &s,Trinomial &d);
      Trinomial operator-();
      Trinomial operator+(Trinomial&obj);
};
ostream&operator<<(ostream&s,Trinomial &d)
{
      if(d.a<0){
      s<<d.a<<"x2"<<d.b<<"x"<<d.c;
      }else
      {
            s<<d.a<<"x2 + "<<d.b<<"x + "<<d.c;
      }
}
Trinomial Trinomial::operator-()
{
      a=-a;
      b=-b;
      c=-c;
      return *this;
}
Trinomial Trinomial::operator+(Trinomial&obj)
{
      Trinomial temp;
      temp.a=a+obj.a;
      temp.b=b+obj.b;
      temp.c=c+obj.c;
      return temp;

}
int main()
{
    Trinomial A(2,3,4),B(3,4,5),kq;
    kq=-A;
    cout<<kq<<endl;
    kq=A+B;
    cout<<kq;
    return 0;
}
