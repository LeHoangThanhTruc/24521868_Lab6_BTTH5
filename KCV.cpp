#include "KCV.h"
#include "NhanVien.h"
#include <bits/stdc++.h>
using namespace std;
KCV::KCV(string maNV,string hoTen,string email,int tuoi,long long sdt,double luongCB,long long soLoi):
    NhanVien(maNV,hoTen,email,tuoi,sdt,luongCB),soLoi(soLoi){}
void KCV::Nhap(){
    NhanVien::Nhap();
    cout << "Nhap so loi phat hien duoc : "; cin>>soLoi;
}
void KCV::Xuat(){
    NhanVien::Xuat();
    cout << "So loi phat hien duoc : " << soLoi << endl;
    cout << "Luong hang thang  : " << LuongHangThang() << endl;
}
double KCV::LuongHangThang(){
    return luongCB+soLoi*50000;
}
KCV::~KCV(){}
