#include <iostream>
using namespace std;

int main (){
string nama[10];
for( int i=0; i < 10; i++ ){
	cout << " masukan nama : ";
	cin >> nama[i];
}
for( int x=0; x < 10; x++ ) {
cout << nama[x] << " - " << nama[x+1] << endl;
}	
return 0;
}