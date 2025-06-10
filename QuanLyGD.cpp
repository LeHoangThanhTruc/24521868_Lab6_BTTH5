#include "QuanLyGD.h"
#include "GiaoDich.h"
#include "GDNP.h"
#include "GDD.h"
#include "GDCHCC.h"
#include <bits/stdc++.h>
using namespace std;


QuanLyGD::QuanLyGD(int n):n(n){
    gd = nullptr;
}
void QuanLyGD::NhapDS(){
    if(n==0){
        cout << "Nhap so luong giao dich : "; cin >> n;
    }
    gd = new GiaoDich*[n];
    int loai;
    for(int i = 0; i<n;i++){
        cout << "Giao dich thu "<<i+1 << endl;
        cout << "Chon loai giao dich 1_giao dich dat, 2_giao dich nha pho, 3_giao dich can ho chung cu (nhap 1 hoac 2 hoac 3) : ";
        cin >> loai;
        if(loai ==1) gd[i] = new GDD();
        else if (loai==2) gd[i] = new GDNP();
        else if(loai==3) gd[i] = new GDCHCC();
        else {
            cout << "Loai giao dich khong hop le ! Thoat chuong trinh" << endl;
            exit(0);
        }
        gd[i]->Nhap();
    }
}
void QuanLyGD::XuatDS(){
    for(int i = 0; i<n;i++){
        gd[i]->Xuat();
    }
}
int QuanLyGD::TongSoLuongTungLoai(){
    //Cách 1 : duyệt mảng 3 lần O(3n)
    /*vector<GDD*> dsGDD;
    vector<GDNP*> dsGDNP;
    vector<GDCHCC*> dsGDCHCC;
    for(int i = 0; i< n; i++){
        GDD* d = dynamic_cast<GDD*>(gd[i]);
        if(d) dsGDD.push_back(d);
    }
    cout << "So luong giao dich cua loai giao dich dat : " << dsGDD.size() << endl;
    for(int i = 0; i< n; i++){
        GDNP* np = dynamic_cast<GDNP*>(gd[i]);
        if(np) dsGDNP.push_back(np);
    }
    cout << "So luong giao dich cua loai giao dich nha pho : " << dsGDNP.size() << endl;
    for(int i = 0; i< n; i++){
        GDCHCC* chcc = dynamic_cast<GDCHCC*>(gd[i]);
        if(chcc) dsGDCHCC.push_back(chcc);
    }
    cout << "So luong giao dich cua loai giao dich can ho chung cu : " << dsGDCHCC.size() << endl;
   */
   //Cách 2 : duyệt mảng 1 lần O(n)
    int demGDD = 0, demGDNP = 0, demGDCHCC = 0;
    for (int i = 0; i < n; i++) {
       if (dynamic_cast<GDD*>(gd[i])) demGDD++;
       else if (dynamic_cast<GDNP*>(gd[i])) demGDNP++;
       else if (dynamic_cast<GDCHCC*>(gd[i])) demGDCHCC++;
    }
    cout << "So luong giao dich cua loai giao dich dat : " << demGDD << endl;
    cout << "So luong giao dich cua loai giao dich nha pho : " << demGDNP << endl;
    cout << "So luong giao dich cua loai giao dich can ho chung cu : " << demGDCHCC << endl;
}
double QuanLyGD::ThanhTienAvgCHCC(){
    vector<GDCHCC*> dsGDCHCC;
    for(int i = 0; i< n; i++){
        GDCHCC* chcc = dynamic_cast<GDCHCC*>(gd[i]);
        if(chcc) dsGDCHCC.push_back(chcc);
    }
    double tong = 0;
    for(GDCHCC* chcc : dsGDCHCC){
        tong += chcc->ThanhTien();
    }
    //Mẫu = 0 thí return 0 nếu không chương trính sẽ crash
    if(dsGDCHCC.empty())return 0;
    else return tong/dsGDCHCC.size();
}
double QuanLyGD::MaxThanhTienGDNP(){
    vector<GDNP*> dsGDNP;
    for(int i = 0; i< n; i++){
        GDNP* np = dynamic_cast<GDNP*>(gd[i]);
        if(np) dsGDNP.push_back(np);
    }
    sort(dsGDNP.begin(),dsGDNP.end(),[](GDNP* a, GDNP* b){
         return a->ThanhTien() < b->ThanhTien();
    });
    if(!dsGDNP.empty()){
        double maxThanhTien = dsGDNP.back()->ThanhTien();
        cout << "Danh sach giao dich nha pho thanh tien cao nhat : " << endl;
        for(GDNP* np : dsGDNP){
            np->Xuat();
        }
    }
}
void QuanLyGD::XuatDSTheoDate(){
    bool coGD = false;
    cout << "Danh sach cac giao dich thang 12 nam 2024 " << endl;
    for(int i = 0;i<n;i++){
        if(gd[i]->TimKiem(12,2024)){
            gd[i]->Xuat();
            coGD = true;
        }
    }
    if(!coGD) cout << "Khong co giao dich nao trong thang 12 nam 2024" << endl;
}
QuanLyGD::~QuanLyGD(){
    for(int i = 0; i<n;i++){
        delete gd[i];
    }
    delete[] gd;
}
