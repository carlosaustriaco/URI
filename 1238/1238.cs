using System;
using System.Globalization;

class URI{
	static void Main(string[] args){
		CultureInfo.DefaultThreadCurrentCulture = CultureInfo.InvariantCulture;
		CultureInfo.DefaultThreadCurrentUICulture = CultureInfo.InvariantCulture;

		//number of test cases
		int n;
		//global counter;
		int globalCounter;
		//a regular counter
		int counter;

		//the two strings to join
		string line;
		string[] lines;
		string line1;
		string line2;

		//length of the greatest string
		int tamanhoMaior;

		//the string with the greatest length
		bool isLine1;

		//get the number of test cases
		n = Int32.Parse(Console.ReadLine());

		//the output
		string saida = "";

		//starting the loop
		for(globalCounter = 0; globalCounter < n; globalCounter++){
			//getting the lines
			line = Console.ReadLine();
			lines = line.Split(' ');
			line1 = lines[0];
			line2 = lines[1];

			if(line1.Length > line2.Length){
				tamanhoMaior = line1.Length;
				isLine1 = true;
			}
			else{
				tamanhoMaior = line2.Length;
				isLine1 = false;
			}

			for(counter = 0; counter < tamanhoMaior; counter++){
				if(isLine1){
					saida += line1[counter];
					if(counter < line2.Length){
						saida += line2[counter];
					}
				}
				else{
					if(counter < line1.Length){
						saida += line1[counter];
					}
					saida += line2[counter];
				}
			}

			Console.WriteLine(saida);
			saida = "";
		}
	}
}