![image](https://i.imgur.com/19HrseK.png)

# CADEX CRYPTOCURRENCY

Cadex Coin project was formed for easy E-Payment platform this 2018. It is created for faster transaction processes and it addresses cryptocurrency ease of use, Improving the ability to spend and buy cryptocurrency. Cadex marketplace for 3rd party developer add-ons and holistic approach to Cadex platform will be our top area of concentration.

# CADEX SPECIFICATION

* Ticker: DEX
* Algorithm: Cryptonight/Cryptonote
* Max. Supply: 18,446,744,073 DEX (18 billion DEX)
* Difficulty Target: 120 seconds
* P2P Port: 27370
* RPC Port: 27375

## Getting Started

To setup CADEX please follow the below installation instructions

* Building on Linux 64-bit

### Prerequisites

What things you need to install the CADEX

* `build-essential` package:
```
sudo apt-get install build-essential
```
* CMake 
```
sudo apt-get install cmake
```
* Boost 
```
sudo apt-get install libboost-all-dev
```
git clone https://github.com/cadexdev/cadex.git
```
*Pthreads
```
sudo apt-get install libpthread-stubs0-dev
```


Create build directory inside cadex, go there and run CMake and Make:
```
mkdir cadex/build
cd cadex/build
cadex/build/$ cmake..
cadex/build/$  make
```

Check built Cadex by:
```
cadex/build/$ cd src
```
Run Cadexd and let it sync with the Cadex Network
```
cadex/build/src/$ sudo ./cadexd
```
Run simplewallet Once Sync is done
```
cadex/build/src/$ sudo ./simplewallet
```
You will be asked to Open[O] wallet or Generate[G] wallet, put "O" to open already generated wallet or "G" to open new wallet.
```
