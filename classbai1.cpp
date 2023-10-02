#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

class Phanso{
    private:
        int a, b;
    public:
        void rutgon();
        friend istream& operator >> (istream&, Phanso&);
        friend ostream& operator << (ostream&, Phanso);
};

istream& operator >> (istream& in, Phanso &a){
    in >> a.a >> a.b;
    return in;
}

ostream& operator << (ostream& out, Phanso a){
    out << a.a << "/" << a.b;
}

void Phanso:: rutgon(){
    int g = gcd(a,b);
    a /= g;
    b /= g;
}


int main(){
    Phanso a;
    cin >> a;
    a.rutgon();
    cout << a << endl;


    return 0;
}