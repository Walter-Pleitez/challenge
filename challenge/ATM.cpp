#include <iostream>

using namespace std;

//DECLARACION DE FUNCIONES
float Deposito(float montoDepositar);
float Retiro(float cantRetirar);
float Saldo = 1000;

int main()
{
    int continuar = 1, opcion;
    float deposito, retiro;
    string pin = "12345";

    do
    {
        cout << "Para ingresar al programa escriba el PIN: ";
        cin >> pin;

        if (pin == "12345")
        {
            do
            {
                cout << "********* Bienvenido al cajero automatico *********" << endl;
                cout << "Si desea retirar ingrese 1, si desea depositar ingrese 2" << endl;
                cin >> opcion;

                switch (opcion)
                {
                case 1:
                    cout<<"Area de Retiro"<<endl;
                    cout<<"Ingrese el monto a retirar: ";
                    cin>>retiro;
                    Saldo = Retiro(retiro);
                    cout<<"Su saldo actual es: "<<Saldo<<endl;
                    break;
                case 2:
                    cout<<"Area de Deposito"<<endl;
                    cout<<"Ingrese el monto: ";
                    cin>>deposito;

                    Saldo = Deposito(deposito);
                    cout<<"Su saldo actual es: "<<Saldo<<endl;
                    break;
                default:
                cout<<"La opcion no esta disponible"<<endl;
                }

                cout << "Si desea continuar Ingrese 11, sino ingrese otro valor" << endl;
                cin>>continuar;
                if (continuar == 11)
                {
                    cout << "Ud sigue en el programa" << endl;
                    cout << "*************************************" << endl;
                }
                else
                {
                    
                    cout << "Ud ha salido del programa" << endl;
                    cout << "*************************************" << endl;
                }

                continuar;
            } while (continuar == 11);//AREA DE PROGRAMA
        }//VALIDACION DE PIN

        else
        {
            cout << "ACCESO DENEGADO: El PIN es incorrecto";
            cout << "*************************************" << endl;
        }

        cout<<"Si desea continuar ingrese 1, sino ingrese 0: "<<endl;
        cin>>continuar;
        if(continuar==1){
            cout<<"Ud sigue en el Sistema"<<endl;
            cout << "*************************************" << endl;
        }
        else{
            cout<<"Ud ha salido del Sistema";
            cout << "*************************************" << endl;
        }
    } while (continuar == 1);//AREA DE SISTEMA

    return 0;
}//MAIN

//DEFINICION DE FUNCIONES
float Deposito(float montoDepositar){
    Saldo = Saldo + montoDepositar;
    return Saldo;
}
float Retiro(float cantRetirar){
    if(Saldo>cantRetirar){
        Saldo = Saldo - cantRetirar;
    }
    else{
        cout<<"Su saldo es insuficiente"<<endl;
    }

    return Saldo;
}