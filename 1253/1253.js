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
			var counter2;
			var saida = "";

			for(counter = 0; counter < entrada.length; counter++){
				for(counter2 = 0; counter2 < alfabeto.length; counter2++){
					if(entrada[counter] == alfabeto[counter2]){
						if(counter2 >= distancia){
							saida += alfabeto[counter2 - distancia];
						}
						else{
							saida += alfabeto[26 - (distancia - counter2)];
						}
					}
				}
			}

			console.log(saida);
			entrada = undefined;
		}
	}
});