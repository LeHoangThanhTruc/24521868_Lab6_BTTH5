#ifndef LOAIA_H
#define LOAIA_H
#include <bits/stdc++.h>
#include "KhachHang.h"
using namespace std;

class LoaiA:public KhachHang{
public:
    LoaiA(string hoTen = "",int soLuong = 0,double donGia = 0.0);
    double SoTienKhachTra() override;
    void Xuat() override;
    ~LoaiA();
};

#endif // LOAIA_H
