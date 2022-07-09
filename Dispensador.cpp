#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	int opc,nit,billete1,billete5,billete10,billete20,billete50,saldo,jugo,compra,gaseosa,galleta,golosina,totalcom=0,cambio=0;
	int jugo1=0,jugo2=0,jugo3=0,gas1=0,gas2=0,gas3=0,galleta1=0,galleta2=0,galleta3=0,golosina1=0,golosina2=0,golosina3=0;
	int manzana=5,uva=6,melo=7;
	int pepsi=8,coca=10,rica=15;
	int negrito=18,pinguino=20,oreo=15;
	int doritos=20,chetos=15,tortrix=10;
	char nombre[40],direccion[40];
	do
{
	cout<<"\n"<<endl;
	cout<<"\t\t\t\tBIENVENIDO A TIENDA KOOPA TROOPA"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\t\t\t\t1)CUENTA"<<endl;
	cout<<"\t\t\t\t2)COMPRAS"<<endl;
	cout<<"\t\t\t\t3)FACTURA"<<endl;
	cout<<"\t\t\t\t4)SALIR"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\t\t\t\tSELECCIONE OPCION"<<endl;cin>>opc;
	system("cls");
	switch(opc)
{

	case 1: //SALDO
	cout<<"\t\t\t\tNO PUEDE INGRESAR MAS DE Q.100.00 DE SALDO";
	cout<<"\n\n\n\n\n\t\t\t\tCuantos Billetes de Q.1.00 desea ingresar :"; 
	cin>>billete1;
	cout<<"\n\t\t\t\tCuantos Billetes de Q.5.00 desea ingresar :"; 
	cin>>billete5;
	cout<<"\n\t\t\t\tCuantos Billetes de Q.10.00 desea ingresar :"; 
	cin>>billete10;
	cout<<"\n\t\t\t\tCuantos Billetes de Q.20.00 desea ingresar :"; 
	cin>>billete20;
	cout<<"\n\t\t\t\tCuantos Billetes de Q.50.00 desea ingresar :"; 
	cin>>billete50;
	saldo=billete1+billete5*5+billete10*10+billete20*20+billete50*50;
	if(saldo<=100) 
	{
	system("cls");
	cout<<"\\t\t\t\tTU SALDO ACTUAL ES:"<<saldo<<endl;
	system("pause");
	system("cls");
	break;}
	else;{
	system("cls");
	cout<<"\t\t\t\t\tTU SALDO HA EXEDIDO LOS Q100.00"<<endl;
	cout<<"PORFAVOR INGRESA UNA CANTIDAD IGUAL O MENOR DE Q.100.00"<<endl;
	system("pause");
	system("cls");
	break;
}
	
	
	case 2://COMPRAS
	cout<<"ELIJA ALGUN PRODUCTO QUE DESEE COMPRAR"<<endl;
	cout<<"1-JUGOS"<<endl;
	cout<<"2-GASEOSAS"<<endl;
	cout<<"3-GALLETAS"<<endl;
	cout<<"4-GOLOSINAS"<<endl;
	cin>>compra;
	system("cls");
	switch(compra)
	{
	case 1://COMPRA FRESCO
	cout<<"1. JUGO KERNS             ------ Q.5.00\n";
	cout<<"2. JUGO DE LA GRANJA      ------ Q.6.00\n";
	cout<<"3. JUGO CIFRUT            ------ Q.7.00\n";
	cin>>jugo;
	system("cls");
	switch(jugo)
	{
	case 1:
	cout<<"\tHA COMPRADO JUGO:"<<endl;
	cout<<"JUGO KERNS   Q"	<<manzana<<endl;
	system("pause");
	system("cls");
	break;
	case 2:
	cout<<"\tHA COMPRADO JUGO:"<<endl;
	cout<<"JUGO DE LA GRANJA Q"<<uva<<endl;	
	system("pause");
	system("cls");
	break;	
	case 3:
	cout<<"\tHA COMPRADO JUGO:"<<endl;
	cout<<"JUGO CIFRUT Q"<<melo<<endl;	
	system("pause");
	system("cls");	
	break;	
	default:
	cout<<"LA OPCION QUE ELIGIO NO ESTA EN LOS PRODUCTOS"<<endl;
	system("pause");
	system("cls");	
	break;
	}
	break;
	case 2://COMPRA GASEOSA
	cout<<"\tSELECCIONE SU GASEOSA"<<endl;
	cout<<"1. PEPSI-COLA LITE                 ------ Q.8.00\n";
	cout<<"2. COCA COLA                       ------ Q.10.00\n";
	cout<<"3. GRAPETE                         ------ Q.15.00\n";	
	cin>>gaseosa;
	system("cls");	
	switch(gaseosa)
	{
	case 1:
	cout<<"\tHA COMPRADO GASEOSA:"<<endl;
	cout<<"PEPSI-COLA LITE   Q"	<<pepsi<<endl;
	system("pause");
	system("cls");
	break;
	case 2:
	cout<<"\tHA COMPRADO GASEOSA:"<<endl;
	cout<<"COCA COLA Q"<<coca<<endl;	
	system("pause");
	system("cls");
	break;	
	case 3:
	cout<<"\tHA COMPRADO GASEOSA:"<<endl;
	cout<<"GRAPETE Q"<<rica<<endl;	
	system("pause");
	system("cls");
	break;
	default:
	cout<<"LA OPCION QUE ELIGIO NO ESTA EN LOS PRODUCTOS"<<endl;
	system("pause");
	system("cls");		
	break;	
		
	}
	break;
	case 3://COMPRA DE GALLETA
	cout<<"\tSELECCIONE SU GALLETA"<<endl;
	cout<<"1. GALLETA PINGUINO                     ------ Q.18.00\n";
	cout<<"2. GALLETA OREO GRANDE                  ------ Q.20.00\n";
	cout<<"3. GALLETA MARINELA                     ------ Q.15.00\n";	
	cin>>galleta;
	system("cls");	
	switch(galleta)
	{
	case 1:
	cout<<"\tHA COMPRADO GALLETA:"<<endl;
	cout<<"GALLETA PINGUINO  Q"	<<negrito<<endl;
	system("pause");
	system("cls");
	break;
	case 2:
	cout<<"\tHA COMPRADO GALLETA:"<<endl;
	cout<<"GALLETA OREO GRANDE Q"<<pinguino<<endl;	
	system("pause");
	system("cls");
	break;	
	case 3:
	cout<<"\tHA COMPRADO GALLETA:"<<endl;
	cout<<"GALLETA MARINELA  Q"<<oreo<<endl;	
	system("pause");
	system("cls");
	break;
	default:
	cout<<"LA OPCION QUE ELIGIO NO ESTA EN LOS PRODUCTOS"<<endl;
	system("pause");
	system("cls");		
	break;	
}
	break;
	case 4://COMPRA DE GOLOSINAS
	cout<<"\tSELECCIONE UNA  GOLOSINA"<<endl;
	cout<<"1. DORITOS ROJOS                         ------ Q.20.00\n";
	cout<<"2. TORTRIX CHILTEPE                      ------ Q.15.00\n";
	cout<<"3. SNICKER                               ------ Q.10.00\n";	
	cin>>golosina;
	system("cls");	
	switch(golosina)
	{
	case 1:
	cout<<"\tHA COMPRADO GOLOSINA:"<<endl;
	cout<<"DORITOS ROJOS   Q"	<<doritos<<endl;
	system("pause");
	system("cls");
	break;
	case 2:
	cout<<"\tHA COMPRADO GOLOSINA:"<<endl;
	cout<<"TORTRIX CHILTEPE Q"<<chetos<<endl;	
	system("pause");
	system("cls");
	break;	
	case 3:
	cout<<"\tHA COMPRADO GOLOSINA:"<<endl;
	cout<<"SNICKER Q"<<tortrix<<endl;	
	system("pause");
	system("cls");
	break;
	default:
	cout<<"LA OPCION QUE ELIGIO NO ESTA EN LOS PRODUCTOS"<<endl;
	system("pause");
	system("cls");		
	break;	
}
	break;
	default:
	cout<<"LA OPCION QUE ELIGIO NO ESTA DISPONIBLE, INGRESE UNA DE LAS QUE SE LE SOLICITAN"<<endl;
	system("pause");
	system("cls");		
	break;	
		
}
	
	break;
	case 3://FACTURACION 
	cout<<"\tINGRESE SU NOMBRE"<<endl;
	cin>>nombre;
	cout<<"\tINGRESE NUMERO DE NIT"<<endl;
	cin>>nit;
	cout<<"\tINGRESE SU DIRECCION"<<endl;
	cin>>direccion;
	system("cls");
	cout<<"\t\t\t\t\t\tFACTURA 0020055"<<endl;
	cout<<"\t\t\t\t\t\tNOMBRE   :"<<nombre<<endl;
	cout<<"\t\t\t\t\t\tNIT      :"<<nit<<endl;
	cout<<"\t\t\t\t\t\tDIRECCION:"<<direccion<<endl;
	cout<<"\n"<<endl;
	switch(jugo){
		case 1:	
		jugo1=manzana;
		cout<<"\t\t\t\t\t1)FRUTA FRESCA DE MANZANA       Q"	<<jugo1<<endl;
		 
		break;
		case 2:
		jugo2=uva;
		cout<<"\t\t\t\t\t1)CIFRUIT DE UVA                Q"	<<jugo2<<endl;
	
		break;
		case 3:
		jugo3=melo;
		cout<<"\t\t\t\t\t1)KERNS MELOCOTON               Q"<<jugo3<<endl;
		
	}	
		switch(gaseosa){
		case 1:	
		gas1=pepsi;
		cout<<"\t\t\t\t\t1)PEPSI                         Q"	<<gas1<<endl;
		
		break;
		case 2:
		gas2=coca;
		cout<<"\t\t\t\t\t1)COCA COLA LITE                Q"	<<gas2<<endl;
			
		break;
		case 3:
		gas3=rica;
		cout<<"\t\t\t\t\t1)RICA ROJA                     Q"<<gas3<<endl;
		
		
	}		
		switch(galleta){
		case 1:	
		galleta1=negrito;
		cout<<"\t\t\t\t\t1)NEGRITO BIMBO                 Q"	<<galleta1<<endl;
		break;
		case 2:
		galleta2=pinguino;
		cout<<"\t\t\t\t\t1)GALLETA PINGUINO              Q"	<<galleta2<<endl;	
		break;
		case 3:
		galleta3=oreo;
		cout<<"\t\t\t\t\t1)GALLETA OREO                  Q"<<galleta3<<endl;
		 
	}
	switch(golosina){
		case 1:	
		golosina1=doritos;
		cout<<"\t\t\t\t\t1)DORITOS BOLSA GRANDE          Q"	<<golosina1<<endl;
		break;
		case 2:
		golosina2=chetos;
		cout<<"\t\t\t\t\t1)CHETOS BOLSA MEDIANA          Q"	<<golosina2<<endl;	
		break;
		case 3:
		golosina3=tortrix;
		cout<<"\t\t\t\t\t1)TORTRIX BOLSA GRANDE          Q"<<golosina3<<endl;
		 
	}
	
	totalcom= jugo1+jugo2+jugo3+gas1+gas2+gas3+galleta1+galleta2+galleta3+golosina1+golosina2+golosina3;
	cout<<"\n"<<endl;
	cout<<"\t\t\t\t\t\t\tTOTAL GASTADO  :Q"<<totalcom<<endl;
	cout<<"\t\t\t\t\t\t\tSALDO INGRESADO:Q"<<saldo<<endl;
	cambio=saldo-totalcom;
	if(saldo>totalcom)
	{
	cout<<"\t\t\t\t\t\t\tCAMBIO         :Q"<<cambio<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\t\t\t\t\t\tDETALLES DE CAMBIO Q      "<<cambio<<endl;
	switch(cambio)
	{
	case 1:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 2:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 3:	
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 4:	
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 5:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 6:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 7:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 8:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 9:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;	
	case 10:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	break;
	case 11:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 12:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 13:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 14:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 15:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;			
	case 16:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 17:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 18:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;	
	case 19:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 20:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	break;
	case 21:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 22:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 23:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 24:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 25:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 26:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 27:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 28:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 29:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 30:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	break;
	case 31:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 32:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 33:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 34:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 35:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 36:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 37:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 38:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 39:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 40:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	break;
	case 41:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 42:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 43:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 44:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 45:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 46:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 47:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 48:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 49:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 50:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	break;
	case 51:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 52:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 53:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 54:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 55:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;	
	case 56:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 57:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 58:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 59:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 60:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	break;
	case 61:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 62:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 63:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 64:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 65:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 66:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 67:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 68:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 69:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;	
	case 70:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	break;
	case 71:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 72:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 73:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 74:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 75:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 76:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 77:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 78:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 79:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 80:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	break;
	case 81:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 82:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 83:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 84:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 85:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;
	case 86:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 87:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 88:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 89:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q10"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 90:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	break;
	case 91:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 92:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;	
	case 93:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 94:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 95:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	break;	
	case 96:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q1"<<endl;
	break;
	case 97:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q1"<<endl;
	break;
	case 98:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t3 BILLETE DE Q1"<<endl;
	break;
	case 99:	
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q50"<<endl;
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q20"<<endl;
	cout<<"\t\t\t\t\t\t1 BILLETE DE Q5"<<endl;
	cout<<"\t\t\t\t\t\t4 BILLETE DE Q1"<<endl;
	break;
	case 100:	
	cout<<"\t\t\t\t\t\t2 BILLETE DE Q50"<<endl;
	break;
	default:
	cout<<"SU SALDO ES MENOR AL TOTAL COMPRADO";
	system("pause");
	system("cls");
		
		
		
		
		
		
		
		
		
		
		
	}
}
	else
	{
	system("cls");
	cout<<"SU SALDO ES MENOR AL TOTAL GASTADO"<<endl;
	cout<<"INGRESE UN SALDO MAYOR"<<endl;
	system("pause");
	system("cls");
}
	
	
	
	
	
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\n"<<endl;
	cout<<"\t\t\t\t\t\tGRACIAS POR SU COMPRA VUELVA PRONTO :3"<<endl;	
	system("pause");
	system("cls");
	
	
	
	case 4://SALIR
	break;	
		
		
	}
	
		
	
	
}while(opc!=4);	
getch();
return 0;
    
}
