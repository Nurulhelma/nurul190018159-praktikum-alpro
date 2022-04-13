#include <iostream>
#include <conio.h>

class Hitung {
friend iostream & operator<<(ostream&, const Hitung&);
friend iostream & operator>>(istream&, Hitung&);
 public:

Hitung();
void hitung_jumlahnya(){ jumlah = (a + b + c); }
private:
int a,b,c;
int jumlah;
};

Hitung::Hitung() {
cout << "Program menghitung jumlah 3 integer\n";
cout << "Selamat berkarya\n";
}
	stream& operator>>(istream& in, Hitung& masukan) {
cout << "Masukkan nilai a : ";
in >> masukan.a;
cout << "Masukkan nilai b : ";
in >> masukan.b;
cout << "Masukkan nilai c : ";
in >> masukan.c;
return in;
}

main() {
Hitung X;
cin >> X;
X.hitung_jumlahnya();
cout << X;
getch();
return 0;
}
