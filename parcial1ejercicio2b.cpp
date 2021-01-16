#include <iostream>
#include <stdlib.h>


using namespace std;

int numeroRecursivo(int a){
	if(a==0)
	return 0;
	else
	return ((a%10)+numeroRecursivo(a/10));
}

int main(){
	int b;
	cout<<"Digite un numero: ";
	cin>>b;
	cout<<"La suma de el numero es: "<<numeroRecursivo(b);


    return 0;
}
