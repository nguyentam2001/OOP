#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class String{
private:
      string str;
public:

      friend istream&operator>>(istream&is,String&obj);
       friend ostream&operator<<(ostream&os,String&obj);
      String operator+(String&obj);
      String operator=(String&obj);
      friend bool operator>(String&s1,String &s2);
      friend bool operator<(String&s1,String &s2);
      friend bool operator==(String&s1,String &s2);
};
istream&operator>>(istream&is,String&obj){
      cout<<"nhap chuoi: ";    fflush(stdin);      getline(is,obj.str);
      return is;
}
ostream&operator<<(ostream&os,String&obj){
      os<<"xuat chuoi: " <<obj.str;
      return os;
}
String String::operator+(String&obj){
      String tmp;
      tmp.str=this->str+obj.str;
      return tmp;
}
String String::operator=(String&obj){
      this->str=obj.str;
      return *this;

}
bool operator>(String&s1,String&s2){
      if(s1>s2){
            return true;
      }else{
            return false;
      }

}
bool operator<(String &s1,String&s2){
      if(s1<s2){
            return true;
      }else{
            return false;
      }

}
bool operator==(String &s1,String&s2){
      if(s1==s2){
           return true;
      }else{
            return false;
      }
}
int main()
{
      String a;
      cin>>a;
      cout<<a;

}
