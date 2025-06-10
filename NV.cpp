#include "NV.h"
#include <bits/stdc++.h>
using namespace std;
NV::NV(string hT, string nS,double lg, long long ngy,long long thg,long long nm):
        hT(hT),nS(nS),lg(lg),ngy(ngy),thg(thg),nm(nm){}
void NV::Nhap(){
        cout << "Nhap ho ten : ";
        getline(cin>>ws, hT);
        cout << "Nhap ngay sinh : ";
        getline(cin>>ws,nS);
        Tach(nS,ngy,thg,nm);
}
void NV::Tach(string& nS,long long &ngy,long long &thg,long long &nm){
    stringstream ss(nS);
    string dmy;
    int i = 0;
    while(getline(ss,dmy,'/')&& i < 3){
        if (i == 0) ngy = stoll(dmy);
        else if (i == 1) thg = stoll(dmy);
        else nm = stoll(dmy);
        i++;
    }
}
void NV::Xuat(){
    cout << "Ho ten : " << hT << endl;
    cout << "Ngay sinh : " << nS << endl;
    //cout << Hop(ngy,thg,nm) << endl;
}
long long NV::TinhTuoi(long long ngayHT, long long thangHT,long long namHT){
    long long tuoi = namHT - nm;
    if(thangHT < thg || (thangHT==thg && ngayHT<ngy)){
        tuoi--;//Chưa đến sinh nhật năm nay
    }
    return tuoi;
}
NV::~NV(){}
/*string NV::Hop(long long &ngy,long long &thg,long long &nm){
    ostringstream oss;
    oss << setfill('0') << setw(2) << ngy << "/" << setfill('0') << setw(2) << thg  <<"/"<< setfill('0') << setw(4) << nm;
    return oss.str();
}
*/
