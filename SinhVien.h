#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
protected:
    string mssv, hoTen, diaChi;
    int tstc;
    double dtb;
public:
    SinhVien(string mssv = "", string hoTen = "", string diaChi ="",int tstc = 0,double dtb = 0.0);
    virtual void Nhap();
    virtual void Xuat();
    virtual bool XetTN()=0;
    double getDTB();
    virtual ~SinhVien();
};

#endif // SINHVIEN_H
