#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Declaracion de VARIABLES
    int prog;
    double a, b, c, d, x, x1, x2;

    cout<<"Ingrese 1 para calcular Bhaskara"<<endl;
    cin>>prog;

    while(prog==1)
    {
        //Pedido de DATOS
            cout<<"Ingrese el valor de A: "<<endl; cin>>a;
            cout<<"Ingrese el valor de B: "<<endl; cin>>b;
            cout<<"Ingrese el valor de C: "<<endl; cin>>c;

        // Calculo dentro de la raiz
            d=(b*b)-(4*a*c);


        //Raiz distinta de 0
            if (d>0)
            {
            //Formula +
                x1=(-b+sqrt(d))/(2*a);
            //Formula -
                x2=(-b-sqrt(d))/(2*a);

                if (x1==-0)
                {
                    x1=x1*-1;
                }
                if (x2==-0)
                {
                    x2=x2*-1;
                }

                    cout<<"x1 = "<<x1<<endl;
                    cout<<"x2 = "<<x2<<endl;

            }

            else if (d==0)
            {
                x=(-b)/(2*a);

                cout<<"x = "<<x<<endl;
            }
            else
            {
                cout<<"No tiene solucion real mother fucker"<<endl;
            }

        cout<<"Ingrese 1 para calcular Bhaskara"<<endl;
        cin>>prog;
    }


    return 0;
}
