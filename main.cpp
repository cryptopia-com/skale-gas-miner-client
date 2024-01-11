// SkaleClient.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <thread>
#include "miner.h"

int main()
{
	Cryptopia::SkaleGasMiner::GetInstance()
		.MineGas(
			10000000, 
			"0x342BE07C0A1d651b14959F0A7d9e60547f7Be80B", 
			1, // Nonce
			1, // Difficulty
			[](const unsigned long long hashRate)
			{
				std::cout << "Hashrate: " << hashRate << std::endl;
			},
			[](const bool success, const char* result, const char* error)
			{
				std::cout << "Callback: " << result << std::endl;
			});
	}
