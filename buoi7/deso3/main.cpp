#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
      int *a,n;
public:
      friend istream&operator>>(istream&is,Array&d);
      friend ostream&operator<<(ostream&os,const Array d);
      Array operator++();
      Array operator--();
};
istream &operator>>(istream&is,Array&d)
{
      is>>d.n;
      d.a=new int[d.n];
      for(int i=0;i<d.n;i++)
            is>>d.a[i];
      return is;
}
ostream&operator<<(ostream&os,const Array d)
{
      for(int i=0;i<d.n;i++)
            os<<d.a[i]<<" ";
}
Array Array::operator++()
{
      Array p=*this;
      for(int i=0;i<n-1;i++)
            {
                  for(int j=i+1;j<n;j++)
                  if(p.a[i]>p.a[j]){
                  int tmp=p.a[i];
                  p.a[i]=p.a[j];
                  p.a[j]=tmp;
                  }

            }
      return p;
}
Array Array::operator--()
{
      Array p=*this;
      for(int i=0;i<n-1;i++)
            {
                  for(int j=i+1;j<n;j++)
                  if(p.a[i]<p.a[j]){
                  int tmp=p.a[i];
                  p.a[i]=p.a[j];
                  p.a[j]=tmp;
                  }

            }
      return p;
}
int main(){
      Array x,y;
      cin>>x;
      cout<<x;
      cout<<endl;
      y=++x;
      cout<<y;
      y=--x;
      cout<<"\a"<<endl;
      cout<<y;

}
