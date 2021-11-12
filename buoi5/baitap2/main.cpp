#include <iostream>

using namespace std;

class Sophuc{
private:
      int Pthuc,Pao;
public:
      Sophuc();
      void input(){
            cin>>Pthuc;
            cin>>Pao;
      }
      Sophuc operator+(Sophuc&obj){
            Sophuc res;
            res.Pthuc=Pthuc+obj.Pthuc;
            res.Pao=Pao+obj.Pao;
            return res;
      }
      void output(){
            cout<<"   "<<Pthuc<<"+"<<Pao<<"i";
      }
};
Sophuc::Sophuc(){
            Pthuc=1;
            Pao=1;
      }
int main()
{
   Sophuc s1,s2,kq;
   s1.input();
   s2.input();
   kq=s1+s2;
   kq.output();
    return 0;
}
