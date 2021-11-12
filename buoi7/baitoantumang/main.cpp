#include <iostream>

using namespace std;
/*class Array{
private:
      int *a,n;
public:
      Array(){
             n=3;
             a=new int[3];
      }
      Array(int m){
            n=m;
             a=new int[n];
             for(int i=0;i<n;i++)
             {
                  cin>>a[i];
             }
      }
      friend ostream&operator<<(ostream&os,const Array&m);
      Array operator++();

};
ostream&operator<<(ostream&os,const Array&m)
{
      for(int i=0;i<m.n;i++)
      os<<m.a[i]<<"  ";
}
Array Array::operator++()
{

      int Min=a[0];
      for(int i=0;i<n;i++){
            if(Min>a[i])
                  Min=a[i];
      }
      for(int i=0;i<n;i++){
            a[i]=a[i]+Min;
      }
      return*this;
}
int main()
{

      Array a(6);
      cout<<a;
      a=++a;
      cout<<endl;
      cout<<a;

    return 0;
}*/

class Thetich{
private:
      int a,b,c;
public:
      Thetich(){
            a=0;b=0;c=0;
      }
      Thetich(int x,int y,int z)
      {
            a=x;
            b=y;
            c=z;
      }
      void get(int& x,int &y,int &z)
      {
            x=a;
            y=b;
            z=c;
            cout<<x<<" "<<y<<" "<<z;
      }

      friend ostream&operator<<(ostream &os, Thetich obj);
      int Tinh(Thetich &x){
            return x.a*x.b*x.c;
      }
     friend Thetich operator+( Thetich &ps, const int &i);
};
ostream&operator<<(ostream &os, Thetich obj){
      os<<obj.Tinh(obj);
      return os;
}
 Thetich operator+( Thetich &ps,const int &i){
      Thetich temp;
      temp.a=ps.a+i;
      temp.b=ps.b+i;
      temp.c=ps.c+i;
      return temp;

}
int main(){
      Thetich a(2,3,4);
      Thetich b(3,4,5),m;
      int u,v,t;
      cout<<a;
      cout<<endl;
      cout<<b;
      m=a+2;
      m.get(u,v,t);
      return 0;
}
