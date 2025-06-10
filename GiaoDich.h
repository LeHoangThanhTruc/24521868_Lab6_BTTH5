#ifndef GIAODICH_H
#define GIAODICH_H
#include <bits/stdc++.h>
using namespace std;

class GiaoDich{
protected:
    string maGD;
    string ngayGD;
    double donGia;
    double DienTich;
    int ngay, thang, nam;
public:
    GiaoDich(string maGD = "",string ngayGD = "",double donGia = 0.0, double DienTich = 0.0, int ngay = 0, int thang = 0, int nam = 0);
    virtual void Nhap();
    virtual void Xuat();
    virtual double ThanhTien()=0;
    void Tach(string& ngayGD, int& ngay, int& thang, int& nam);
    bool TimKiem(int thangCanTim, int namCanTim);
    virtual ~GiaoDich();
};

#endif // GIAODICH_H
