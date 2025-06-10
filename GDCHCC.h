#ifndef GDCHCC_H
#define GDCHCC_H
#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;

class GDCHCC:public GiaoDich{
private:
    string maCan;
    int vTT;
public:
    GDCHCC(string maGD = "",string ngayGD = "",double donGia = 0.0, double DienTich = 0.0, int ngay = 0, int thang = 0,int nam = 0, string maCan = "", int vTT = 0);
    void Nhap() override;
    void Xuat() override;
    double ThanhTien() override;
    ~GDCHCC();
};

#endif // GDCHCC_H
