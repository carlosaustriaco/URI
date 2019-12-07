const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

var n1;
var n2;
var n3;
var n4;
var n5;
var n6;

rl.on('line', function(answer) {
	n1 = answer;
	console.log(n1);
});