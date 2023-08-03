#include "Header.h"

int main()
{
	setlocale(NULL, "rus");

	Exchange* exchange = new Exchange(10, 10);
	Memory* memory = new Memory(exchange);
	
	exchange->GetDollars();
	exchange->GetEuro();

	cout << "<--- Selling the dollar, buying the euro --->\n";
	
	exchange->Sell();
	exchange->Buy();
	exchange->GetDollars();
	exchange->GetEuro();

	cout << "<--- Save the state --->\n";

	memory->Backup();

	cout << "<--- Selling the dollar(2x), buying the euro --->\n";
	exchange->Sell();
	exchange->Sell();
	exchange->Buy();
	exchange->GetDollars();
	exchange->GetEuro();

	cout << "<--- Let's restore the state --->\n";

	memory->Undo();
	exchange->GetDollars();
	exchange->GetEuro();

	system("pause");
	return 0;
}