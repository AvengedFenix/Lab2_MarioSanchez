#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int menu(int men){
	switch(men){
		case 1:{
		cout<<"Ingrese el lado A"<<endl;
		int A;
		cin>>A;
		cout<<"Ingrese el lado B"<<endl;
		int B;
		cin>>B;
		cout<<"Ingrese el angulo A"<<endl;
		int Aa;
		cin>>Aa;
		int Ab = asin(B*sin(A)/A);
		int Ac = Aa -Ab;
		int C = A*sin(Ac)/sin(Aa);
		cout<<"El angulo B es: "<<Ab<<endl;
		cout<<"El Lado C es: "<<C<<endl;
		cout<<"El angulo c es: "<<Ac<<endl;
		}
	}
}

int main(){
	cout<<"Ingrese el numero de ejercicio"<<endl;
	int men;
	cin>>men;
	menu(men);
}
