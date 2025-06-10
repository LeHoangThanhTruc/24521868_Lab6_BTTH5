#ifndef NV_H
#define NV_H
#include <bits/stdc++.h>
using namespace std;
class NV{
protected:
    string hT;
    string nS;
    double lg;
    long long ngy, thg, nm;
public:
    NV(string hT = "", string nS = "",double lg = 0, long long ngy = 0,long long thg = 0,long long nm = 0);
    virtual void Nhap();
    void Tach(string& nS,long long &ngy,long long &thg,long long &nm);
    virtual void Xuat();
    virtual double TinhLuong() = 0;
    long long TinhTuoi(long long ngayHT, long long thangHT,long long namHT);
    virtual ~NV();
   // string Hop(long long &ngy,long long &thg,long long &nm);
};

#endif // NV_H
