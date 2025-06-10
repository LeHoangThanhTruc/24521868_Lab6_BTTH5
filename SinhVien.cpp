#include "SinhVien.h"
#include <bits/stdc++.h>
using namespace std;
SinhVien::SinhVien(string mssv, string hoTen, string diaChi,int tstc,double dtb):
    mssv(mssv),hoTen(hoTen),diaChi(diaChi),tstc(tstc),dtb(dtb){}
void SinhVien::Nhap(){
    cout << "Nhap ma so sinh vien : ";
    getline(cin>>ws,mssv);
    cout << "Nhap ho ten : ";
    getline(cin>>ws,hoTen);
    cout << "Nhap dia chi : ";
    getline(cin>>ws,diaChi);
    cout << "Nhap tong so tin chi : "; cin >> tstc;
    cout << "Nhap diem trung binh : ";cin >> dtb;
}
void SinhVien::Xuat(){
    cout << "Ma so sinh vien : " << mssv << endl;
    cout << "Ho ten : " << hoTen << endl;
    cout << "Dia chi : " << diaChi << endl;
    cout << "Tong so tin chi : " << tstc << endl;
    cout << "Diem trung binh : " << dtb << endl;
}
double SinhVien::getDTB(){
    return dtb;
}
SinhVien::~SinhVien(){}
