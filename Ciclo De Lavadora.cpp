#include <iostream>


using namespace std;

//Estados ----- 0: Off, 1: Inactivo, 2: Remojar, 3:Enjuage:, 4: Drenar, 5: Seco.
//Tipo De Plan ----- 0: Regular, 1: Delicado, 2: Super Delicado.
//Estados De La Lavadora.
void esperar(int segundos)
{
	for (int i = 1; i <= segundos; ++i)
	{
		cout << i << "..." << endl;
		for (int j = 0; j < 10000000; ++j) 	{
		}	
	}
	
}
int main()
{
	printf("Ciclo De Lavadora");
	int estado = 0;
	int tipo = 0;
	cout <<"\nLavadora Encendida";
	estado = 1 
	
	;cout << "\nSelecciona Un Tipo De Plan (0: Regualar, 1: Delicado, 2: Super Delicado):";
	cin >> tipo
	
	;printf("\nRemojar");
	cout << "\nEstado: Remojar";
	cout << "\nLuz: Remojar";
	cout << "\nBomba: Llenando";
    esperar(15);
    
    printf("\nEnjuagar");
    cout << "\nEstado: Enjuagar";
    cout << "\nLuz: Enjuagar";
    cout << "\nBomba: Llenando";
    esperar (15);
    
    printf("\nDrenar");
    cout << "\nEstado: Drenar";
    cout << "\nLuz: Drenar";
    cout << "\nBomba: Llenadno";
    
    if (tipo == 2)
    {
    	esperar(15);
    	cout << "\nLuz: Off";
    	cout << "\nLavado Super Delicado Terminado";
    	estado = 1;
	}
	else if (tipo == 1)
	{
		esperar(15);
		cout << "\nLuz: Off";
		cout << "\nLavado Delicado Terminado";
		estado = 1;
	}
	else
	{
		cout << "\nEstado: Seco";
		cout << "\nLuz: Seco";
		cout << "\nAgitando";
		esperar(15);
		cout << "\nLuz: Off";
		cout << "\nLavado Terminado";
		estado = 1;
	}
	return 0;
}

