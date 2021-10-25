#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
// bu bir hesabp makinesi örneği dir
int main(){ 
  //  ba:
	da:
	setlocale (LC_ALL,"Turkish"); 
	int sayi1,sayi2,sonuc;
	char islem;
    cout << "\n\n\nHesap makinesi:\n\nA)toplama +\n\nB)��karma -\n\nC)�arpma *\n\nD)b�lme /";
	cout << "\n\nilk say�y� giriniz ard�n dan i�lemiminizi se�ip ikinci say�i giriniz: ";
    
	cin >> sayi1;
    cin >> islem;
    cin >> sayi2;
    switch(islem){
    	
    	case 'A':
    	case 'a':
		case '+':
		case '1':
		{ 
		    sonuc=sayi1+sayi2;
		    cout<<"cevap="<<sonuc;
		    break;
		}
		case 'B':
		case 'b':
		case '-':
		case '2':	
		{
		    sonuc=sayi1-sayi2;
		    cout<<"cevap="<<sonuc;
		     break;
		}	
		case 'C':
		case 'c':
		case '*':
		case '3':	
		{
			sonuc=sayi1*sayi2;
			cout<<"cevap="<<sonuc;
			break;
		}
		case 'D':
		case 'd':	
		case '/':
		case '4':	
		{
		    sonuc=sayi1/sayi2;
		    cout<<"cevap="<<sonuc;
			break;
		}	
		default :
		{
			cout<<"\nHATA! HATA! HATA!\n";
		    goto da;
		}
	}
//	goto ba;
	getch();
	return 0;	
	} 
