#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
using namespace std;
void film(){
    system("cls");
    	cout<<"================================Pilihan Film============================="<<endl;
   	cout<<"Pilihan 1"<<endl;
   	cout<<"\tGendre = Animasi"<<endl;
    cout<<"\tJudul  = Epic"<<endl;
    cout<<"\tJam Tayang = 10.00"<<endl;
    cout<<"\tHarga Tiket = Rp. 35.000"<<endl;
    cout<<"\tStudio = 1"<<endl;
    cout<<"Pilihan 2"<<endl;
    cout<<"\tGendre = Romance"<<endl;
    cout<<"\tJudul  = Five Feet Apart"<<endl;
    cout<<"\tJam Tayang = 12.30"<<endl;
    cout<<"\tHarga Tiket = Rp.35.000"<<endl;
    cout<<"\tStudio = 2"<<endl;
    cout<<"Pilihan 3"<<endl;
    cout<<"\tGendre = Comedy"<<endl;
    cout<<"\tJudul  = Bad boys 2"<<endl;
    cout<<"\tJam Tayang = 15.00"<<endl;
    cout<<"\tHarga Tiket = Rp.35.000"<<endl;
    cout<<"\tStudio = 3"<<endl;
    cout<<"Pilihan 4"<<endl;
    cout<<"\tGendre = Horror"<<endl;
    cout<<"\tJudul  = Silent Hill"<<endl;
    cout<<"\tJam Tayang = 17.00"<<endl;
    cout<<"\tHarga Tiket = Rp.35.000"<<endl;
    cout<<"\tStudio = 4"<<endl;
    cout<<"Pilihan 5"<<endl;
    cout<<"\tGendre = Advanture"<<endl;
    cout<<"\tJudul  = Jumanji"<<endl;
    cout<<"\tJam Tayang = 20.00"<<endl;
    cout<<"\tHarga Tiket = Rp.35.000"<<endl;
     cout<<"\tStudio = 5"<<endl;
}
    	void header(){
	system("cls");
	 	cout << "           PEMESANAN TIKET BIOSKOP     "<<endl;
        cout << "=============================================="<<endl;
        cout << "" <<endl;
        cout << "=================REGISTRASI================"<<endl;
        cout << ""<<endl;}
        int main()
{
    char nama[20];
    char nim[20];
    char user[20];
    char pass[20];
    char judulfilm[20][20];
    char kodefilm[20];
    char jenisfilm[10][10];
    int jumlahbeli[10];
    int banyaktiket[20];
    char kursi[20][20];
    char waktu[10][10];
    char durasi[10][10];
    char studio[10][10];
    int harga[20];
    int jumlahharga[20];
    char y, nowplaying;
    int diskon, hargadiskon, banyakpembelian, totalbeli, saldo, cash;;
		
		header();
        cout << ">>>>>>SILAHKAN REGISTRASI<<<<<<"<<endl;
        cout << ""<<endl;
        cout << "NAMA : ";
        cin >> nama;
        cout << "NIM : ";
        cin >> nim;
        cout << "Depositkan saldo 	: Rp.";
        cin >> saldo;
        cout << ""<<endl;
        system("CLS");
        int a=0;
        
		do {
		header();	
        cout << "Silahkan LOGIN" << endl;
        cout << "Nama : "; cin >> user;
        cout << "NIM : "; cin >> pass;
        if (!(strcmp(nama,user) == 0 && strcmp(nim,pass) == 0)) {
            cout << "Maaf login gagal silahkan ulangi kembali "<<2-a<<endl<<endl;
			a=a+1;}
		else {
            system("CLS");
            goto atas;}
        }while (a<3);
        cout<<endl;
		cout << "Maaf, Akun anda kami Blokir !!! "<<endl;
        goto bawah;
         
    atas:   
    film();    
   	cout<<"Banyak Pembelian Film     : "; cin>>banyakpembelian;
	jumlahbeli[banyakpembelian]=0;

	for(int i=1;i<=banyakpembelian;i++)
{
	film();
	cout<<"Masukan Kode Film [1|2|3|4|5]    : ";cin>>kodefilm[i];
    cout<<"Jumlah Tiket = "; cin>>banyaktiket[i];     
    system ("cls");
   cout<<"                   PILIHAN TEMPAT DUDUK              "<<endl;
	cout<<"A1 SAMPAI A20"<<endl;
	cout<<"B1 SAMPAI B20"<<endl;
	cout<<"C1 SAMPAI C20"<<endl;
	cout<<"D1 SAMPAI D20"<<endl;
	cout<<"E1 SAMPAI E20"<<endl;
	cout<<"F1 SAMPAI F20"<<endl;
	cout<<"G1 SAMPAI G20"<<endl;
	cout<<"H1 SAMPAI H20"<<endl;
	cout<<"I1 SAMPAI I20"<<endl;
	cout<<"J1 SAMPAI J20"<<endl;
      cout<<"Pilih Kursi="<<endl;
     for(int k=0;k<banyaktiket[i];k++){
        cout<<"Kursi "<<k+1<<" = ";
        cin>> kursi[k];}
	if (kodefilm[i]=='1'||kodefilm[i]=='1'){
            strcpy(judulfilm[i],"Epic");
            strcpy(jenisfilm[i],"Animasi");
            strcpy(waktu[i],"10:00");
           	strcpy(studio[i],"1");
            harga[i]=35000;}
    else if (kodefilm[i]=='2'||kodefilm[i]=='2'){
            strcpy(judulfilm[i],"Five Feet Apart");
            strcpy(jenisfilm[i],"Romance");
            strcpy(waktu[i],"12:30 ");
           	strcpy(studio[i],"2");
            harga[i]=35000;}
    else if (kodefilm[i]=='3'||kodefilm[i]=='3'){	
            strcpy(judulfilm[i],"Bad Boys 2");
            strcpy(jenisfilm[i],"Comedy");
            strcpy(waktu[i],"15:00");
           	strcpy(studio[i],"3");
            harga[i]=35000;}  
    else if (kodefilm[i]=='4'||kodefilm[i]=='4'){	
            strcpy(judulfilm[i],"Silent Hill");
            strcpy(jenisfilm[i],"Horror");
            strcpy(waktu[i],"17.00");
           	strcpy(studio[i],"4");
            harga[i]=35000;}   
    else if (kodefilm[i]=='5'||kodefilm[i]=='5'){	
            strcpy(judulfilm[i],"Jumanji");
            strcpy(jenisfilm[i],"Adventure");
            strcpy(waktu[i],"21:00");
           	strcpy(studio[i],"5");
            harga[i]=40000;}
    else	{
 			strcpy(judulfilm[i],"-");
 			strcpy(jenisfilm[i],"-");
            strcpy(waktu[i],"-");
           	strcpy(studio[i],"-");
            harga[i]=0;}    
    jumlahharga[i]=banyaktiket[i]*harga[i];
	jumlahbeli[banyakpembelian]=jumlahbeli[banyakpembelian]+jumlahharga[i];
}
 	totalbeli=jumlahbeli[banyakpembelian];
 	diskon=totalbeli*0.09;
 	
 	system("cls");
 	 cout<<"                                TIKET BIOSKOP ANDA                               "<<endl;
 	 cout <<"Atas Nama	: "<<nama<<endl;
    cout <<"NIM	: "<<nim<<endl;
    cout <<"Jumlah Saldo		: Rp."<<saldo<<endl;
	for(int i=1;i<=banyakpembelian;i++)
	{
	cout<<"============================================="<<endl;
	cout<<"No.Kode				: "<<kodefilm[i]<<endl;
	cout<<"Nama Film			: "<<judulfilm[i]<<endl;
	cout<<"Jenis Film 			: "<<jenisfilm[i]<<endl;
	cout<<"Waktu Film 			: "<<waktu[i]<<endl;
	cout<<"Studio 				: "<<studio[i]<<endl;
	cout<<"Harga				: "<<harga[i]<<endl;
	cout<<"Jumlah Tiket			: "<<banyaktiket[i]<<endl;
	cout<<"Jumlah Harga			: "<<jumlahharga[i]<<endl;
	cout<<"============================================="<<endl<<endl;
	}
	cout<<"___"<<endl;
	cout<<"Total Bayar			= "<<totalbeli<<endl<<endl;
	for(int i=1;i<=banyakpembelian;i++){
	if (banyaktiket[i]>1){
	cout<<"Pembelian minimal 2 Tiket Akan Mendapatkan Diskon 9% !!!"<<endl;	
	cout<<"Harga Diskon 			= "<<totalbeli-diskon<<endl;
	cout<<"==============================================="<<endl<<endl;}}    
  	getch();

	cout<<"Konfirmasi Pembelian ? (Y/T) : ";cin>>y;
	if (y=='y' || y=='Y'){cout<< "Silakan Lakukan Pembayaran"<<endl<<endl;} 				
	else if (y=='t' || y=='T'){cout<<"Pembelian dibatalkan"<<endl;
	goto ulang;
	cout<<endl;} 			
	else {cout<< "Input yang Anda Masukkan Salah"<<endl;
	goto bawah;
	cout<<endl;} 
    
    cout<<">>>>>> Proses Pembayaran <<<<<<"<<endl;
    cout<<"Pembayaran Via Saldo atau Cash? (S/C) : "; cin>>y;
	cout<<endl;
    if (y=='s' || y=='S'){
    	cout<<">>> Pembayaran Via Saldo <<<"<<endl;
    	for(int i=1;i<=banyakpembelian;i++){
		if (banyaktiket[i]>1){
		cout<< "Jumlah saldo anda : Rp."<<saldo<<endl;}
			if (saldo>=hargadiskon){
			cout<< "Sisa saldo anda : Rp."<<saldo-(totalbeli-diskon)<<endl;}
			else if (saldo<hargadiskon){
			cout<<"Mohon maaf saldo anda kurang";}
		else if (banyaktiket[i]=1){
		cout<< "Jumlah saldo anda : Rp."<<saldo<<endl;}
			if (saldo>=totalbeli){
			cout<< "Sisa saldo anda : Rp."<<saldo-(totalbeli-diskon)<<endl;}
			else if (saldo<totalbeli){
			cout<<"Mohon maaf saldo anda kurang"<<endl;}}}
						
	else if (y=='c' || y=='C'){
		cout<<">>> Pembayaran Secara Cash <<<"<<endl;
		for(int i=1;i<=banyakpembelian;i++){
		if (banyaktiket[i]>1){
		cout<< "Masukan uang anda	: Rp.";cin>>cash;
		cout<<endl;
			if (cash>=hargadiskon){
			cout<< "Kembalian uang anda	: Rp."<<cash-(totalbeli-diskon)<<endl;}
			else if (cash<hargadiskon){
			cout<<"Mohon maaf uang anda kurang";}}
		else if (banyaktiket[i]=1){
		cout<< "Masukan uang anda	: Rp.";cin>>cash;
		cout<<endl;
			if (cash>=hargadiskon){ 
			cout<< "Kembalian uang anda	: Rp."<<cash-(totalbeli-diskon)<<endl;}
			else if (cash<hargadiskon){
			cout<<"Mohon maaf uang anda kurang"<<endl;}}}}
					
	else {cout<< "Input yang Anda Masukkan Salah"<<endl;
	cout<<endl;}
    cout<<endl;
    
    getch();
	ulang:	
    cout<<"Apakah Anda ingin memilih lagi (Y/T) : ";cin>>y;
	cout<<endl;
	if (y=='Y'  ||  y=='y'){goto atas;}
	if (y!='Y'  ||  y!='y' ){goto bawah;}

	bawah:
	cout<<"====================================================="<<endl;
	cout<<"                    Terima Kasih                     "<<endl;
	cout<<"====================================================="<<endl;
	getch();
return 0;
}
