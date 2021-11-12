#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*int main(){
     char hoten[30]="nguyen Van Tam";// vd cat lay 1 doan cuoi sau
      char ten[30];

	cout<<hoten+8<<endl;
}*/
struct sinhVien{
	char hoten[255];
};
void tachten(char hoten[],char ten[]){
	for(int i=strlen(hoten)-1;i>=0;i--){
		if(hoten[i]==' '){
			strcpy(ten,hoten+1+i);
			break;
		}
	}
}
void sapxep(sinhVien danhsach[],int soSinhVien){
	for(int i=0;i<soSinhVien;i++){
		for(int j=i+1;j<soSinhVien;j++){
			char ten1[255]="",ten2[255]="";
			tachten(danhsach[i].hoten,ten1);
			tachten(danhsach[j].hoten,ten2);
			int check1=strcmpi(ten1,ten2);
			if(check1>0){
				sinhVien tam=danhsach[i];
				danhsach[i]=danhsach[j];
				danhsach[j]=tam;
			}
			else if(check1==0){
		int check2=strcmpi(danhsach[i].hoten,danhsach[j].hoten);
					if(check2>0){
						sinhVien tam=danhsach[i];
						danhsach[i]=danhsach[j];
						danhsach[i]=tam;
					}
			}
		}
	}
}
	for(int i=0;i<soSinhVien;i++){
		for(int j=i+1;j<soSinhVien;j++){
			char ten1[255]="",ten2[255]="";
			tachten(danhsach[i].hoten,ten1);
			tachten(danhsach[j].hoten,ten2);
			int check1=strcmpi(ten1,ten2);
			if(check1>0){
				sinhVien tam=danhsach[i];
				danhsach[i]=danhsach[j];
				danhsach[j]=tam;
			}
			else if(check1==0){
		int check2=strcmpi(danhsach[i].hoten,danhsach[j].hoten);
					if(check2>0){
						sinhVien tam=danhsach[i];
						danhsach[i]=danhsach[j];
						danhsach[i]=tam;
					}
			}
		}
	}
}*/
