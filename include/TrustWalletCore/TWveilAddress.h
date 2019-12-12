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

/// Represents a veil address.
TW_EXPORT_CLASS
struct TWveilAddress;

/// Compares two addresses for equality.
TW_EXPORT_STATIC_METHOD
bool TWveilAddressEqual(struct TWveilAddress *_Nonnull lhs, struct TWveilAddress *_Nonnull rhs);

/// Determines if the string is a valid veil address.
TW_EXPORT_STATIC_METHOD
bool TWveilAddressIsValidString(TWString *_Nonnull string);

/// Creates an address from a string representaion.
TW_EXPORT_STATIC_METHOD
struct TWveilAddress *_Nullable TWveilAddressCreateWithString(TWString *_Nonnull string);

/// Creates an address from a public key.
TW_EXPORT_STATIC_METHOD
struct TWveilAddress *_Nonnull TWveilAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey);

/// Delete address object
TW_EXPORT_METHOD
void TWveilAddressDelete(struct TWveilAddress *_Nonnull address);

/// Returns the address string representation.
TW_EXPORT_PROPERTY
TWString *_Nonnull TWveilAddressDescription(struct TWveilAddress *_Nonnull address);

TW_EXTERN_C_END
