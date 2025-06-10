#ifndef QUANLY_H
#define QUANLY_H
#include "NV.h"
#include "NVSX.h"
#include "NVVP.h"
#include <bits/stdc++.h>
using namespace std;

class QuanLy{
private:
    int n;
    NV** nv;
public:
    QuanLy(int n = 0);
    void NhapDS();
    void XuatDS();
    double TongLuong();
    double MinLgSx();
    long long VPMaxTuoi();
    ~QuanLy();
};

#endif // QUANLY_H
