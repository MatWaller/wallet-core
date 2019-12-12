// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include <TrustWalletCore/TWveilSigner.h>

#include "../veil/Signer.h"

using namespace TW;
using namespace TW::veil;

/*
TW_veil_Proto_SigningOutput TWveilSignerSign(TW_veil_Proto_SigningInput data) {
    // TODO: Finalize implementation

    //Proto::SigningInput input;
    //input.ParseFromArray(TWDataBytes(data), static_cast<int>(TWDataSize(data)));
    //
    //auto protoOutput = Signer::sign(input);
    //
    //auto serialized = protoOutput.SerializeAsString();
    //return TWDataCreateWithBytes(reinterpret_cast<const uint8_t *>(serialized.data()), serialized.size());
}
*/
