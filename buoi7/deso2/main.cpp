#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class chuoi{
private:
     char *ptr;
     int len;
public:
      chuoi(char*s);
      ~chuoi()    {delete[] ptr;}
      char*get() {return ptr;}
      chuoi operator=(chuoi &ob);
      chuoi operator+(chuoi&ob);
      bool operator>(chuoi&ob);
      bool operator==(chuoi&ob);
};
chuoi::chuoi(char*s){
      int l;
      l=strlen(s);
      ptr=new char [l];
      len =l;
      strcpy(ptr,s);
}
//dinh nghia toan thu gan
chuoi chuoi::operator=(chuoi&ob)
{
      if(len<ob.len)
      {
            delete []ptr;
            ptr =new char[ob.len];
      }
      len =ob.len;
      strcpy(ptr,ob.ptr);
      return *this;
}
 chuoi chuoi::operator+(chuoi &ob){

       int j=0,i;
       for(i=len;i<len+ob.len;i++){
                  ptr[i]=ob.ptr[j];
                  j++;
       }
       ptr[i] = '\0';//no ko co ki tu dang sau
       return *this;
 }
 bool chuoi::operator>(chuoi&ob){
       int x=strcmp(ptr,ob.ptr);
       if(x>0)
            return true;
       else
            return false;
 }
 bool chuoi::operator==(chuoi&ob){
       int x=strcmp(ptr,ob.ptr);
       if(x==0)
            return true;
       else
            return false;
 }

int main()
{
      chuoi a("helloo"),b("there");
      cout<<a.get()<<endl;
      cout<<b.get()<<endl;
      a=b;//gan nay ptr ko bi gi de
      cout<<a.get()<<endl;
      cout<<b.get()<<endl;
      cout<<(a+b).get()<<endl;
       cout<<a.get()<<endl;
      cout<<b.get()<<endl;
      if(a>b){
            cout<<"dung"<<endl;
      }else
      cout<<"sai"<<endl;
      if(a==b){
            cout<<"dung"<<endl;
      }else
      cout<<"sai"<<endl;
    return 0;
}
