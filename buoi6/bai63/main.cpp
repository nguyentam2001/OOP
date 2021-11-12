#include <iostream>

using namespace std;
class Sophuc
{
private:
      float Real,Virtual;
public:

      Sophuc(float x=0,float y=0)//phai gan x=0;y=0 thi ms ko loi
      {
            Real=x;
            Virtual=y;
      }
      friend ostream&operator<<(ostream &s,const Sophuc &d);
      Sophuc operator+(Sophuc&obj);
      Sophuc operator-(Sophuc&obj);
};
ostream&operator<<(ostream&s,const Sophuc &d)
{
      s<<d.Real<<" + "<<d.Virtual<<"i";
}
Sophuc Sophuc::operator+(Sophuc&obj){
      Sophuc temp;
      temp.Real= Real+obj.Real;
      temp.Virtual=Virtual+obj.Virtual;
      return temp;
}
Sophuc Sophuc::operator-(Sophuc&obj){
      Sophuc temp;
      temp.Real= Real-obj.Real;
      temp.Virtual=Virtual-obj.Virtual;
      return temp;
}
int main(){
      Sophuc A(2,3),B(4,5),kq;
      kq=A+B;
      cout<<kq<<endl;
      kq=A-B;
      cout<<kq<<endl;
    return 0;
}
