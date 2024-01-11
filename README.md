# Cryptopia.SkaleGasMinerClient

A simple command-line interface (CLI) application that demonstrates gas mining on the Skale Network. This application serves as an example of how to integrate and utilize the `Cryptopia.SkaleGasMiner` in a C++ project.

For more details about the `Cryptopia.SkaleGasMiner`, visit [github.com/cryptopia-com/skale-gas-miner](https://github.com/cryptopia-com/skale-gas-miner).

## About SKALE

[SKALE](https://skale.space/) is a limitlessly scalable, fast, on-demand blockchain network with zero gas fees, allowing quick deployment of interoperable EVM-compatible chains without compromising security or decentralization.

SKALE is a fully decentralized, open-source, community-owned network.

## About Cryptopia

[Cryptopia](https://cryptopia.com/) is a fully decentralized multiplayer RPG and strategy game, created in Unity3D. Running on the SKALE Network as its default blockchain, it offers a gasless gaming experience with a built-in native wallet and gas mining solutions. This game uniquely blends RPG elements with strategic gameplay in a blockchain-based environment.

## Prerequisites

Before you begin, ensure you have the following prerequisites installed:
- Visual Studio (with C++ development tools)

## Cloning and Building

To clone and build the SkaleGasMinerClient application, follow these steps:

1. **Clone the Client Repository:**
   ```bash
   git clone https://github.com/cryptopia-com/skale-gas-miner-client.git
   ```

2. **Clone the Miner Repository:**
   ```bash
   git clone https://github.com/cryptopia-com/skale-gas-miner.git
   ```
   Note: Clone `skale-gas-miner` in the same directory as SkaleClient, as the client expects the additional lib in `../skale-gas-miner` folder.

3. **Build the Miner:**
   Open the `Cryptopia.SkaleGasMiner.sln` file in Visual Studio and build the solution to generate the `Cryptopia.SkaleGasMiner.dll`.

4. **Build the Client:**
   Open the `Cryptopia.SkaleGasMinerClient.sln` file in Visual Studio. Ensure that project is configured to dynamically link with `Cryptopia.SkaleGasMiner.dll`. Build the solution.

## Running SkaleClient
After building, you can run SkaleClient directly from Visual Studio by pressing the play button. The application will dynamically load `Cryptopia.SkaleGasMiner.dll` and start mining operations based on the predefined parameters in the `main()` function.

## Understanding SkaleClient's Code

`main()` in `main.cpp` demonstrates:
- Dynamic loading of `Cryptopia.SkaleGasMiner.dll`.
- Initiating mining with parameters like gas amount, address, nonce, and difficulty.
- Callbacks for real-time hash rate updates and mining results.

## Contributing

Contributions to Client are welcome! Feel free to fork the repository, make changes, and submit pull requests.

## License

This project is licensed under the [MIT License](LICENSE).

## Contact

For queries or support related to SkaleClient, please contact [info@cryptopia.com](mailto:info@cryptopia.com).