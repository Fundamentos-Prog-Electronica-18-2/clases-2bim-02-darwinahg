#include <iostream>

using namespace std;
double saldo = 8000;
int obtenerEdad(int e){
    int operacion = 2018 - e ;
    return operacion ;
}
void sumarSaldo(double s){
    saldo = saldo + s;
    }


void restarSaldo(double a){

     if(saldo >=  a){
                saldo = saldo - a;

    }   else{
         cout << " el saldo es insuficiente" << endl ;
        }
}

string obtenerTipoCuenta(){
    string frase = "";

    if (saldo < 100){
        frase = "usted es un cliente tipo D";
    }else{
        if((saldo>=101) & (saldo <=1000)){
            frase = "usted  es un  cliente tipo C";
        }else{
            if((saldo>=1001) & (saldo <=10000)){
                frase = "usted es un cliente tipo B";
            }else{
                if((saldo>=101) & (saldo <=1000)){
                    frase = "usted es un cliente tipo C";
                }else{
                    frase = "usted es un cliente tipo A" ;

                }
            }
        }
    }
    return frase;

}






int main()
{
    int opcion = 0;
    double ingresoValor = 0;
    int nacimiento ;
    cout << "ingrese su año de nacimiento"<< endl ;
    cin >> nacimiento;
    cout << "ingrese una opcion 1 sumar 2 restar"<< endl ;
    cin >> opcion;

    if (opcion == 1 ){
        cout << "ingrese el valor a sumar" << endl;
        cin >> ingresoValor;
        sumarSaldo(ingresoValor);

    }else{
        if(opcion == 2) {

            cout << "ingrese el valor a restar" << endl;
            cin >> ingresoValor;
            restarSaldo(ingresoValor);
        }else{
            cout << " opcion incorrecta, no se modifica el saldo " << endl ;
        }
    }
    cout << "  Hola tu saldo es:   " <<    saldo     << endl ;
    cout << obtenerTipoCuenta() << endl ;

    int edad= obtenerEdad(nacimiento);
    cout << " su edad es    " << edad << endl ;
    return 0;
}
