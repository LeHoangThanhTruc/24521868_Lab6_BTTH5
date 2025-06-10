#ifndef KHACHHANG_H
#define KHACHHANG_H
#include <bits/stdc++.h>
using namespace std;

class KhachHang{
protected:
    string hoTen;
    int soLuong;
    double donGia;
public:
    KhachHang(string hoTen = "",int soLuong = 0,double donGia = 0.0);
    virtual void Nhap();
    virtual void Xuat();
    virtual double SoTienKhachTra() = 0;
    virtual ~KhachHang();
};

#endif // KHACHHANG_H
