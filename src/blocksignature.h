// Copyright (c) 2015-2018 The PIVX developers
// Copyright (c) 2018-2019 The DAPScoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DAPScoin_BLOCKSIGNATURE_H
#define DAPScoin_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //DAPScoin_BLOCKSIGNATURE_H
