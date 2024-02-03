Algoritmo promedio_n_numeros
	num<-0;
	cantidad<-0;
	suma<-0;
	Escribir "cuantos números desea ingresar";
	leer cantidad;
	Para i=1 Hasta cantidad Con Paso  1 Hacer
		Escribir "numero ", i;
		leer num;
		suma= suma+ num;
	Fin Para
	suma=suma/cantidad;
	Escribir "el promedio de los números ingresados es: ", suma;
FinAlgoritmo
