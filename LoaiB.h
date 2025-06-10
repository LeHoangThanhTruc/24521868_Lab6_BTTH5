#ifndef LOAIB_H
#define LOAIB_H
#include <bits/stdc++.h>
#include "KhachHang.h"
using namespace std;

class LoaiB:public KhachHang{
private:
    int soNam;
public:
    LoaiB(string hoTen = "",int soLuong = 0,double donGia = 0.0,int soNam = 0);
    void Nhap() override;
    double SoTienKhachTra() override;
    void Xuat() override;
    ~LoaiB();
};

#endif // LOAIB_H
