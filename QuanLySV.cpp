#include "QuanLySV.h"
#include "SinhVien.h"
#include "SVCD.h"
#include "SVDH.h"
#include <bits/stdc++.h>
using namespace std;
QuanLySV::QuanLySV(int n):n(n){
    sv = nullptr;
}
void QuanLySV::NhapDS(){
    if(n==0){
        cout << "Nhap so luong sinh vien : "; cin >> n;
    }
    sv = new SinhVien*[n];
    int loai;
    for(int i = 0; i<n;i++){
        cout << "Nhap sinh vien thu " << i+1<<endl;
        cout << "Nhap loai sinh vien 1_sinh vien cao dang, 2_sinh vien dai hoc (nhap 1 hoac 2) : "; cin >> loai;
        if(loai == 1) sv[i] = new SVCD();
        else if(loai == 2) sv[i] = new SVDH();
        else{
            cout << "Loai khong hop le! Thoat chuong trinh"<<endl;
            exit(0);
        }
        sv[i]->Nhap();
    }
}
void QuanLySV::XuatDS(){
    for(int i =0; i<n;i++){
        sv[i]->Xuat();
    }
}
void QuanLySV::XuatDSSVDuDKTN(){
    cout << "DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP " << endl;
    for(int i = 0; i < n; i++){
        if(sv[i]->XetTN()){
            sv[i]->Xuat();
        }
    }
}
void QuanLySV::XuatDSSVKoDuDKTN(){
    cout << "DANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP " << endl;
    for(int i = 0; i < n; i++){
        if(!(sv[i]->XetTN())){
            sv[i]->Xuat();
        }
    }
}
void QuanLySV::MaxDTBSVDH(){
    vector<SVDH*> dsSVDHMaxDTB;
    double maxDTB = DBL_MIN;
    for(int i = 0; i<n;i++){
        SVDH* dh = dynamic_cast<SVDH*>(sv[i]);
        if(dh){
            if(dh->getDTB()>maxDTB){
                maxDTB = dh->getDTB();
                dsSVDHMaxDTB.clear();
                dsSVDHMaxDTB.push_back(dh);
            }
            else if(dh->getDTB()==maxDTB){
                dsSVDHMaxDTB.push_back(dh);
            }
        }
    }
    cout << "DANH SACH SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT " <<endl;
    for(SVDH* ddh : dsSVDHMaxDTB){
        ddh->Xuat();
    }
}
void QuanLySV::MaxDTBSVCD(){
    vector<SVCD*> dsSVCDMaxDTB;
    double maxDTB = DBL_MIN;
    for(int i = 0; i<n;i++){
        SVCD* cd = dynamic_cast<SVCD*>(sv[i]);
        if(cd){
            if(cd->getDTB()>maxDTB){
                maxDTB = cd->getDTB();
                dsSVCDMaxDTB.clear();
                dsSVCDMaxDTB.push_back(cd);
            }
            else if(cd->getDTB()==maxDTB){
                dsSVCDMaxDTB.push_back(cd);
            }
        }
    }
    cout << "DANH SACH SINH VIEN CAO DANG CO DIEM TRUNG BINH CAO NHAT " <<endl;
    for(SVCD* cdd : dsSVCDMaxDTB){
        cdd->Xuat();
    }
}
void QuanLySV::XuatDSSVKoDuDKTNTheoTungLoai(){
    bool Kt1 = false;
    bool Kt2 = false;
    cout << "DANH SACH SINH VIEN CAO DANG KHONG DU DIEU KIEN TOT NGHIEP " << endl;
    for(int i = 0; i<n;i++){
        SVCD* cd = dynamic_cast<SVCD*>(sv[i]);
        if(cd){
           if(!(cd->XetTN())){
               cd->Xuat();
               Kt1 = true;
           }
        }
    }
    if(!Kt1) cout << "Khong co sinh vien cao dang khong du dieu kien tot nghiep" << endl;
    cout << "DANH SACH SINH VIEN DAI HOC KHONG DU DIEU KIEN TOT NGHIEP " << endl;
    for(int i = 0; i<n;i++){
        SVDH* dh = dynamic_cast<SVDH*>(sv[i]);
        if(dh){
           if(!(dh->XetTN())){
               dh->Xuat();
               Kt2 = true;
           }
        }
    }
     if(!Kt2) cout << "Khong co sinh vien dai hoc khong du dieu kien tot nghiep" << endl;
}
QuanLySV::~QuanLySV(){
    for(int i = 0; i < n; i++){
        delete sv[i];
    }
    delete[] sv;
}
