#include <iostream>
#include <string>
using namespace std;

#include "ibu.h"
#include "anak.h"

int main()
{
	ibu* varIbu = new ibu("nabil");
	ibu* varibu2 = new ibu("nabil");
	anak* varAnak1 = new anak("nabil");
	anak* varAnak2 = new anak("nabil");
	anak* varAnak3 = new anak("nabil");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak1);
	varibu2->tambahAnak(varAnak1);
	varibu2->tambahAnak(varAnak1);
	



}