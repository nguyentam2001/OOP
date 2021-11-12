#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Array{
private:
      int n;
      int *a;
public:
      Array(){n=0;a=NULL;}
      /*Array(int x){
            n=x;
            a=new int[n];
            for(int i=0;i<n;i++){
                  a[i]=0;
            }
      }*/
     friend istream&operator>>(istream &is,Array &ob);
     friend ostream&operator<<(ostream &os,Array ob);
     Array operator++();
     Array operator+(Array &ob);
     Array operator--();

};
istream&operator>>(istream&is,Array &ob)
{
      cout<<"Nhap phan tu mang: ";        is>>ob.n;
      ob.a=new int[ob.n];
      for(int i=0;i<ob.n;i++)
            is>>ob.a[i];
}
ostream&operator<<(ostream&os,Array ob)
{
      cout<<"Xuat mang: ";
      for(int i=0;i<ob.n;i++)
            os<<ob.a[i]<<" ";
}
Array Array::operator++(){
      int Max=0;
      for(int i=0;i<this->n;i++){
            if(this->a[i]%2==0){
                  Max=a[i];
                  break;
            }
      }
      for(int i=0;i<this->n;i++)
      {
            if(Max<this->a[i]&&this->a[i]%2==0)
                  Max=this->a[i];
      }
      if(Max%2==0){
            for(int i=0;i<this->n;i++){
                  this->a[i]=this->a[i]+Max;
            }
      }else{
            for(int i=0;i<this->n;i++){
                  this->a[i]=this->a[i]+2;
            }
      }
      return*this;
}
Array Array::operator+(Array &ob)
{
     Array sum;
    if(this->n != ob.n){
        return Array();
    } else {
        sum.n = this->n;
        sum.a = new int[sum.n];
        for(int i=0; i<sum.n; i++){
            sum.a[i] = this->a[i] + ob.a[i];
        }
        return sum;
    }

}
Array Array::operator--(){
      for(int i=0;i<this->n-1;i++)
      {
            for(int j=i+1;j<this->n;j++){
                  if(this->a[i]<this->a[j]){
                        int tmp;
                        tmp=this->a[i];
                        this->a[i]=this->a[j];
                        this->a[j]=tmp ;

                  }
            }
      }
      return *this;
}
int main(){
      Array a,b,kq;
      cin>>a;
      cout<<endl;
      cin>>b;
      cout<<a;
      cout<<endl;
      cout<<b;
      kq=a+b;
      cout<<endl;
      cout<<kq;
      kq=--a;
      cout<<kq;
      kq=++a;
      cout<<kq;




}
