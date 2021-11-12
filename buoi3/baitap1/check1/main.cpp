#include <iostream>
#include <cstring>
#include <stdio.h>
#include <windows.h>
using namespace std;
class date
    {
        private:
            int day;
            int month;
            int year;
        public:
            void nhap()
                {
                   cout<<" \n\t\t ngay "; cin>>day;
                   cout<<" \n\t\t thang "; cin>>month;
                   cout<<" \n\t\t nam "; cin>>year;
                }
            void xuat()
                {
                    cout<<day<<"\\"<<month<<"\\"<<year;
                }
        friend class SINHVIEN;
    };
class SINHVIEN
    {
       private:
            string name;
            date date_of_birth; //ngày sinh
            string sex;         //giới tính
            float grade;        //grade: điểm trung bình (mark: điểm bài kt, score: điểm số chung cuộc, point: mỗi đơn vị điểm được thêm khi có thành tích)
            string morality;    // đạo đức

       public:
            void input();
            void output();
    };
void SINHVIEN::input()
    {
        cout<< "\n Nhap ho ten: ";          fflush(stdin); getline(cin, name);
        cout<< "\n Nhap ngay sinh: ";       date_of_birth.nhap();
        cout<< "\n Nhap gioi tinh: ";       fflush(stdin); getline(cin, sex);
        cout<< "\n Nhap diem trung binh: "; cin>>grade;
        cout<< "\n Nhap dao duc: ";         fflush(stdin); getline(cin, morality);

    }
void SINHVIEN::output()
    {
        cout<< "\n\t\t THONG TIN SINH VIEN VUA NHAP: ";
        cout<< "\n Ho ten la: ";            cout<<name;
        cout<< "\n Nhap ngay sinh: ";       date_of_birth.xuat();
        cout<< "\n Nhap gioi tinh: ";       cout<<sex;
        cout<< "\n Nhap diem trung binh: "; cout<<grade;
        cout<< "\n Nhap dao duc: ";         cout<<morality;
        cout<<"\n Enter de tiep tuc...";

    }
void MENU(SINHVIEN student[], int n)
    {
        int luachon; n=0;


    while(true)
        {
            cout<<"\n 1.Nhap thong tin sinh vien ";
            cout<<"\n 2.Xuat thong tin sinh vien ";
            cout<<"\n 0.Thoat ";
            cout<<"\n\t Moi ban nhap vao lua chon : ";
            cin>>luachon;
            if (luachon==1)
                {
                    student[n].input();
                    n++;
                    system("cls");
                }
            if (luachon==2)
                {
                   for(int i=0; i<n; i++) student[i].output();

                   system("pause");

                }
        }


    }
int main()
{
    SINHVIEN student[100];
    int n;

    MENU(student, n);

    return 0;
}
