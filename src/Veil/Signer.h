// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Data.h"
#include "../PrivateKey.h"

namespace TW::Veil {

/// Helper class that performs Veil transaction signing.
class Signer {
public:
    // TODO: Finalize class definition

    /// Hide default constructor
    Signer() = delete;

    /// Signs a Proto::SigningInput transaction
    //static Proto::SigningOutput sign(const Proto::SigningInput& input) noexcept;

    /// Signs the given transaction.
    //static Data sign(const PrivateKey& privateKey, Transaction& transaction) noexcept;
};

} // namespace TW::Veil

/// Wrapper for C interface.
struct TWVeilSigner {
    TW::Veil::Signer impl;
};
