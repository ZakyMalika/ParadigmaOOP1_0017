#ifndef JANTUNG_H
#define	JANTUNG_H
using namespace std;

class jantung {
public:
	jantung() //konstruktor
	{
		cout << "jantung dihidupkan\n";

	}
	~jantung()//DEDUKTOR
	{ 
		cout << "jantung dimatikan\n";
	}
};

#endif // !JANTUNG_H
