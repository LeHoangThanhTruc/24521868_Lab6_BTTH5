#ifndef LOAIC_H
#define LOAIC_H
#include <bits/stdc++.h>
#include "KhachHang.h"
using namespace std;

class LoaiC:public KhachHang{
public:
    LoaiC(string hoTen = "",int soLuong = 0,double donGia = 0.0);
    double SoTienKhachTra() override;
    void Xuat() override;
    ~LoaiC();
};

#endif // LOAIC_H
