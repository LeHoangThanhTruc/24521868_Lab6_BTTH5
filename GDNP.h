#ifndef GDNP_H
#define GDNP_H
#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;

class GDNP:public GiaoDich{
private:
    string loaiNha, diaChi;
public:
    GDNP(string maGD = "",string ngayGD = "",double donGia = 0.0, double DienTich = 0.0, int ngay = 0, int thang = 0, int nam = 0,string loaiNha ="",string diaChi = "");
    void Nhap() override;
    void Xuat() override;
    double ThanhTien() override;
    ~GDNP();
};

#endif // GDNP_H
