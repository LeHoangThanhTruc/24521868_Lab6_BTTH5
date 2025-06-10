#include "LoaiC.h"
#include "KhachHang.h"
#include <bits/stdc++.h>
using namespace std;
LoaiC::LoaiC(string hoTen,int soLuong,double donGia):KhachHang(hoTen,soLuong,donGia){}
double LoaiC::SoTienKhachTra(){
    return (soLuong*donGia)*0.5+0.1;
}
void LoaiC::Xuat(){
    KhachHang::Xuat();
    cout << fixed << setprecision(0)<<SoTienKhachTra() << endl;
}
LoaiC::~LoaiC(){}
