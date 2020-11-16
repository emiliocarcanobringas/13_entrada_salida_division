/*Este programa lee la entrada de dos números, y muestra en la salida estándar el resultado de la división de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritmético de división*/

# include <iostream> //Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres

main(){ //Inicio del programa
	
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y le colocamos el valor para manejo de caracteres, le asignamos el idioma español 
	float numero1; //Declaramos la primera variable (el dividendo) 
	float numero2; //Declaramos la segunda variable (el divisor)
	float cociente; //Declaramos la variable cociente
	
	cout<<"Ingrese el número para el dividendo"<<endl; //Solicitamos la primera variable 1 (dividendo)
	cin>>numero1; //Almacenamos la variable 1
	cout<<"Ingrese el número para el divisor"<<endl; //Solicitamos la variable 2 (divisor)
	cin>>numero2; //Almacenamos la variable 2
	cout<<"El número que resulta como cociente es"<<endl; //Imprimimos este mensaje en pantalla
	cociente = numero1/numero2; //Realizamos la operación de la división
	cout<<cociente<<endl;
	
	return 0; //fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
