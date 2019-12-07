using System;
using System.Globalization;

class URI{
	static void Main(string[] args){
		CultureInfo.DefaultThreadCurrentCulture = CultureInfo.InvariantCulture;
		CultureInfo.DefaultThreadCurrentUICulture = CultureInfo.InvariantCulture;

		//the string of inputs
		string line;

		//the separated inputs strings
		string[] values;

		//the integer inputs
		int h1, m1, h2, m2;

		int diffHoras;
		int minutosTotal;

		//the loop of getting the values
		while(true){
			//getting the inputs
			line = Console.ReadLine();

			values = line.Split(' ');

			h1 = Int32.Parse(values[0]);
			m1 = Int32.Parse(values[1]);
			h2 = Int32.Parse(values[2]);
			m2 = Int32.Parse(values[3]);

			//checking of the values are all zero
			if((h1 == 0) && (h2 == 0) && (m1 == 0) && (m2 == 0)){
				break;
			}

			/*
				In the case that h2 is bigger than h1,
				check the difference between 24 and h1
			*/
			if(h2 >= h1){
				diffHoras = h2 - h1;

				minutosTotal = diffHoras*60 - m1 + m2;

				Console.WriteLine(minutosTotal);
			}


		}
	}
}