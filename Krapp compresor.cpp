#include <iostream>
#include <string>
using namespace std;
int main ()
{
    // ion = 1
    string texto,s1,s2;
    cout << "empieza el programa:\n";
    cout << "Ingrese su texto"<<endl;
    getline(cin, texto);

    cout << "Ingrese la palabra que desea buscar"<<endl;
    getline(cin, s1);

    cout << "Ingrese la palabra con la cual debe ser reemplazada"<<endl;
    getline(cin, s2);

    cout << "Resultado final:\n\n";

    texto.replace(texto.find(s1),s1.length(),s2);
    cout << texto << '\n';


cout << "Finaliza el programa\n\n\n";
return 0;
}
