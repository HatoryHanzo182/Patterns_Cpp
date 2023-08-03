#include "Header.h"

void ProviderCommunication::Receive() const { cout << "Receipt of products.\n"; }

void ProviderCommunication::Payment() const { cout << "Payment to the supplier, taking into account the deduction of commission for the sale of products.\n"; }