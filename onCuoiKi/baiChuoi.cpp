#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class String{
private:
      string str;
public:
      String(){str="nguyen Tam";}
      String (string a){str=a;}
      void NhapChuoi(){
            cout<<"Nhap chuoi: ";         fflush(stdin);    getline(cin,str);
      }
      void XuatChuoi(){
            cout<<"Chuoi is: "<<str<<endl;
      }
      String operator+(String ob);
      String operator=(String ob);
      bool operator==(String ob);
      bool operator>(String ob);
      bool operator<(String ob);
      friend istream&operator>>(istream &is,String &x);
      friend ostream&operator<<(ostream &os,String x);
};
String String::operator+(String ob){
      String temp;
      temp.str=this->str+ob.str;
      return temp;
}
String String::operator=(String ob){
      this->str=ob.str;
      return *this;
}
bool String::operator==(String ob){
      if(this->str==ob.str)
            return true;
      else
            return false;
}

bool String::operator>(String ob){
      if(this->str>ob.str)
            return true;
      else
            return false;
}
bool String::operator<(String ob){
      if(this->str<ob.str)
            return true;
      else
            return false;
}
istream &operator>>(istream&is,String &x){
      cout<<"nhap chuoi: ";   fflush(stdin);    getline(is,x.str);
      return is;
}
ostream &operator<<(ostream&os,String x){
      os<<"xuat chuoi: "<<x.str<<endl;
}
int main(){
     String a,b,c;
     cin>>a;
     cin>>b;
     if(a>b){
      cout<<"a>b"<<endl;
     }else
     cout<<"no"<<endl;

}
