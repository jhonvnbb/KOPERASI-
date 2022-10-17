#include <iostream>
using namespace std;

 void syarat(){
 	cout<<"BERIKUT SYARAT YANG HARUS DIPENUHI UNTUK MENGAJUKAN PINJAMAN"<<endl;
 } void syarat1(){
 	cout<<"1. MERUPAKAN ANGGOTA KOPERASI"<<endl;
 } void syarat2(){
 	cout<<"2. MENYERAHKAN KTP DAN KK"<<endl;
 } void syarat3(){
 	cout<<"3. MENGISI FORMULIR PENGAJUAN PINJAMAN"<<endl;
 } void syarat4(){
 	cout<<"4. MENYERAHKAN BERKAS SEBAGAI JAMINAN"<<endl;
 	cout<<"contoh : surat tanah"<<endl;
 } void syarat5(){
 	cout<<"5. MENYERAHKAN PROPOSAL TUJUAN PENGGUNAAN DANA"<<endl;
 	cout<<endl;
 } string lanjut(){
 	return"APAKAH SYARAT-NYA SUDAH TERPENUHI (Y/T) ? . . .";
 	cout<<endl;
 }
 
 int main(){
 	awal1:
 	cout<<"_________________________________________"<<endl;
 	cout<<"|SELAMAT DATANG DI KOPERASI HEANG\t|"<<endl;
 	cout<<"|1. PENDAFTARAN ANGGOTA KOPERASI\t|"<<endl;
 	cout<<"|2. MELAKUKAN PEMINJAMAN\t\t|"<<endl;
 	cout<<"|3. EXIT\t\t\t\t|"<<endl;
 	cout<<"_________________________________________"<<endl;
 	akhir1:
 	int k;
 	cin>>k;
 	system("cls");
 	if(k==1){
 		goto awal2;
	 }if(k==2){
	 	goto awal;
	 }if(k==3){
	 	goto awal1;
	 }
 	
 	awal2:
 	struct {

    char nama[50];
	char alamat[100];
	char nomor_hp[120];
	char nik[20];
}
	pendaftar;
	
	cout<<"MASUKKAN NAMA :";
	cin>>pendaftar.nama;
	cout<<"MASUKKAN ALAMAT :";
	cin>>pendaftar.alamat;
	cout<<"MASUKKAN NOMOR HANDPHONE :";
	cin>>pendaftar.nomor_hp;
	cout<<"MASUKKAN NIK :";
	cin>>pendaftar.nik;
	cout<<endl;
	cout<<"DATA YANG TEREKAM";
	cout<<endl;
	cout<<"NAMA \t\t:"<<pendaftar.nama<<endl;
	cout<<"ALAMAT \t\t:"<<pendaftar.alamat<<endl;
	cout<<"NOMOR HP \t:"<<pendaftar.nomor_hp<<endl;
	cout<<"NIK \t\t:"<<pendaftar.nik<<endl;
	char y;
	cout<<"'Y' UNTUK MELANJUTKAN . . ."<<endl;
	cin>>y;
    if(y== 'Y' || y=='y'){
		goto awal1;
	} 
	akhir2:
    system("pause");
    system("cls");
	 
 	awal:
 	cout<<endl;
 	syarat();
    syarat1();
    syarat2();
    syarat3();
    syarat4();
    syarat5();
    char yt;
    cout<<lanjut()<<endl;
    cin>>yt;
    cout<<endl;
    if(yt=='T' || yt=='t'){
    	goto awal1;
	} if(yt== 'Y' || yt=='y'){
		goto akhir;
	} else {
		cout<<" E R R O R"<<endl;
		goto awal;
	}
    akhir:
    system("pause");
    system("cls");
 
	cout<<"-----------------------------------"<<endl;
	cout<<"TUGAS UTP DDP"<<endl;
	cout<<"PEMINJAMAN UANG DI KOPERASI"<<endl;
	cout<<"JHON V NABABAN \t NPM : 2217051087"<<endl;
	cout<<"YUSUF ARIFIN \t NPM : 2217051158"<<endl;
	cout<<"-----------------------------------"<<endl;
    system("pause");
    system("cls");
     
    cout<<"-----------------------------------"<<endl;
    cout<<"DATA PINJAMAN"<<endl;
    int n,i,total,deret,kelipatan_pinjaman,x;
    cout<<"PINJAMAN HARUS BERJUMLAH KELIPATAN \t: Rp.100.000,00"<<endl;
    cout<<"PINJAMAN MINIMAL \t\t\t: Rp.100.000,00"<<endl;
    cout<<"PINJAMAN MAKSIMAL \t\t\t: Rp.50.000.000,00"<<endl;
    cout<<"TOTAL PINJAMAN : "<<endl;
    cin>>x;
    kelipatan_pinjaman=x/100000;
    cout<<"KELIPATAN PINJAMAN : "<<kelipatan_pinjaman<<endl;
    cout<<"MASUKKAN KELIPATAN PINJAMAN : ";
    cin>>deret;
    cout<<"-----------------------------------"<<endl;
    system("pause");
    system("cls");
    
	cout<<"-----------------------------------"<<endl;
    total=0;
    for (i=100000;i<=deret*100000;i=i+100000){
        cout<<i<<" ";
        total=i;
        cout<<endl;
    }
    cout<<"-----------------------------------"<<endl;
	cout<<"JUMLAH PINJAMAN \t\t: "<<"Rp."<<total<<",00"<<endl;
	
	int bunga;
	int total_harga;
	if(total>=100000 && total<1500000){
		cout<<"TOTAL BUNGA \t\t\t: 2%"<<endl;
		bunga=0.02 * total; 
	} else if(total>=1500000 && total<3000000){
		cout<<"TOTAL BUNGA \t\t\t: 4%"<<endl;
		bunga=0.04 * total;
	} else if(total>=3000000 && total<4500000){
		cout<<"TOTAL  BUNGA \t\t\t: 6%"<<endl;
		bunga=0.06 * total;
	} else if(total>=4500000 && total<6000000){
		cout<<"TOTAL BUNGA \t\t\t: 8%"<<endl;
		bunga=0.08 * total;
	} else if(total>=6000000 && total <10000000){
		cout<<"TOTAL BUNGA \t\t\t: 10%"<<endl;
		bunga=0.1 * total;
	} else if(total>=10000000 && total<25000000){
		cout<<"TOTAL BUNGA \t\t\t: 15%"<<endl;
		bunga=0.15 * total;
	} else if(total>=25000000 && total<=50000000){
		cout<<"TOTAL BUNGA \t\t\t: 20%"<<endl;
		bunga=0.2 * total;
	} else {
		cout<<" - - - DILUAR BATAS PINJAMAN - - - "<<endl;
	}
	total_harga=bunga+total;
	cout<<"TOTAL PINJAMAN DENGAN BUNGA \t: "<<"Rp."<<total_harga<<",00"<<endl;
	
}
