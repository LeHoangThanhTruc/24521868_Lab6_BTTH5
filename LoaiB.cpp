#include "LoaiB.h"
#include "KhachHang.h"
#include <bits/stdc++.h>
using namespace std;
LoaiB::LoaiB(string hoTen,int soLuong,double donGia,int soNam):KhachHang(hoTen,soLuong,donGia),soNam(soNam){}
double LoaiB::SoTienKhachTra(){
    double khuyenMai = max(soNam*0.05,0.5);
    return (soLuong*donGia)*(1-khuyenMai)+0.1;
}
void LoaiB::Nhap(){
    KhachHang::Nhap();
    cin >> soNam;
}
void LoaiB::Xuat(){
    KhachHang::Xuat();
    cout << fixed << setprecision(0)<< SoTienKhachTra() << endl;
}
LoaiB::~LoaiB(){}
