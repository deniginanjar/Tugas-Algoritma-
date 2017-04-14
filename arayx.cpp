#include <iostream>
using namespace std;

int main (){
	int x;
	cout << " masukan index : ";
	cin >> x;
string nama[x];
for( int i=0; i < x; i++ ){
	cout << " masukan nama : ";
	cin >> nama[i];
}
for( int z=0; z < x; z++ ) {
cout << nama[z] << " - " << nama[z+1] << endl;

}	
return 0;
}