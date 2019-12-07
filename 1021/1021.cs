using System;
using System.Globalization;

class URI{
	static void Main(string[] args){
		//changing the format of reading and floating points to invariant culture
		CultureInfo.DefaultThreadCurrentCulture = CultureInfo.InvariantCulture;
		CultureInfo.DefaultThreadCurrentUICulture = CultureInfo.InvariantCulture;

		//get the value
		double money = Double.Parse(Console.ReadLine());
		//auxiliar variable to get the amount of money
		int quantity;

		//variable of the integer money
		int moneyInt = Convert.ToInt32(Math.Floor(money));

		//the amount in coins
		double moeda;

		//the amount in coins in a integer way
		int moedaInt;

		//get the amount of coins
		moeda = (money - moneyInt)*100.0;

		//get the amount of coins in integer way
		moedaInt = Convert.ToInt32(Math.Round(moeda));

		//showing the notes
		Console.WriteLine("NOTAS:");

		//for the 100 note
		quantity = moneyInt/100;
		Console.WriteLine("{0} nota(s) de R$ 100.00", quantity);
		moneyInt -= quantity*100;

		//for the 50 note
		quantity = moneyInt/50;
		Console.WriteLine("{0} nota(s) de R$ 50.00", quantity);
		moneyInt -= quantity*50;

		//for the 20 note
		quantity = moneyInt/20;
		Console.WriteLine("{0} nota(s) de R$ 20.00", quantity);
		moneyInt -= quantity*20;

		//for the 10 note
		quantity = moneyInt/10;
		Console.WriteLine("{0} nota(s) de R$ 10.00", quantity);
		moneyInt -= quantity*10;

		//for the 5 note
		quantity = moneyInt/5;
		Console.WriteLine("{0} nota(s) de R$ 5.00", quantity);
		moneyInt -= quantity*5;

		//for the 2 note
		quantity = moneyInt/2;
		Console.WriteLine("{0} nota(s) de R$ 2.00", quantity);
		moneyInt -= quantity*2;

		Console.WriteLine("MOEDAS:");

		//for the 1 coin
		Console.WriteLine("{0} moeda(s) de R$ 1.00", moneyInt);
	
		//for the 0.5 coin
		quantity = moedaInt/50;
		Console.WriteLine("{0} moeda(s) de R$ 0.50", quantity);
		moedaInt -= quantity*50;

		//for the 0.25 coin
		quantity = moedaInt/25;
		Console.WriteLine("{0} moeda(s) de R$ 0.25", quantity);
		moedaInt -= quantity*25;

		//for the 0.10 coin
		quantity = moedaInt/10;
		Console.WriteLine("{0} moeda(s) de R$ 0.10", quantity);
		moedaInt -= quantity*10;

		//for the 0.05 coin
		quantity = moedaInt/5;
		Console.WriteLine("{0} moeda(s) de R$ 0.05", quantity);
		moedaInt -= quantity*5;

		//for the 0.01 coin
		Console.WriteLine("{0} moeda(s) de R$ 0.01", moedaInt);								
	}
}