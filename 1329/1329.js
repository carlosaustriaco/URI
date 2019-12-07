const readline = require('readline');

const entry = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

var number = 0;

entry.on('line', function(linha){
	if(number == 0){
		if(linha != 0){
			number = linha
		}
	}
	else{
		var caras = linha.split(' ');
		var contadorMaria = 0;
		var contadorJonh = 0;
		var counter;

		for(counter = 0; counter < number; counter++){
			if(caras[counter] == '0'){
				contadorMaria++;
			}
			else{
				contadorJonh++;
			}
		}

		saida = "Mary won " + contadorMaria +
		" times and John won "+ contadorJonh +
		" times";

		console.log(saida);

		number = 0;
	}
});