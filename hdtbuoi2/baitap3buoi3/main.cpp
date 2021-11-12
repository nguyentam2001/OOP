#include <iostream>

using namespace std;
class Array
{
private:
      int *a;
      int n;
public:
      friend istream&operator>>(istream&is,Array &d);
      friend ostream&operator<<(ostream &os, const Array d);

};
istream&operator>>(istream &is,Array &d)
{
      is>>d.n;
      for(int i=0;i<d.n;i++)
      {
            is>>d.a[i];
      }
}
ostream&operator<<(ostream&os,const Array d)
{
      for(int i=0;i<d.n;i++)
      {
            os<<d.a[i]<<"  ";
      }
}

int main()
{

      Array x;
      cin>>x;
      cout<<x;

      return 0;
}
