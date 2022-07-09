#include<iostream>

int main()
{
   int dia, mes, clic;
   cout<<"Menu"<<endl;
   cout<<"Escriba un número representando el mes de nacimiento"<<endl;
   cout<<"1=Enero \t2=Febrero \t3=Marzo \t4=Abril \t5=Mayo \t6=Junio"<<endl;
   cout<<"7=Julio \t8=Agosto \t9=Septiembre \t10=Octubre \t11=Noviembre \t12=Diciembre"<<endl;
   cin>>mes;
   cout<<"Escriba el número del día de su nacimiento"<<endl;
   cin>>dia;
   switch(mes)
   {
   	case 1:if(dia<21)
      cout<<"Su signo zodiacal es: Capricornio"<<endl;
      else
      cout<<"Su signo zodiacal es: Acuario"<<endl; break;

      case 2:if(dia<21)
      cout<<"Su signo zodiacal es: Acuario"<<endl;
      else
      cout<<"Su signo zodiacal es: Piscis"<<endl; break;

      case 3:if(dia<21)
      cout<<"Su signo zodiacal es: Piscis"<<endl;
      else
      cout<<"Su signo zodiacal es: Aries"<<endl; break;

      case 4:if(dia<21)
      cout<<"Su signo zodiacal es: Aries"<<endl;
      else
      cout<<"Su signo zodiacal es: Tauro"<<endl; break;

      case 5:if(dia<22)
      cout<<"Su signo zodiacal es: Tauro"<<endl;
      else
      cout<<"Su signo zodiacal es: Geminis"<<endl; break;

      case 6:if(dia<22)
      cout<<"Su signo zodiacal es: Geminis"<<endl;
      else
      cout<<"Su signo zodiacal es: Cancer"<<endl; break;

      case 7:if(dia<23)
      cout<<"Su signo zodiacal es: Cancer"<<endl;
      else
      cout<<"Su signo zodiacal es: Leo"<<endl; break;

      case 8:if(dia<23)
      cout<<"Su signo zodiacal es: Leo"<<endl;
      else
      cout<<"Su signo zodiacal es: Virgo"<<endl; break;

      case 9:if(dia<24)
      cout<<"Su signo zodiacal es: Virgo"<<endl;
      else
      cout<<"Su signo zodiacal es: Libra"<<endl; break;

      case 10:if(dia<25)
      cout<<"Su signo zodiacal es: Libra"<<endl;
      else
      cout<<"Su signo zodiacal es: Escorpio"<<endl; break;

      case 11:if(dia<23)
      cout<<"Su signo zodiacal es: Escorpio"<<endl;
      else
      cout<<"Su signo zodiacal es: Sagitario"<<endl; break;

      case 12:if(dia<22)
      cout<<"Su signo zodiacal es: Sagitario"<<endl;
      else
      cout<<"Su signo zodiacal es: Capricornio"<<endl; break;

      default:
      cout<<"Por favor ingrese una fecha correcta"<<endl;
   }
cin>>clic;
}

