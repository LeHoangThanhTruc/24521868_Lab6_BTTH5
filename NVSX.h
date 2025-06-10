#ifndef NVSX_H
#define NVSX_H
#include "NV.h"
#include <bits/stdc++.h>
using namespace std;

class NVSX:public NV{
private:
    double luongCB;
    long long soSP;
public:
    NVSX(string hT = "", string nS = "",double lg = 0, long long ngy = 0,long long thg = 0,long long nm = 0,double luongCB = 0.0,long long soSP =0);
    void Nhap() override;
    double TinhLuong()override ;
    void Xuat()override ;
    ~NVSX();
};

#endif // NVSX_H
