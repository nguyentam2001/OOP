#include <iostream>

using namespace std;
/*class Phanso{
private:
      int a,b;
public:
      friend istream&operator>>(istream &is,Phanso&ob);
      friend ostream&operator<<(ostream&os,const Phanso&ob);
      Phanso operator+(Phanso&obj);
      Phanso operator-(Phanso&obj);

};
istream&operator>>(istream&is,Phanso&ob){
      cout<<"nhap tu so: ";     is>>ob.a;
      cout<<"nhap mau so: ";    is>>ob.b;
      return is;
}
ostream&operator<<(ostream&os,const Phanso&ob){
      os<<ob.a<<"/"<<ob.b;
}
Phanso Phanso::operator+(Phanso&obj){
      Phanso temp;
      temp.a=a*obj.b+obj.a*b;
      temp.b=b*obj.b;
      return temp;
}
Phanso Phanso::operator-(Phanso&obj){
      Phanso temp;
      temp.a=a*obj.b-obj.a*b;
      temp.b=b*obj.b;
      return temp;
}*/
class SoPhuc{
private:
      float thuc,ao;
public:
      SoPhuc(float x=0,float y=0)
      {
            thuc =x;
            ao=y;
      }
      friend ostream&operator<<(ostream&os,const SoPhuc&ob);
      SoPhuc operator+(SoPhuc&obj);
      SoPhuc operator-(SoPhuc&obj);
};
ostream&operator<<(ostream&os,const SoPhuc&ob)
{
      os<<ob.thuc<<" + "<<ob.ao<<"i"<<endl;
}
SoPhuc SoPhuc::operator+(SoPhuc&obj){
      SoPhuc tem;
      tem.thuc=thuc+obj.thuc;
      tem.ao=ao+obj.ao;
      return tem;
}
SoPhuc SoPhuc::operator-(SoPhuc&obj){
      SoPhuc tem;
      tem.thuc=thuc-obj.thuc;
      tem.ao=ao-obj.ao;
      return tem;
}
int main()
{
      SoPhuc A(4,5),B(6,7),kq;
      kq=A+B;
      cout<<kq<<endl;
      kq=A-B;
      cout<<kq<<endl;
    return 0;
}
