#include <iostream>
 
using namespace std;
void faktorial(int n){
	long long hasil=1;
     if((n==0)||(n==1)){
                        hasil = 1;
                        }
     else {
		 for (int i=1; i <= n; i++){
			hasil = hasil*i;
		 }
          
          }
		cout<<"Hasil:" << hasil;
     }
	 
int main(int argc, char *argv[])
{
    int n;
    cout<<"Masukkan angka yang akan difaktorialkan:";
    cin>>n;
    faktorial(n);
    
    return 0;
}