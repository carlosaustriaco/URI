const readline = require('readline');

const tst = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

tst.question('qualquer coisa', (ei) => {
	console.log(`foi digitado: ${ei}`);

	tst.close();
	});