#include "QuanLy.h"
#include "NV.h"
#include "NVSX.h"
#include "NVVP.h"
#include <bits/stdc++.h>
using namespace std;
QuanLy::QuanLy(int n):n(n){
    nv = nullptr;
}
void QuanLy::NhapDS(){
    if(n==0){
        cout << "Nhap so luong nhan vien : "; cin >> n;
    }
    nv = new NV*[n];
    int loai;
    for(int i = 0; i<n;i++){
        cout << "Nhan vien thu " << i+1 << endl;
        cout << "Chon loai nhan vien 1-NVVP, 2-NVSX : "; cin >> loai;
        if(loai==1){
            nv[i] = new NVVP();
        }
        else if(loai==2){
            nv[i] = new NVSX();
        }
        else{
            cout << "Loai nhan vien khong hop le !" << endl;
            i--;
            continue;
        }
        nv[i]->Nhap();
    }
}
void QuanLy::XuatDS(){
    for(int i = 0; i<n;i++){
        nv[i]->Xuat();
    }
}
double QuanLy::TongLuong(){
    double tong = 0.0;
    for(int i = 0; i<n;i++){
        tong += nv[i]->TinhLuong();
    }
    return tong;
}
//Tìm min lương của NVSX bằng cách 1 : sắp xếp mảng tăng dần rồi lấy phần tử đầu tiên
double QuanLy::MinLgSx(){
    vector<NVSX*> dsNVSX;
    for(int i = 0; i < n; i++){
        NVSX* nsx = dynamic_cast<NVSX*>(nv[i]);
        if(nsx) dsNVSX.push_back(nsx); //Lọc ra các nhân viên sản xuất
    }
    //Sắp xếp danh sách nhân viên sản xuất theo lương tăng dần
    sort(dsNVSX.begin(), dsNVSX.end(), [](NVSX* a, NVSX* b){
         return a->TinhLuong()<b->TinhLuong();
    });
    if(!dsNVSX.empty()){
        double minLuong = dsNVSX[0]->TinhLuong();
        cout << "Nhung nhan vien san xuat co luong thap nhat : " << endl;
        for(NVSX* nv : dsNVSX){
            if(nv->TinhLuong()==minLuong) nv->Xuat();
        }
    }
}
long long QuanLy::VPMaxTuoi(){
    long long ngayHT, thangHT, namHT;
    cout << "Nhap ngay hien tai : ";cin>>ngayHT;
    cout << "Nhap thang hien tai : "; cin>>thangHT;
    cout << "Nhap nam hien tai : "; cin>>namHT;
    vector<NVVP*> dsNVVP;
    for(int i =0; i< n;i++){
        NVVP* nvp = dynamic_cast<NVVP*>(nv[i]);
        if(nvp) dsNVVP.push_back(nvp);
    }
    //[=] : Cho phép lambda sao chép giá trị của các biến cục bộ (ngayHT, thangHT, namHT).
    //[&] : Cho phép lambda truy cập trực tiếp biến cục bộ (nếu cần thay đổi giá trị bên trong lambda).
    sort(dsNVVP.begin(),dsNVVP.end(),[=](NVVP* a,NVVP* b){
         return a->TinhTuoi(ngayHT, thangHT, namHT) < b->TinhTuoi(ngayHT, thangHT, namHT);
    });
    if(!dsNVVP.empty()){
        long long maxTuoi = dsNVVP.back()->TinhTuoi(ngayHT, thangHT, namHT);
        cout << "Tuoi lon nhat la : " << maxTuoi << endl;
        cout << "Danh sach nhan vien van phong co tuoi lon nhat : " << endl;
        for(NVVP* nv:dsNVVP){
            if(nv->TinhTuoi(ngayHT, thangHT, namHT)==maxTuoi) nv->Xuat();
        }
    }
}
QuanLy::~QuanLy(){
    for(int i = 0; i < n; i++){
        delete nv[i]; // Xóa từng đối tượng trước khi xóa mảng con trỏ
    }
    delete[] nv; // Xóa mảng con trỏ sau cùng
}
