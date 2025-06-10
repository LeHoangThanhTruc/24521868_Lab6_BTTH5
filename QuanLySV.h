#ifndef QUANLYSV_H
#define QUANLYSV_H
#include <bits/stdc++.h>
#include "SinhVien.h"
#include "SVCD.h"
#include "SVDH.h"
using namespace std;

class QuanLySV{
private:
    SinhVien** sv;
    int n;
public:
    QuanLySV(int n = 0);
    void NhapDS();
    void XuatDS();
    void XuatDSSVDuDKTN();
    void XuatDSSVKoDuDKTN();
    void MaxDTBSVDH();
    void MaxDTBSVCD();
    void XuatDSSVKoDuDKTNTheoTungLoai();
    ~QuanLySV();
};

#endif // QUANLYSV_H
