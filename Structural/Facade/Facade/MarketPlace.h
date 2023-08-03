#pragma once
#include "Header.h"

class MarketPlace
{
private:
	ProviderCommunication _provider_comm;
	Site _site;
	Database _database;
public:
	void ProductReceipt();
	void ProductRelease();
};