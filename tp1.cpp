/* E. Zanotti
   20151004
   tp#01 Tipos de variables
*/


#include<iostream>
#include<string>

using namespace std;

int main()
{
    unsigned a,b;
    bool b1,b2;
    char c1,c2;
    double d1,d2;
    string s1;
    string s2;

    cout<<"Ingrese dos numeros enteros..\n";

    cin>>a;
    cin>>b;

    cout<<"Suma=";
    cout<<a+b;
    cout<<"\n";
    cout<<"Resta=";
    cout<<a-b;
    cout<<"\n";
    cout<<"Multiplicacion=";
    cout<<a*b;
    if(a>b)
        cout<<"\nel valor A es mayor al de B..\n";
    else
        cout<<"\nel valor de B es mayor al de A..\n";
    cout<<"\n";


    cout<<"Ingrese dos datos de caracter double..\n";

    cin>>d1;
    cin>>d2;

    cout<<"Resta=";
    cout<<d1-d2;
    cout<<"\n";
    cout<<"Multiplicacion=";
    cout<<d1*d2;
    cout<<"\n";
    cout<<"Suma=";
    cout<<d1+d2;
    cout<<"\n";
    cout<<"Ingrese 1 como verdadero, 0 como falso..\n";
    cin>>b1;
    cout<<"Ingrese otro..\n";
    cin>>b2;
    cout<<"\n";
    if(b1==b2)
        cout<<"Verdadero";
    else
        cout<<"Falso";

    cout<<"\nIngrese dos caracteres..\n";
    cin>>c1;
    cin>>c2;

    if(c1==c2)
        cout<<"Ambos caracteres son iguales..\n";
    else
        cout<<"Son distintos..\n";

    cout<<"Ingrese una cadena de caracteres...\n";
    cin>>s1;
    cout<<"Ingrese otra cadena de caracteres.. \n";
    cin>>s2;
    cout<<"El tamaño de la primera cadena es.."<<s1.size()<<" y el de la segunda es.."<<s2.size()<<"\n";
    cout<<"Si las concatenamos..\n";
    cout<<s1+s2;

}

