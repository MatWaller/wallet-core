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


TEST(TWVeilCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeVeil));
    auto txId = TWStringCreateWithUTF8Bytes("123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeVeil, txId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeVeil));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeVeil));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeVeil), 8);
    ASSERT_EQ(TWBlockchainVeil, TWCoinTypeBlockchain(TWCoinTypeVeil));
    ASSERT_EQ(0x5, TWCoinTypeP2shPrefix(TWCoinTypeVeil));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeVeil));
    assertStringsEqual(symbol, "Veil");
    assertStringsEqual(txUrl, "https://explorer.veil-project.com/tx/123");
    assertStringsEqual(id, "veil");
    assertStringsEqual(name, "Veil");
}

