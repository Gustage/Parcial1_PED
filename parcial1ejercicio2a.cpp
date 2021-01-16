#include <iostream>


using namespace std;

int main(){
	int a, b=0;
	cout<<"Digite un numero: ";
	cin>>a;
	while(a>0){
		b=b+a%10;
		a=a/10;
		
	}
	cout<<endl;
	cout<<"La suma del numero entero es: "<<b<<endl;

    return 0;
}
