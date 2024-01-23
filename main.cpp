#include <iostream>
#include <thread>
#include <atomic>
#include <conio.h> // Note: <conio.h> is typically used in Windows for console input
#include "miner.h"

int main()
{
    std::cout << "Mining started. Press Esc to stop." << std::endl;

    // Start mining in a separate thread
    std::thread miningThread([]() {
        Cryptopia::SkaleGasMiner::GetInstance()
            .MineGas(
                1000000000,
                "0x342BE07C0A1d651b14959F0A7d9e60547f7Be80B",
                1, // Nonce
                1, // Difficulty
                [](const unsigned long long hashRate)
                {
                    std::cout << "Hashrate: " << hashRate << std::endl;
                },
                [](const bool success, const char* result, const char* error)
                {
                    if (success)
						std::cout << "Success: " << result << std::endl;
					else
						std::cout << "Error: " << error << std::endl;
                });
        });

    // Wait for ESC key to stop mining
    while (true)
    {
        if (_kbhit() && _getch() == 27) // ESC key
        {
            Cryptopia::SkaleGasMiner::GetInstance().Stop();
            break;
        }

        // Sleep for a short duration to reduce CPU usage of this loop
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    if (miningThread.joinable()) {
        miningThread.join();
    }

    return 0;
}
