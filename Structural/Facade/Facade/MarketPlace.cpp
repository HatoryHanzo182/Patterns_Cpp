#include "Header.h"

void MarketPlace::ProductReceipt()
{
	_provider_comm.Receive();
	_site.Placement();
	_database.Insert();
}

void MarketPlace::ProductRelease()
{
	_provider_comm.Payment();
	_site.Del();
	_database.Del();
}
