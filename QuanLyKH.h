#ifndef QUANLYKH_H
#define QUANLYKH_H
#include <bits/stdc++.h>
#include "KhachHang.h"
#include "LoaiA.h"
#include "LoaiB.h"
#include "LoaiC.h"
using namespace std;

class QuanLyKH{
private:
    KhachHang** kh;
    int n,x,y,z;
public:
    QuanLyKH();
    void NhapDS();
    void XuatDS();
    void TongSoTienThuDuoc();
    ~QuanLyKH();
};

#endif // QUANLYKH_H
