#include <iostream.h>
#include <conio.h>

int main () {
char kodeproduk [5], *buatan, *processor ;

cout<<"Masukkan Kode produk: "; cin>>kodeproduk ;
switch(kodeproduk[0])
{
case 'A':
buatan="amerika";
break;
case 'J' :
buatan="jepang";
break;
case 'k':
buatan="korea";
break;
case 'C' :
buatan="china";
break ;
case 'G'  :
buatan="german";
break;
case'T' :
buatan="taiwan";
break;
default:
buatan="kode tidak di kenal";
break;
}

if(kodeproduk[1]=='3')
{processor="intel486mhz";}
else if  (kodeproduk[1]=='4')
{processor="intel 486mhz";}
else if  (kodeproduk[1]=='5')
{processor="intel pentium";}
else
{processor="kode tidak di kenal";}
cout<<"buatan:"<<buatan<<endl;
cout<<"processor:"<<processor<<endl;
cout<<"kapasitas hardsisk: "<<kodeproduk[2]<<kodeproduk[3]<<kodeproduk[4]<<"gigabyte"<<endl;

getch();}

