/*Este programa lee la entrada de dos n�meros, y muestra en la salida est�ndar el resultado de la divisi�n de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritm�tico de divisi�n*/

# include <iostream> //Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres

main(){ //Inicio del programa
	
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y le colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol 
	float numero1; //Declaramos la primera variable (el dividendo) 
	float numero2; //Declaramos la segunda variable (el divisor)
	float cociente; //Declaramos la variable cociente
	
	cout<<"Ingrese el n�mero para el dividendo"<<endl; //Solicitamos la primera variable 1 (dividendo)
	cin>>numero1; //Almacenamos la variable 1
	cout<<"Ingrese el n�mero para el divisor"<<endl; //Solicitamos la variable 2 (divisor)
	cin>>numero2; //Almacenamos la variable 2
	cout<<"El n�mero que resulta como cociente es"<<endl; //Imprimimos este mensaje en pantalla
	cociente = numero1/numero2; //Realizamos la operaci�n de la divisi�n
	cout<<cociente<<endl;
	
	return 0; //fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
