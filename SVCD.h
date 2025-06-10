#ifndef SVCD_H
#define SVCD_H
#include <bits/stdc++.h>
#include "SinhVien.h"
using namespace std;

class SVCD:public SinhVien{
private:
    double diemThiTN;
public:
    SVCD(string mssv = "", string hoTen = "", string diaChi ="",int tstc = 0,double dtb = 0.0, double diemThiTN = 0.0);
    void Nhap() override;
    void Xuat() override;
    bool XetTN() override;
    ~SVCD();
};

#endif // SVCD_H
