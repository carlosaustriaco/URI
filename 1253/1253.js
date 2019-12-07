const readline = require('readline');

const entry = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

var quantidade = false;
var alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
var entrada;

entry.on('line', function(linha){
	if(!quantidade){
		quantidade = true;
	}
	else{
		if(entrada == undefined){
			entrada = linha;
		}
		else{
			var distancia = parseInt(linha);
			var counter;

			for(counter = 0; counter < linha.length; counter++){

			}
		}
	}
});