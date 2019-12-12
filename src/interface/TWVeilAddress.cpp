// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "../Veil/Address.h"

#include <TrustWalletCore/TWHash.h>
#include <TrustWalletCore/TWHRP.h>
#include <TrustWalletCore/TWPublicKey.h>
#include <TrustWalletCore/TWVeilAddress.h>

using namespace TW;
using namespace TW::Veil;

// TODO: Adjust implementations below

bool TWVeilAddressEqual(struct TWVeilAddress *_Nonnull lhs, struct TWVeilAddress *_Nonnull rhs) {
    return lhs->impl == rhs->impl;
}

bool TWVeilAddressIsValidString(TWString *_Nonnull string) {
    auto s = reinterpret_cast<const std::string*>(string);
    return Address::isValid(*s);
}

struct TWVeilAddress *_Nullable TWVeilAddressCreateWithString(TWString *_Nonnull string) {
    auto s = reinterpret_cast<const std::string*>(string);
    Address address;
    if (!Address::decode(*s, address)) {
        return nullptr;
    }

    return new TWVeilAddress{ address };
}

struct TWVeilAddress *_Nonnull TWVeilAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey) {
    return new TWVeilAddress{ Address(publicKey->impl) };
}

void TWVeilAddressDelete(struct TWVeilAddress *_Nonnull address) {
    delete address;
}

TWString *_Nonnull TWVeilAddressDescription(struct TWVeilAddress *_Nonnull address) {
    const auto string = address->impl.string();
    return TWStringCreateWithUTF8Bytes(string.c_str());
}

enum TWHRP TWVeilAddressHRP(struct TWVeilAddress *_Nonnull address) {
    return hrpForString(address->impl.getHrp().c_str());
}

TWData *_Nonnull TWVeilAddressKeyHash(struct TWVeilAddress *_Nonnull address) {
    return TWDataCreateWithBytes(address->impl.getKeyHash().data(), address->impl.getKeyHash().size());
}
