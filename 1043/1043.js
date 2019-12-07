const readline = require('readline');

const entry = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

entry.on('line', function(linha){
	var numbers = linha.split(' ');
	var n1 = parseFloat(numbers[0]);
	var n2 = parseFloat(numbers[1]);
	var n3 = parseFloat(numbers[2]);

	if((n3 < (n1 + n2)) && (n1 < (n2 + n3)) && (n2 < n1 + n3)){
		var perimetro = n1 + n2 + n3;

		perimetro = perimetro.toFixed(1);

		var saida = "Perimetro = " + perimetro;

		console.log(saida);
	}
	else{
		var area = (n1 + n2)*n3/2;

		area = area.toFixed(1);

		var saida = "Area = " + area;

		console.log(saida);
	}
});