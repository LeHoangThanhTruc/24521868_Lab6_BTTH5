#include <bits/stdc++.h>
#include "NV.h"
#include "NVSX.h"
#include "NVVP.h"
#include "QuanLy.h"
using namespace std;

int main()
{
    QuanLy q;
    q.NhapDS();
    q.XuatDS();
    cout << "Tong luong : " << q.TongLuong() << endl;
    q.MinLgSx();
    q.VPMaxTuoi();
    return 0;
}
/* Mẫu Input và Output
Chon loai nhan vien 1-NVVP, 2-NVSX : 1
Nhap ho ten : Tran Cong Cong
Nhap ngay sinh : 12/8/2001
Nhap so ngay lam viec : 5
Ho ten : Le Thi Nhung
Ngay sinh : 3/2/2001
Luong : 4.5e+06
Ho ten : Tran Quoc Tuan
Ngay sinh : 24/12/1999
Luong : 160000
Ho ten : Tran Cong Cong
Ngay sinh : 12/8/2001
Luong : 500000
Tong luong : 5.16e+06
Nhung nhan vien san xuat co luong thap nhat :
Ho ten : Tran Quoc Tuan
Ngay sinh : 24/12/1999
Luong : 160000
Nhap ngay hien tai : 8
Nhap thang hien tai : 6
Nhap nam hien tai : 2025
Tuoi lon nhat la : 24
Danh sach nhan vien van phong co tuoi lon nhat :
Ho ten : Le Thi Nhung
Ngay sinh : 3/2/2001
Luong : 4.5e+06
*/
//Góc giải đáp thắc mắc và ôn lại bài
/*
1. Vì sao lại là NV** nv? Nếu có 3 loại nhân viên thì sao?
- Dấu ** không liên quan đến số loại nhân viên.
- NV** nv có nghĩa là mảng con trỏ đến NV*, tức là mỗi phần tử
trong mảng sẽ là một con trỏ trỏ đến một đối tượng NV cụ thể (NVVP hoặc NVSX).
- Ví dụ :
    NV** nv = new NV*[3]; // Mảng gồm 3 con trỏ NV*
    nv[0] = new NVVP();   // nv[0] trỏ tới NVVP
    nv[1] = new NVSX();   // nv[1] trỏ tới NVSX
    nv[2] = new NVVP();   // nv[2] trỏ tới NVVP
=>Nếu có 3 loại nhân viên, ta vẫn dùng NV** nv, nhưng trong NhapDS(),
ta thêm lựa chọn cho loại nhân viên thứ ba.
2. NV*[n] là gì?
- nv là một mảng gồm n con trỏ, mỗi con trỏ có thể trỏ đến
một đối tượng NVVP hoặc NVSX.
- new NV*[n] không tạo đối tượng, nó chỉ tạo mảng con trỏ,
ta phải tạo từng đối tượng bằng new NVVP() hoặc new NVSX().
3. Phân biệt () và [] khi cấp phát động
- Dùng () khi cấp phát một biến duy nhất.
- Dùng [] khi cấp phát một mảng.
- Ví dụ :
    int* a = new int(10); // Cấp phát động 1 biến int với giá trị 10.
    int* b = new int[5];  // Cấp phát động một mảng gồm 5 phần tử.
4. Vì sao cần vòng lặp delete nv[i] trước delete[] nv?
- nv[i] là con trỏ trỏ đến đối tượng (NVVP, NVSX).
- Nếu chỉ delete[] nv;, ta chỉ xóa mảng con trỏ,
nhưng các đối tượng NVVP/NVSX vẫn còn trong bộ nhớ, gây rò rỉ bộ nhớ (memory leak).
5. dynamic_cast
- dynamic_cast là một toán tử trong C++ dùng để chuyển đổi kiểu dữ liệu
con trỏ (pointer) hoặc tham chiếu (reference) giữa các lớp có
liên quan thông qua kế thừa đa hình.
- dynamic_cast chỉ hoạt động với lớp cha có
ít nhất một phương thức ảo (virtual).
- xem một con trỏ của lớp cha có thực sự trỏ đến một
đối tượng của lớp con.
6. Tìm min, max
- Lấy ví dụ trong bài

  Cách 1 : tìm nhân viên sản xuất có lương thấp nhất và lương cao nhất
bằng cách sắp xếp mảng theo lương rồi lấy phần tử đầu và cuối.
double QuanLy::MinLgSx(){
    vector<NVSX*> dsNVSX; //DS con trỏ nhân viên sản xuất
    //Chuyển đổi con trỏ lớp cha trỏ đến đối tượng con trỏ lớp con
    for (int i = 0; i < n; i++){
        NVSX* nsx = dynamic_cast<NVSX*>(nv[i]);
        if(nsx) dsNVSX.push_back(nsx); //Lọc ra các nhân viên sản xuất
    }
    //Sắp xếp mảng theo chiều tăng dần của lương
    sort(dsNVSX.begin(),dsNVSX.end(),[](NVSX* a, NVSX* b){
         return a->TinhLuong() < b->TinhLuong();
    });
    //Có thể in ra danh sách nhân viên sản xuất có lương tăng dần nếu muốn (trong bài này đề không yêu cầu)
    for(NVSX* nv : dsNVSX) nv->Xuat();
    //In ra những nhân viên sx có lương cao nhất và thấp nhất
    if(!dsNVSX.empty()){
        double minLuong = dsNVSX.front()->TinhLuong();
        double maxLuong = dsNVSX.end()->TinhLuong();
        for(NVSX* nv : dsNVSX){
            if(nv->TinhLuong()==minLuong) nv->Xuat();
        }
        cout << "Danh sach nhan vien san xuat co luong thap nhat " << endl;
        for(NVSX* nv : dsNVSX){
            if(nv->TinhLuong()==minLuong) nv->Xuat();
        }
        cout << "Danh sach nhan vien san xuat co luong cao nhat " << endl;
        for(NVSX* nv : dsNVSX){
            if(nv->TinhLuong()==maxLuong) nv->Xuat();
        }
    }
}

Cách 2 : tìm nhân viên sản xuất có lương thấp nhất bằng cách bé hơn lớn nhất
và lương cao nhất bằng cách lớn hơn bé nhất
//Tìm min luong
double QuanLy::MinLgSx(){
    vector<NVSX*> dsNVSXMinLg; //Chỉ chứa những nhân viên sản xuất có lương thấp nhất
    double minLuong = DBL_MAX;
    for(int i = 0; i < n; i++){
        NVSX* nsx = dynamic_cast<NVSX*>(nv[i]);
        if(nsx){
            if(nsx->tinhLuong()<minLuong){
                minLuong = nsx->TinhLuong();
                dsNVSXMinLg.clear(); //Xóa danh sách cũ vi đã tìm được lương nhỏ hơn
                dsNVSXMinLg.push_back(nsx);
            }
            else if(nsx->tinhLuong()==minLuong){
                dsNVSXMinLg.push_back(nsx);
            }
        }
    }
    //In ra danh sách nvsx có lương thấp nhất
    cout << "Nhung nhan vien sx co luong thap nhat : " << endl;
    for(NVSX* nv : dsNVSXMinLg) nv->Xuat();
}
//Tìm max luong (giả sử đề yêu cầu)
double QuanLy::MaxLgSx(){
    vector<NVSX*> dsNVSXMaxLg; //Chỉ chứa những nhân viên sản xuất có lương thấp nhất
    double maxLuong = DBL_MIN;
    for(int i = 0; i < n; i++){
        NVSX* nsx = dynamic_cast<NVSX*>(nv[i]);
        if(nsx){
            if(nsx->tinhLuong()>maxLuong){
                maxLuong = nsx->TinhLuong();
                dsNVSXMaxLg.clear(); //Xóa danh sách cũ vi đã tìm được lương nhỏ hơn
                dsNVSXMaxLg.push_back(nsx);
            }
            else if(nsx->tinhLuong()==maxLuong){
                dsNVSXMinLg.push_back(nsx);
            }
        }
    }
    //In ra danh sách nvsx có lương cao nhất
    cout << "Nhung nhan vien sx co luong cao nhat : " << endl;
    for(NVSX* nv : dsNVSXMaxLg) nv->Xuat();
}
7. Tính tuổi
- Tính hiệu số năm hiện tại và năm sinh.
- Sau đó kiểm tra xem đến sinh nhật năm nay chưa để trừ đi 1 tuổi nếu chưa tới.
- Trả vể tuổi chính xác.
long long NV::TinhTuoi(long long ngayHT, long long thangHT,long long namHT){
    long long tuoi = namHT - nm;
    if(thangHT < thg || (thangHT==thg && ngayHT<ngy)){
        tuoi--;//Chưa đến sinh nhật năm nay
    }
    return tuoi;
}
8. osstringstream oss,oss.str(),setfill,setw
string NV::Hop(long long &ngy,long long &thg,long long &nm){
    ostringstream oss;
    oss << setfill('0') << setw(2) << ngy << "/" << setfill('0') << setw(2) << thg  <<"/"<< setfill('0') << setw(4) << nm;
    return oss.str();
}
*/
