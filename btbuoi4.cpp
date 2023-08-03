#include<iostream>
#include<string.h>
using namespace std;

class GV{
    private:
    char ht[15];
    int t;
    char bc[15];
    char cn[20];
    float bl;

    public:
    //toan tu nhap:
    friend istream& operator >> (istream& in, GV &a)
    {
        cout <<"ho va ten: ";
        fflush(stdin);
        in.getline(a.ht, 15);

        cout <<"tuoi: ";
        in >>a.t;

        cout <<"bang cap: ";
        fflush(stdin);
        in.getline(a.bc, 15);

        cout <<"chuyen nganh: ";
        in.getline(a.cn, 20);

        cout <<"bac luong: ";
        in >>a.bl;

        return in;
    }

    //toan tu xuat:
    friend ostream& operator << (ostream& out, GV a)
    {
        out <<"\nHo va ten: "<<a.ht<<endl
            <<"Tuoi: "<<a.t<<endl
            <<"Bang cap: "<<a.bc<<endl
            <<"Chuyen nganh: "<<a.cn<<endl
            <<"Bac luong: "<<a.bl<<endl
            <<"Luong co ban: "<<a.bl*610<<endl;
        return out;    
    }
    //toan tu so sanh
    bool operator == (GV a){
        return strcmpi(this->bc, a.bc);
    }
};    

    void nhapds(GV a[],int &n)
    {
        for (int i=0; i<n; i++)
        {
            cout <<"nhap thong tin giao vien thu "<<i+1<<":"<<endl;
            cin >>a[i];
        }
    }

    void xuatds(GV a[], int &n)
    {
        for (int i=0; i<n; i++)
        {
            cout <<"thong tin cua giao vien thu"<<i+1<<":"<<endl
                 <<a[i]; 
        }
    }

int main()
{
    int n;
    GV a[n];
    cout <<"nhap so giao vien: ";
    cin >>n;
    nhapds(a, n);
    xuatds(a, n);
    //if.....
    return 0;
}


