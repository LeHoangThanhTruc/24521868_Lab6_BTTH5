#ifndef LTV_H
#define LTV_H
#include <bits/stdc++.h>
#include "NhanVien.h"
using namespace std;

class LTV:public NhanVien{
private:
    double soGioOv;
public:
    LTV(string maNV= "",string hoTen="",string email="",int tuoi=0,long long sdt=0,double luongCB=0.0,double soGioOv = 0.0);
    void Nhap() override;
    void Xuat() override;
    double LuongHangThang() override;
    ~LTV();
};

#endif // LTV_H
