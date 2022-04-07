#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void registrobitacora();

int main()
{
    cout<<"______________________________"<<endl;
    cout<<"---------| BITACORA |---------"<<endl;
    cout<<"______________________________"<<endl;

    registrobitacora();

    system("pause");
    return 0;
}

void registrobitacora(){
    ofstream archivo;
    string fecha, nota_dia, nombre;

    archivo.open("BITACORA.txt",ios::app);

    if(archivo.fail()){
        cout<<"Archivo no encontrado, por favor verificar";
        exit(1);
    }

    cout<<"\nEscribe la fecha: ";
    getline(cin,fecha);
    archivo<<"----------------------";

    archivo<<fecha<<endl;;

    cout<<"\nEscribe en la bitacora: "<<endl;
    getline(cin,nota_dia);
    archivo<<"----------------------"<<endl;

    archivo<<nota_dia<<endl;

    cout<<"\nEscribe tu nombre: "<<endl;
    getline(cin,nombre);
    archivo<<"--- NOMBRE: ";

    archivo<<nombre<<endl;

    archivo<<"----------------------\n"<<endl;

    cout<<"----------------------------------------------------------"<<endl;
    cout<<"¡Felicidades! ¡Acabas de poner tu registro en la bitacora!"<<endl;
    cout<<"----------------------------------------------------------"<<endl;

    cout<<"______________________________"<<endl;

    archivo.close();

}
