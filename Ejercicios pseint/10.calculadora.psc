Algoritmo calculadora
	Repetir
		Escribir "¿Desea realizar una operación? Presione un número dependiendo de la opción que quiera utilizar";
		Escribir "1. sumar";
		Escribir "2. restar";
		Escribir "3. multiplicar";
		Escribir "4. dividir";
		Escribir "5. salir";
		Leer opcion;
		Si opcion=1 Entonces
			Escribir "ingrese un primer valor: ";
			leer primero;
			Escribir "ingrese un segundo valor: ";
			leer segundo;
			resultado <- primero + segundo;
			Escribir "el resultado de la suma es: ",resultado;
		SiNo
			Si opcion=2 Entonces
				Escribir "ingrese un primer valor: ";
				leer primero;
				Escribir "ingrese un segundo valor: ";
				leer segundo;
				resultado <- primero - segundo;
				Escribir "el resultado de la resta es: ",resultado;
			SiNo
				Si opcion=3 Entonces
					Escribir "ingrese un primer valor: ";
					leer primero;
					Escribir "ingrese un segundo valor: ";
					leer segundo;
					resultado <- primero * segundo;
					Escribir "el resultado de la multiplicación es: ",resultado;
				SiNo
					Si opcion=4 Entonces
						Escribir "ingrese un primer valor: ";
						leer primero;
						Si primero=0 Entonces
							Escribir "El valor ingresado es cero, por lo tanto la operación no se podrá realizar";
						SiNo
							Escribir "ingrese un segundo valor: ";
							leer segundo;
							Si segundo=0 Entonces
								Escribir "El valor ingresado es cero, por lo tanto la operación no se podrá realizar";
							SiNo
								resultado <- primero / segundo;
								Escribir "el resultado de la división es: ",resultado;
							Fin Si
							
						Fin Si
						
					SiNo
						
					Fin Si
				Fin Si
			Fin Si
	Fin Si
	Hasta Que opcion=5
	
FinAlgoritmo
