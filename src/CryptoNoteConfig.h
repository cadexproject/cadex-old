// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers, The CADEX developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdint>

namespace CryptoNote {
namespace parameters {

const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0x4151bd4; // addresses start with "cadeX"
const size_t   CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 60;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;


const uint64_t MONEY_SUPPLY                                  = (uint64_t)(-1);
const size_t CRYPTONOTE_COIN_VERSION                         = 1;
const unsigned EMISSION_SPEED_FACTOR                         = 30;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 1000000; 
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 1000000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 100000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 9;
const uint64_t MINIMUM_FEE                                   = UINT64_C(100000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(100000);

const uint64_t DIFFICULTY_TARGET                             = 120; 
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; 
const size_t   DIFFICULTY_WINDOW_V2                          = 70; 
const size_t   DIFFICULTY_CUT                                = 60;  
const size_t   DIFFICULTY_LAG                                = 15;  
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 1000000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 2; 
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 2;  

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t UPGRADE_HEIGHT_V2                             = 23000;
const uint32_t UPGRADE_HEIGHT_V3                             = 4294967294;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 80;  
const uint32_t   UPGRADE_VOTING_WINDOW                       = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  
const uint32_t   UPGRADE_WINDOW                              = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "blockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "blockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} 

const char     CRYPTONOTE_NAME[]                             = "cadex";
const char     GENESIS_COINBASE_TX_HEX[]                     = "013c01ff0001ffffffff3f029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd088071210180e57f28475c7452792a706836cc3c0f02f3df964cfa07a901b8d71d12b66089"; 

const uint8_t  CURRENT_TRANSACTION_VERSION                   =  1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  50;    
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              = 27370;
const int      RPC_DEFAULT_PORT                              =  27375;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 16 * 1024 * 1024; 
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;     
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; 
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const char* const SEED_NODES[] = {
  "94.177.216.195:27370",
  "93.186.254.229:27370",
  "80.211.1.199:27370"
};

struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 

 {0,   "640aa8cb745417934d436d70cd4e5b4d0603f1e4acc4302f7301bd9b86736109"},
 {50,  "618681003bd668662094d42010128dd1a1f9641970dfa7e85eabcca0a12258ad"},
 {100, "92af6391b197dc1f416f6eb3814c1aa40e6145a872f177ae34a6e385f024e528"},
 {155, "9f8d6b8b49f5300a44f3592fb7a0eeb9dc5606c3aa6aa4bfaf88d3eb49db10bd"},
 {200, "c9a1932976a51a7a748a04e1919eff58e0e9c11ca66e0a61bb5033e161714546"},
 {300, "af096826cdccb97a8afd687296104f460dcdb5eadd7d473e54fc971ed3123a1f"},
 {400, "eec0995f5c32e0d1daf536a7335ec7cb5ca2b7c96862ac17395e84cc0f552ff7"},
 {1000, "99dc167928e47d3d5d9ef3d282134236bc56680c000916d98f9620a37cc416d4"},
 {2000, "bde4dd220cfc6c796a4711d7dc132a84581241d2c287c758a8512a05c49fc048"},
 {3000, "6a03f7a080c8d64da9a7db39a498239514c3ce14800e60e82afad5f27b22b4b9"},
 {4000, "b7e890f092dd7cc91b6d0b9e8e2a50af85960e5138f1ea0d31368936f1c616f6"},
 {6000, "295c9855d150ba3ce6e95e10bd97b1184a64c7f7c84c8f90af419660534854d4"}


};

} 

#define ALLOW_DEBUG_COMMANDS
