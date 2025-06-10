#include "NhanVien.h"
#include <bits/stdc++.h>
using namespace std;
NhanVien::NhanVien(string maNV,string hoTen,string email,int tuoi,long long sdt,double luongCB):
    maNV(maNV),hoTen(hoTen),email(email),tuoi(tuoi),sdt(sdt),luongCB(luongCB){}
void NhanVien::Nhap(){
    cout << "Nhap ma nhan vien : ";
    getline(cin>>ws,maNV);
    cout << "Nhap ho va ten : ";
    getline(cin>>ws,hoTen);
    cout << "Nhap tuoi : ";cin>>tuoi;
    cout << "Nhan sdt : ";cin>>sdt;
    cout << "Nhap email : ";
    getline(cin>>ws,email);
    cout << "Nhap luong can ban : "; cin>>luongCB;
}
void NhanVien::Xuat(){
    cout << "Ma nhan vien : "<< maNV <<endl;
    cout << "Ho va ten : "<< hoTen<<endl;
    cout << "Tuoi : " << tuoi << endl;
    cout << "Sdt : " <<sdt<< endl;
    cout << "Email : "<<email << endl;
    cout << "Luong can ban : "<<luongCB <<endl;
}
NhanVien::~NhanVien(){}
