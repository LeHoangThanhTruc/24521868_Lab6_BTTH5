#ifndef KCV_H
#define KCV_H
#include <bits/stdc++.h>
#include "NhanVien.h"
using namespace std;

class KCV:public NhanVien{
private:
    long long soLoi;
public:
    KCV(string maNV= "",string hoTen="",string email="",int tuoi=0,long long sdt=0,double luongCB=0.0,long long soLoi = 0);
    void Nhap() override;
    void Xuat() override;
    double LuongHangThang() override;
    ~KCV();
};

#endif // KCV_H
