// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#ifndef NAPI_TW_NIMIQADDRESS_H
#define NAPI_TW_NIMIQADDRESS_H

#include <TrustWalletCore/TWNimiqAddress.h>
#include <TrustWalletCore/TWPublicKey.h>

#include <TrustWalletCore/TWBase.h>
#include "../TWNapi.h"

using namespace Napi;

External<TWNimiqAddress> Js_wallet_core_napi_NimiqAddress_createWithString(const CallbackInfo& info);

External<TWNimiqAddress> Js_wallet_core_napi_NimiqAddress_createWithPublicKey(const CallbackInfo& info);

void Js_wallet_core_napi_NimiqAddress_delete(const CallbackInfo& info);

Boolean Js_wallet_core_napi_NimiqAddress_equals(const CallbackInfo& info);

Boolean Js_wallet_core_napi_NimiqAddress_isValidString(const CallbackInfo& info);

String Js_wallet_core_napi_NimiqAddress_description(const CallbackInfo& info);

Uint8Array Js_wallet_core_napi_NimiqAddress_keyHash(const CallbackInfo& info);


#endif // NAPI_TW_NIMIQADDRESS_H