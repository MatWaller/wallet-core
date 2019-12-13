// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "TWBase.h"
#include "TWData.h"
#include "TWHRP.h"
#include "TWString.h"

// TODO: Adjust definitions below

TW_EXTERN_C_BEGIN

struct TWPublicKey;

/// Represents a Veil address.
TW_EXPORT_CLASS
struct TWVeilAddress;

/// Compares two addresses for equality.
TW_EXPORT_STATIC_METHOD
bool TWVeilAddressEqual(struct TWVeilAddress *_Nonnull lhs, struct TWVeilAddress *_Nonnull rhs);

/// Determines if the string is a valid Veil address.
TW_EXPORT_STATIC_METHOD
bool TWVeilAddressIsValidString(TWString *_Nonnull string);

/// Creates an address from a string representaion.
TW_EXPORT_STATIC_METHOD
struct TWVeilAddress *_Nullable TWVeilAddressCreateWithString(TWString *_Nonnull string);

/// Creates an address from a public key.
TW_EXPORT_STATIC_METHOD
struct TWVeilAddress *_Nonnull TWVeilAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey);

/// Delete address object
TW_EXPORT_METHOD
void TWVeilAddressDelete(struct TWVeilAddress *_Nonnull address);

/// Returns the address string representation.
TW_EXPORT_PROPERTY
TWString *_Nonnull TWVeilAddressDescription(struct TWVeilAddress *_Nonnull address);

TW_EXTERN_C_END
