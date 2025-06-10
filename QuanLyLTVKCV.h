#ifndef QUANLYLTVKCV_H
#define QUANLYLTVKCV_H
#include <bits/stdc++.h>
#include "NhanVien.h"
#include "LTV.h"
#include "KCV.h"
using namespace std;

class QuanLyLTVKCV{
private:
    NhanVien** nv;
    int n;
public:
    QuanLyLTVKCV(int n = 0);
    void NhapDS();
    void XuatDS();
    void XuatDSNVLgThapHonAvg();
    void NVMaxLg();
    void NVMinLg();
    void LTVMaxLg();
    void KCVMinLg();
    ~QuanLyLTVKCV();
};

#endif // QUANLYLTVKCV_H
