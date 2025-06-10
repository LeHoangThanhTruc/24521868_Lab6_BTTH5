#ifndef SVDH_H
#define SVDH_H
#include <bits/stdc++.h>
#include "SinhVien.h"
using namespace std;


class SVDH:public SinhVien{
private:
    string tenLV;
    double diemLV;
public:
    SVDH(string mssv = "", string hoTen = "", string diaChi ="",int tstc = 0,double dtb = 0.0, string tenLV = "", double diemLV = 0.0);
    void Nhap() override;
    void Xuat() override;
    bool XetTN() override;
    ~SVDH();
};

#endif // SVDH_H
