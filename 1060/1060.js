const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

var numbers  =[];
var contador = 0;
var i;
var numeroPositivo = 0;

rl.on('line', function(answer) {
	numbers.push(answer);
	contador++;
	if(contador == 6){
		for(i = 0; i < 6; i++){
			if(numbers[i] > 0){
				numeroPositivo++;
			}
		}

		console.log(numeroPositivo + " valores positivos");
	}
});