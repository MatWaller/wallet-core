// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "Signer.h"
#include "Address.h"
#include "../PublicKey.h"

using namespace TW;
using namespace TW::veil;

/*
Proto::SigningOutput Signer::sign(const Proto::SigningInput &input) noexcept {
    // TODO: Check and finalize implementation

    auto protoOutput = Proto::SigningOutput();
    auto key = PrivateKey(Data(input.private_key().begin(), input.private_key().end()));
    auto pubkey = key.getPublicKey(TWPublicKeyTypeED25519);
    auto from = Address(pubkey);

    // ...
    
    return protoOutput;
}

Data Signer::sign(const PrivateKey &privateKey, Transaction &transaction) noexcept {
    // TODO: Finalize implementation

    return Data();
}
*/
