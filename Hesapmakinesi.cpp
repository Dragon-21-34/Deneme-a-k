#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;

int main(){ 
  //  ba:
	da:
	setlocale (LC_ALL,"Turkish"); 
	int sayi1,sayi2,sonuc;
	char islem;
    cout << "\n\n\nHesap makinesi:\n\nA)toplama +\n\nB)çýkarma -\n\nC)çarpma *\n\nD)bölme /";
	cout << "\n\nilk sayýyý giriniz ardýn dan iþlemiminizi seçip ikinci sayýi giriniz: ";
    
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
