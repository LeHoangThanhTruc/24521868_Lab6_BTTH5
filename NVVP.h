#ifndef NVVP_H
#define NVVP_H
#include "NV.h"
#include <bits/stdc++.h>
using namespace std;

class NVVP:public NV{
private:
   double soNgayLV;
public:
    NVVP(string hT = "", string nS = "",double lg = 0, long long ngy = 0,long long thg = 0,long long nm = 0, double soNgayLV = 0);
    void Nhap() override;
    double TinhLuong() override;
    void Xuat()override;
    ~NVVP();
};

#endif // NVVP_H
