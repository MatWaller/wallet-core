// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "../veil/Address.h"

#include <TrustWalletCore/TWPublicKey.h>
#include <TrustWalletCore/TWveilAddress.h>

using namespace TW;
using namespace TW::veil;

// TODO: Adjust implementations below

bool TWveilAddressEqual(struct TWveilAddress *_Nonnull lhs, struct TWveilAddress *_Nonnull rhs) {
    return lhs->impl == rhs->impl;
}

bool TWveilAddressIsValidString(TWString *_Nonnull string) {
    auto s = reinterpret_cast<const std::string*>(string);
    return Address::isValid(*s);
}

struct TWveilAddress *_Nullable TWveilAddressCreateWithString(TWString *_Nonnull string) {
    auto s = reinterpret_cast<const std::string*>(string);
    try {
        const auto address = Address(*s);
        return new TWveilAddress{ std::move(address) };
    } catch (...) {
        return nullptr;
    }
}

struct TWveilAddress *_Nonnull TWveilAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey) {
    return new TWveilAddress{ Address(publicKey->impl) };
}

void TWveilAddressDelete(struct TWveilAddress *_Nonnull address) {
    delete address;
}

TWString *_Nonnull TWveilAddressDescription(struct TWveilAddress *_Nonnull address) {
    const auto string = address->impl.string();
    return TWStringCreateWithUTF8Bytes(string.c_str());
}
