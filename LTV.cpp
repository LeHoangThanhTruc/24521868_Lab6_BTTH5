#include "LTV.h"
#include "NhanVien.h"
#include <bits/stdc++.h>
using namespace std;
LTV::LTV(string maNV,string hoTen,string email,int tuoi,long long sdt,double luongCB,double soGioOv):
    NhanVien(maNV,hoTen,email,tuoi,sdt,luongCB),soGioOv(soGioOv){}
void LTV::Nhap(){
    NhanVien::Nhap();
    cout << "Nhap so gio lam them : "; cin>>soGioOv;
}
void LTV::Xuat(){
    NhanVien::Xuat();
    cout << "So gio lam them : " << soGioOv << endl;
    cout << "Luong hang thang  : " << LuongHangThang() << endl;
}
double LTV::LuongHangThang(){
    return luongCB+soGioOv*200000;
}
LTV::~LTV(){}
