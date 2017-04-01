#include <iostream>
 
using namespace std;
long faktorial(int n){
     if((n==0)||(n==1)){
 return 1;
 }
 else {
	return n*faktorial(n-1);
    }
 }
int main(int argc, char *argv[])
{
    int n;
    cout<<"Masukkan angka yang akan difaktorialkan:";
    cin>>n;
    cout<<"Hasil:"<<faktorial(n);
    
    return 0;
}