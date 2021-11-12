#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class ARRAY{
private:
      int n;
      int *a;
public:
      ARRAY(){n=0;a=NULL;}
      void nhap(){
            cin>>n;
            a=new int[n];
            for(int i=0;i<n;i++){
                  cout<<"a[" <<i<<"] = ";
                  cin>>a[i];
            }
      }
      ARRAY operator++();
      ARRAY operator+(ARRAY &obj);
      ARRAY operator--();
      friend istream&operator>>(istream &is,ARRAY &obj);
      friend ostream&operator<<(ostream &os,ARRAY obj);

};
ARRAY ARRAY::operator++(){
      int count=0;
      int Min=0;
      for(int i=0;i<this->n;i++)
            if(this->a[i]%2==0){
            Min=this->a[i];
            count++;//check phan tu chan
            break;
            }
      for(int i=0;i<this->n;i++){
            if(this->a[i]<Min&&this->a[i]%2==0)
            {
                  Min=this->a[i];
            }
      }
      for(int i=0;i<this->n;i++){
            if(count==0)
                  this->a[i]=this->a[i]+2;
            else
                  this->a[i]=this->a[i]+Min;
            }
            return *this;

}

ARRAY ARRAY::operator+(ARRAY &obj){
      if(this->n!=obj.n){
            this->n=0;
            this->a=NULL;
            return*this;
      }else{
            //khoi tao mang
      ARRAY ArraySum;
      //khai bao bo nho mang
      ArraySum.n=this->n;
      ArraySum.a=new int[ArraySum.n];
      for(int i=0;i<ArraySum.n;i++){
            ArraySum.a[i]=this->a[i]+obj.a[i];
      }
      return ArraySum;
      }


}
ARRAY ARRAY::operator--(){
      for(int i=0;i<this->n-1;i++){
            for(int j=i+1;j<this->n;j++){
                  if(this->a[i]<this->a[j]){
                        int temp;
                        temp=this->a[i];
                        this->a[i]=this->a[j];
                        this->a[j]=temp;
                  }
            }
      }
      return*this;
}
istream &operator>>(istream &is,ARRAY &obj){
      cout<<"nhap phan tu cua mang: ";          is>>obj.n;
      obj.a=new int[obj.n];
      for(int i=0;i<obj.n;i++){
            cout<<"a["<<i<<"] = ";  is>>obj.a[i];
      }
      return is;
}
ostream&operator<<(ostream &os,ARRAY obj){
      os<<"array is: ";
      for(int i=0;i<obj.n;i++){
            os<<obj.a[i]<<" ";
      }
      cout<<endl;
}
int main(){
      ARRAY a,x;
      cin>>a;
      x=--a;
      cout<<x;
}
