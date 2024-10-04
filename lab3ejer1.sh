#!/bin/bash

# Con esta funcion se calcula la suma de las  diagonales
suma_diagonales(){

	local matriz=("${!1}")  #uso local parra no afectar lo demas
	local n=$2
	local suma=0


	#aqui  se hace la suma
	for ((i=0; i<n; i++)); do
		suma=$((suma + matriz[i*n +i] + matriz[(n-i-1)*n +i]))
	done
	echo $suma

}

# se define la matriz

matriz=(
	1 2 3
	4 5 6
	7 8 9

)

echo "matriz  ${matriz[@]}"
# se deefine el tamano de matriz
n=3


#calculamos la  suma

echo "aqui va la suma"
total=$(suma_diagonales  matriz  $n)

# imprime  resultado

echo "La suma de las diagonales es: $total"
