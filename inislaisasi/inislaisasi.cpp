#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pid, string pnama, float pnilai) :id(pid), nama(pnama), nilai(pnilai)
		// definisi
	{}
		~mahasiswa() {
			cout << "ID	= " << id << endl;
			cout << "Nama	= " << nama << endl;
			cout << "Nilai	= " << nilai << endl;
		}
};

int main()
{
	mahasiswa mhs(12, "Zaky Malika", 100);

	return 0;
}