#include <iostream>
#include <conio.h>
using namespace std;
	int jumlah;
int main(){
	char nama [50];
	char nim [9];
	cout<<"\t\t\tBIODATA\t\t"<<endl;
	cout<<"Nama : ";
	gets(nama);
	cout<<"NIM : ";
	gets(nim);
	cout<<"\n\t\tSoal Pilihan Ganda dengan Tema : Covid 19\t\t"<<endl;
	cout<<"===========================Soal 1 ==========================="<<endl;
   	char jawabansoal1[4]={'a','b','c','d'};
   	int poin1;
	cout<<"Covid-19 pertama ditemukan di kota.."<<endl;
	cout<<"a. Wuhan"<<endl;
	cout<<"b. Jakarta"<<endl;
	cout<<"c. Paris"<<endl;
	cout<<"d. New York"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal1;
	if(jawabansoal1[0]=='a'){
   	cout<<"===Benar==="<<endl;
   	poin1=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin1=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
	cout<<"===========================Soal 2 ==========================="<<endl;
   	char jawabansoal2[4]={'a','b','c','d'};
   	int poin2;
	cout<<"Agar terhindar dari covid 19,hal yang harus kita lakukan adalah kecuali.."<<endl;
	cout<<"a. cuci tangan"<<endl;
	cout<<"b. Jaga kebersihan"<<endl;
	cout<<"c. Jaga jarak"<<endl;
	cout<<"d. Berkerumun"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal2;
	if(jawabansoal2[0]=='d'){
   	cout<<"===Benar==="<<endl;
   	poin2=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin2=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 3 ==========================="<<endl;
   	char jawabansoal3[4]={'a','b','c','d'};
   	int poin3;
	cout<<"Apa itu virus ?"<<endl;
	cout<<"a. Bakteri yang sangat kecil"<<endl;
	cout<<"b. Makanan"<<endl;
	cout<<"c. Minuman"<<endl;
	cout<<"d. Barang"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal3;
	if(jawabansoal3[0]=='a'){
   	cout<<"===Benar==="<<endl;
   	poin3=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin3=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 4 ==========================="<<endl;
   	char jawabansoal4[4]={'a','b','c','d'};
   	int poin4;
	cout<<"Apa yang harus kita gunakan agar terhindar dari covid 19 ?"<<endl;
	cout<<"a. Masker"<<endl;
	cout<<"b. Make up"<<endl;
	cout<<"c. Skin care"<<endl;
	cout<<"d. Pakaian"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal4;
	if(jawabansoal4[0]=='a'){
   	cout<<"===Benar==="<<endl;
   	poin4=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin4=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 5 ==========================="<<endl;
   	char jawabansoal5[4]={'a','b','c','d'};
   	int poin5;
	cout<<"Bagaimana corona virus masuk ke tubuh kita ?"<<endl;
	cout<<"a. Lewat hidung"<<endl;
	cout<<"b. Lewat kaki"<<endl;
	cout<<"c. Lewat kulit"<<endl;
	cout<<"d. Lewat rambut"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal5;
	if(jawabansoal5[0]=='a'){
   	cout<<"===Benar==="<<endl;
   	poin5=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin5=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 6 ==========================="<<endl;
   	char jawabansoal6[4]={'a','b','c','d'};
   	int poin6;
	cout<<"Berikut adalah gejala covid 19 kecuali..."<<endl;
	cout<<"a. Batuk"<<endl;
	cout<<"b. Pilek"<<endl;
	cout<<"c. Demam"<<endl;
	cout<<"d. Bahagia"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal6;
	if(jawabansoal6[0]=='d'){
   	cout<<"===Benar==="<<endl;
   	poin6=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin6=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 7 ==========================="<<endl;
   	char jawabansoal7[4]={'a','b','c','d'};
   	int poin7;
	cout<<"Berapa lama masa inkubasi virus corona ?"<<endl;
	cout<<"a. 2-14 hari"<<endl;
	cout<<"b. 1-3 hari"<<endl;
	cout<<"c. 5-7 hari"<<endl;
	cout<<"d. 1 minggu"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal7;
	if(jawabansoal7[0]=='a'){
   	cout<<"===Benar==="<<endl;
   	poin7=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin7=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 8 ==========================="<<endl;
   	char jawabansoal8[4]={'a','b','c','d'};
   	int poin8;
	cout<<"Covid-19 rentan terdahap..."<<endl;
	cout<<"a. Orang yang memiliki sistem imun lemah"<<endl;
	cout<<"b. Orang yang selalu menjaga kesehatan"<<endl;
	cout<<"c. Orang yang sehat"<<endl;
	cout<<"d. orang yang sudah meniggal"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal8;
	if(jawabansoal8[0]=='a'){
   	cout<<"===Benar==="<<endl;
   	poin8=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin8=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 9 ==========================="<<endl;
   	char jawabansoal9[4]={'a','b','c','d'};
   	int poin9;
	cout<<"Apa yang harus kita lakukan jika kita memiliki gejala covid 19 ?"<<endl;
	cout<<"a. Keluyuran"<<endl;
	cout<<"b. Isoliasi mandiri"<<endl;
	cout<<"c. Menyentuh orang lain"<<endl;
	cout<<"d. Ketakutan"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal9;
	if(jawabansoal9[0]=='b'){
   	cout<<"===Benar==="<<endl;
   	poin9=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin9=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
		cout<<"===========================Soal 10 ==========================="<<endl;
   	char jawabansoal10[4]={'a','b','c','d'};
   	int poin10;
	cout<<"Orang yang memiliki gajala covid 19 dinamakan ?"<<endl;
	cout<<"a. ODP"<<endl;
	cout<<"b. orang sakit"<<endl;
	cout<<"c. PDP"<<endl;
	cout<<"d. Positive covid 19"<<endl;
	cout<<"\nJawab : ";
	cin>>jawabansoal10;
	if(jawabansoal10[0]=='c'){
   	cout<<"===Benar==="<<endl;
   	poin10=10;
   	cout<<"Poin anda 10"<<endl;
   }
   	else{
   		cout<<"===Salah==="<<endl;
   		poin10=0;
   		cout<<"Poin anda 0"<<endl;
	   }
	getch();
	jumlah=poin1+poin2+poin3+poin4+poin5+poin6+poin7+poin8+poin9+poin10;
	cout<<"===========================SCORE ==========================="<<endl;
	cout<<"Score anda adalah "<<jumlah<<endl;
}
