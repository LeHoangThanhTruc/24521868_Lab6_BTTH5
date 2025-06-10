#include "QuanLyLTVKCV.h"
#include "NhanVien.h"
#include "LTV.h"
#include "KCV.h"
#include <bits/stdc++.h>
using namespace std;
QuanLyLTVKCV::QuanLyLTVKCV(int n):n(n){
    nv = nullptr;
}
void QuanLyLTVKCV::NhapDS(){
    if(n==0){
        cout << "Nhap so luong nhan vien : "; cin >> n;
    }
    nv = new NhanVien*[n];
    int loai;
    for(int i = 0; i<n;i++){
        cout << "Nhan vien thu " << i+1 << endl;
        cout << "Chon loai nhan vien 1-lap trinh vien, 2-kiem chung vien : "; cin >> loai;
        if(loai==1){
            nv[i] = new LTV();
        }
        else if(loai==2){
            nv[i] = new KCV();
        }
        else{
            cout << "Loai nhan vien khong hop le !" << endl;
            i--;
            continue;
        }
        nv[i]->Nhap();
    }
}
void QuanLyLTVKCV::XuatDS(){
    for(int i = 0; i<n;i++){
        nv[i]->Xuat();
    }
}
void QuanLyLTVKCV::XuatDSNVLgThapHonAvg(){
    double tong = 0.0;
    for(int i = 0; i < n; i++){
        tong+=nv[i]->LuongHangThang();
    }
    double mucLgAvg = tong/n; //So luong nhan vien la n, khong can bien dem
    bool kt = false;
    cout << "DANH SACH NHAN VIEN CO LUONG THAP HON MUC LUONG TRUNG BINH" << endl;
    for(int i =0;i < n; i++){
        if(nv[i]->LuongHangThang()<mucLgAvg){
            nv[i]->Xuat();
            kt = true;
        }
    }
    if(!kt) cout << "Khong co nhan vien nao co luong thap hon muc trung binh" << endl;
}
void QuanLyLTVKCV::NVMaxLg(){
    cout << "DANH SACH NHAN VIEN CO LUONG CAO NHAT" << endl;
    double maxLuong = DBL_MIN;
    vector<NhanVien*> dsNVMaxLg;
    for(int i = 0; i <n; i++){
        if(nv[i]->LuongHangThang()>maxLuong){
            maxLuong = nv[i]->LuongHangThang();
            dsNVMaxLg.clear();
            dsNVMaxLg.push_back(nv[i]);
        }
        else if(nv[i]->LuongHangThang()==maxLuong){
            dsNVMaxLg.push_back(nv[i]);
        }
    }
    if(!dsNVMaxLg.empty()){
        for(NhanVien* nnv : dsNVMaxLg){
            nnv->Xuat();
        }
    }
}
void QuanLyLTVKCV::NVMinLg(){
    cout << "DANH SACH NHAN VIEN CO LUONG THAP NHAT" << endl;
    double minLuong = DBL_MAX;
    vector<NhanVien*> dsNVminLg;
    for(int i = 0; i <n; i++){
        if(nv[i]->LuongHangThang()<minLuong){
            minLuong = nv[i]->LuongHangThang();
            dsNVminLg.clear();
            dsNVminLg.push_back(nv[i]);
        }
        else if(nv[i]->LuongHangThang()==minLuong){
            dsNVminLg.push_back(nv[i]);
        }
    }
    if(!dsNVminLg.empty()){
        for(NhanVien* nnv : dsNVminLg){
            nnv->Xuat();
        }
    }
}
void QuanLyLTVKCV::LTVMaxLg(){
    cout << "DANH SACH LAP TRINH VIEN CO LUONG CAO NHAT" << endl;
    vector<LTV*> dsLTVMaxLg;
    double maxLuong = DBL_MIN;
    for(int i = 0; i < n;i++){
        LTV* lt = dynamic_cast<LTV*>(nv[i]);
        if(lt){
            if(lt->LuongHangThang()>maxLuong){
                maxLuong = lt->LuongHangThang();
                dsLTVMaxLg.clear();
                dsLTVMaxLg.push_back(lt);
            }
            else if(lt->LuongHangThang()==maxLuong){
                dsLTVMaxLg.push_back(lt);
            }
        }
    }
    if(!dsLTVMaxLg.empty()){
        for(LTV* lt : dsLTVMaxLg){
            lt->Xuat();
        }
    }
    else cout << "Khong co lap trinh vien co luong cao nhat" << endl;
}
void QuanLyLTVKCV::KCVMinLg(){
    cout << "DANH SACH KIEM CHUNG VIEN CO LUONG THAP NHAT" << endl;
    vector<KCV*> dsKCVminLg;
    double minLuong = DBL_MAX;
    for(int i = 0; i < n;i++){
        KCV* kc = dynamic_cast<KCV*>(nv[i]);
        if(kc){
            if(kc->LuongHangThang()<minLuong){
                minLuong = kc->LuongHangThang();
                dsKCVminLg.clear();
                dsKCVminLg.push_back(kc);
            }
            else if(kc->LuongHangThang()==minLuong){
                dsKCVminLg.push_back(kc);
            }
        }
    }
    if(!dsKCVminLg.empty()){
        for(KCV* kc : dsKCVminLg){
            kc->Xuat();
        }
    }
    else cout << "Khong co kiem chung vien co luong thap nhat" << endl;
}
QuanLyLTVKCV::~QuanLyLTVKCV(){
    for(int i = 0; i < n; i++){
        delete nv[i];
    }
    delete[] nv;
}
