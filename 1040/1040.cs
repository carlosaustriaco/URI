using System;
using System.Globalization;

class URI{
	static void Main(string[] args){
		CultureInfo.DefaultThreadCurrentCulture = CultureInfo.InvariantCulture;
		CultureInfo.DefaultThreadCurrentUICulture = CultureInfo.InvariantCulture;

		//the string of inputs
		string line;
		//the strings of each inputs
		string[] values;

		//grades of the student
		double n1, n2, n3, n4;
		//weights of each grade
		int peso1, peso2, peso3, peso4;
		//the media of the student
		double media;
		//the output of the program
		string output;

		//giving the weights of each grade
		peso1 = 2;
		peso2 = 3;
		peso3 = 4;
		peso4 = 1;

		//get the values
		line = Console.ReadLine();

		//get the individual values
		values = line.Split(' ');

		//convert each value to double
		n1 = Double.Parse(values[0]);
		n2 = Double.Parse(values[1]);
		n3 = Double.Parse(values[2]);
		n4 = Double.Parse(values[3]);

		//calculating the media
		media = (peso1*n1 + peso2*n2 + peso3*n3 + peso4*n4)/(peso1 + peso2 + peso3 + peso4);

		//creating the output 
		output = "Media: " + Math.Round(media,1).ToString("n1");

		//showing the media to the user
		Console.WriteLine(output);

		//checking if the student is approved or disapproved
		if(media < 5){
			Console.WriteLine("Aluno reprovado.");
		}
		else if(media >= 7){
			Console.WriteLine("Aluno aprovado.");
		}
		else{
			double newGrade;

			Console.WriteLine("Aluno em exame.");

			//read the new grade from the user
			line = Console.ReadLine();

			newGrade = Double.Parse(line);

			Console.WriteLine("Nota do exame: {0}", newGrade.ToString("n1"));

			//calculating the new media
			media = (media + newGrade)/2;

			//checking if the student is approved or disapproved
			if(media >= 5){
				Console.WriteLine("Aluno aprovado.");
			}
			else{
				Console.WriteLine("Aluno reprovado.");
			}

			//show the final media to the user
			media = Math.Round(media, 1);
			Console.WriteLine("Media final: {0}", media.ToString("n1"));
		}
	}
}