#include <iostream>
#include <math.h>

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
		break;
		}
		case 2:{
		cout<<"Ingrese el coeficiente a"<<endl;
		int a;
		cin>>a;
		cout<<"Ingrese el coeficiente b"<<endl;
                int b;
                cin>>b;
		cout<<"Ingrese el coeficiente c"<<endl;
                int c;
                cin>>c;
		int x1 = (-(b)+sqrt(b*b+(-4*a*c)))/2*a;
                int x2 = (-(b)-sqrt(b*b+(-4*a*c)))/2*a;
		cout<<"El resultado de la formula cuadratica usando + es: "<<x1<<endl;
		cout<<"El resultado de la formula cuadratica usando - es: "<<x2<<endl;
		break;
		}
		case 3:{
		cout<<"Ingrese x1"<<endl;
		int px0;
		cin>>px0;
		cout<<"Ingrese y1"<<endl;
		int py0;
		cin>>py0;
                cout<<"Ingrese x2"<<endl;       
                int px1;
                cin>>px1;
                cout<<"Ingrese y2"<<endl;       
                int py1;
                cin>>py1;
		int d = sqrt((px1-px0)^2 + (py1 - py0)^2);
		cout<<"La distancia es: "<<d<<endl;
		break;
		}
	}
}

int main(){
	cout<<"Ingrese el numero de ejercicio"<<endl;
	int men;
	cin>>men;
	menu(men);
}
