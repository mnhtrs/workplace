#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

class PhanSo{
    private:
    int mau, tu;
    void normalize() {
        int msc = gcd(mau, tu);
        mau /= msc;
        tu /= msc;
    }
    public:
    PhanSo(): mau(1), tu(0) {}
    PhanSo(int t, int m): tu(t), mau(m == 0 ? 1 : m) {
        normalize();
    }
    int getTu() const {
        return tu;
    }
    int getMau() const {
        return mau;
    }
    int set(int t, int m) {
        tu = t;
        mau = m == 0 ? 1 : m;
        normalize();
    }
    friend istream& operator>> (istream& nhap, PhanSo& ps) {
        nhap >> ps.tu >> ps.mau;
        if(ps.mau == 0) ps.mau = 1;
        ps.normalize();
        return nhap;
    }
    friend ostream& operator<< (ostream& xuat, PhanSo& ps) {
        xuat << ps.tu << "/" << ps.mau;
        ps.normalize();
        return xuat;
    }
    PhanSo& operator = (const PhanSo& ps){
        if(this != &ps) {
            mau = ps.mau;
            tu = ps.tu;
        }
        return *this;
    }
};
int main(){
    return 0;
}