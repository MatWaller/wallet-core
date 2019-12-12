// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWveilCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeVEIL));
    auto txId = TWStringCreateWithUTF8Bytes("123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeVEIL, txId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeVEIL));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeVEIL));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeVEIL), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypeVEIL));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeVEIL));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeVEIL));
    assertStringsEqual(symbol, "Veil");
    assertStringsEqual(txUrl, "https://explorer.veil-project.com/tx/123");
    assertStringsEqual(id, "veil");
    assertStringsEqual(name, "veil");
}
