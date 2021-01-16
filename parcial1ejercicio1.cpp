#include <iostream>
#include <string.h>

using namespace std;
string cadena, cadena_invertida;

int main(){
    cout<<"Digite una palabra o frase: "<<endl;
    getline(cin, cadena);
    for(int i=cadena.size()-1;i>=0;i--)
    {
    	cadena_invertida+=cadena.at(i);
	}
    cout<<"La palabra o frase invertida es: "<<cadena_invertida<<endl;
    return 0;
}
