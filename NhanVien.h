#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <bits/stdc++.h>
using namespace std;

class NhanVien{
protected:
    string maNV, hoTen, email;
    int tuoi;
    long long sdt;
    double luongCB;
public:
    NhanVien(string maNV= "",string hoTen="",string email="",int tuoi=0,long long sdt=0,double luongCB=0.0);
    virtual void Nhap();
    virtual void Xuat();
    virtual double LuongHangThang() = 0;
    virtual ~NhanVien();
};

#endif // NHANVIEN_H
