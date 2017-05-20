#include <iostream>
using namespace std;

int main (){
	int x [8], cari;
	bool ketemu;
	for (int i = 0; i<8; i++)
	{
		cout << "Masukan data:";
		cin >> x [i];
}
cout << "Masukan data yang dicari: ";
cin >> cari;
for (int i = 0; i<8; i++)
{
	if (x[i] == cari)
	{
		ketemu = true;
		break;
	} else {
		ketemu = false;
	}
}
if (ketemu == true){
	cout << "Data di temukan" << endl;
} else {
	cout << "Data tidak ditemukan" << endl;
}
return 0;

}
