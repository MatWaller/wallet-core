// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "HexCoding.h"
#include "PrivateKey.h"
#include "PublicKey.h"
#include "Veil/Address.h"

#include <gtest/gtest.h>
#include <TrustWalletCore/TWHDWallet.h>

using namespace TW;
using namespace TW::Veil;

TEST(Address, veil_FromPublicKey) {

    auto privateKey = PrivateKey(parse_hex("5f334c90de22f659ff3c170e5b3739512e1e42512e02bb94a908e12166433ffa"));

    auto publicKeyData = privateKey.getPublicKey(TWPublicKeyTypeSECP256k1);

    ASSERT_EQ(hex(publicKeyData.bytes.begin(), publicKeyData.bytes.end()), "03bc19c236ea2a995ce639240287da4e9b8bb661f16da6eb1db51d07328fbe0967");

    auto publicKey = PublicKey(publicKeyData);

    auto address = Address(publicKey);
        ASSERT_EQ(address.string(), "bv18u3qvjymnustsxc2wz4amzn2fnqkympf90s45z");
}

TEST(Address, veil_Valid) {
    ASSERT_TRUE(Address::isValid("bv1u097d5pktha3hr9ncgml5urqnpt47nr07fe7ch"));
}

TEST(Address, veil_Invalid) {
    ASSERT_FALSE(Address::isValid("bvxsk6jryyqjfhp5dhc55tc9jtckygx0eph6dd02"));
}

