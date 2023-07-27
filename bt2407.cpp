#include<iostream>
#include<string.h>
using namespace std;
class GV 
{
    char ht[30];
    int tuoi;
    char bc[20];
    char cn[20];
    float bl;

    public:
    void nhap()
        {
        cout <<"nhap ho ten: ";
        fflush(stdin);
        cin.getline(ht, 30);

        cout <<"nhap tuoi: ";
        cin >>this->tuoi;

        cout <<"nhap bc: ";
        fflush(stdin);
        cin.getline(bc, 20);

        cout <<"nhap cn: ";
        fflush(stdin);
        cin.getline(cn, 20);

        cout <<"nhap bac luong: ";
        cin >>this->bl;
        }
    void xuat()
        {
            cout <<"ho va ten: "<<ht<<endl
                 <<"tuoi: "<<this->tuoi<<endl
                 <<"bang cap: "<<bc<<endl
                 <<"chuyen nganh: "<<this->cn<<endl
                 <<"bac luong: "<<this->bl<<endl
                 <<"luong co ban: "<<this->LCB()<<endl;   
        }
    float LCB()
        {
            return this->bl*610;
        }    
};

void nhapds(GV a[], int &n)
    {
        cout <<"nhap danh sach gom "<<n<<"giao vien"<<endl;
        for (int i=0; i<n; ++i)
        {
            cout <<"+Thong tin giao vien thu "<<i+1<<endl;
            a[i].nhap();
        }
    }
void xuatds(GV a[], int &n)
    {
         {
        cout <<"xuat danh sach gom "<<n<<"giao vien"<<endl;
        for (int i=0; i<n; ++i)
        {
            cout <<"+Thong tin giao vien thu "<<i+1<<endl;
            a[i].xuat();
        }
    }
    }

int main()
{
    int n;
    cout <<"so giao vien: ";
    cin >>n;
    GV a[n];
    nhapds(a, n);
    xuatds(a, n);    
    return 0;
}