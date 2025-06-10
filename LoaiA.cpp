#include "LoaiA.h"
#include "KhachHang.h"
#include <bits/stdc++.h>
using namespace std;
LoaiA::LoaiA(string hoTen,int soLuong,double donGia):KhachHang(hoTen,soLuong,donGia){}
double LoaiA::SoTienKhachTra(){
    return soLuong*donGia+0.1;
}
void LoaiA::Xuat(){
    KhachHang::Xuat();
    cout << fixed << setprecision(0)<<SoTienKhachTra() << endl;
}
LoaiA::~LoaiA(){}
