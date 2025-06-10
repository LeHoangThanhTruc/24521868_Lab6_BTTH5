#ifndef QUANLYGD_H
#define QUANLYGD_H
#include "GiaoDich.h"
#include "GDNP.h"
#include "GDD.h"
#include "GDCHCC.h"
#include <bits/stdc++.h>
using namespace std;

class QuanLyGD{
private:
    GiaoDich** gd;
    int n;
public:
    QuanLyGD(int n=0);
    void NhapDS();
    void XuatDS();
    int TongSoLuongTungLoai();
    double ThanhTienAvgCHCC();
    double MaxThanhTienGDNP();
    void XuatDSTheoDate();
    ~QuanLyGD();
};

#endif // QUANLYGD_H
