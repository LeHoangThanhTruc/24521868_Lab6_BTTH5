#ifndef GDD_H
#define GDD_H
#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;

class GDD:public GiaoDich{
private:
    string loaiDat;
public:
    GDD(string maGD = "",string ngayGD = "",double donGia = 0.0, double DienTich = 0.0, int ngay = 0, int thang = 0, int nam = 0, string loaiDat = "");
    void Nhap() override;
    void Xuat() override;
    double ThanhTien() override;
    ~GDD();
};

#endif // GDD_H
