Algoritmo promedio_n_numeros
	num<-0;
	cantidad<-0;
	suma<-0;
	Escribir "cuantos n�meros desea ingresar";
	leer cantidad;
	Para i=1 Hasta cantidad Con Paso  1 Hacer
		Escribir "numero ", i;
		leer num;
		suma= suma+ num;
	Fin Para
	suma=suma/cantidad;
	Escribir "el promedio de los n�meros ingresados es: ", suma;
FinAlgoritmo
