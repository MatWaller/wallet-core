// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#include <napi.h>
#include <string.h>

#include <TrustWalletCore/TWIocoinAddress.h>
#include <TrustWalletCore/TWPublicKey.h>

#include "../TWNapi.h"
#include "IocoinAddress.h"

using namespace Napi;

External<TWIocoinAddress> Js_wallet_core_napi_IocoinAddress_createWithString(const CallbackInfo& info) {
    Env env = info.Env();
    TWString *stringString = TWStringCreateWithJsString(info[0].As<String>());
    struct TWIocoinAddress *instance = TWIocoinAddressCreateWithString(stringString);
    TWStringDelete(stringString);
    if (instance == nullptr) {
        Error::New(env, "Invalid input").ThrowAsJavaScriptException();
    }
    return External<TWIocoinAddress>::New(env, instance, [](Env _env, void* data) {
        TWIocoinAddressDelete(reinterpret_cast<TWIocoinAddress *>(data));
    });
}

External<TWIocoinAddress> Js_wallet_core_napi_IocoinAddress_createWithPublicKey(const CallbackInfo& info) {
    Env env = info.Env();
    struct TWPublicKey *publicKeyInstance = info[0].As<External<TWPublicKey>>().Data();
    uint8_t prefix = info[1].As<Number>().Int64Value();
    struct TWIocoinAddress *instance = TWIocoinAddressCreateWithPublicKey(publicKeyInstance, prefix);
    return External<TWIocoinAddress>::New(env, instance, [](Env _env, void* data) {
        TWIocoinAddressDelete(reinterpret_cast<TWIocoinAddress *>(data));
    });
}

void Js_wallet_core_napi_IocoinAddress_delete(const CallbackInfo& info) {
    TWIocoinAddressDelete(info[0].As<External<TWIocoinAddress>>().Data());
}

Boolean Js_wallet_core_napi_IocoinAddress_equals(const CallbackInfo& info) {
    Env env = info.Env();
    struct TWIocoinAddress *lhsInstance = info[0].As<External<TWIocoinAddress>>().Data();
    struct TWIocoinAddress *rhsInstance = info[1].As<External<TWIocoinAddress>>().Data();
    Boolean resultValue = Boolean::New(env, TWIocoinAddressEqual(lhsInstance, rhsInstance));
    return resultValue;
}

Boolean Js_wallet_core_napi_IocoinAddress_isValidString(const CallbackInfo& info) {
    Env env = info.Env();
    TWString *stringString = TWStringCreateWithJsString(info[0].As<String>());
    Boolean resultValue = Boolean::New(env, TWIocoinAddressIsValidString(stringString));
    TWStringDelete(stringString);
    return resultValue;
}

String Js_wallet_core_napi_IocoinAddress_description(const CallbackInfo& info) {
    Env env = info.Env();
    struct TWIocoinAddress *instance = info[0].As<External<TWIocoinAddress>>().Data();

    TWString* twResult = TWIocoinAddressDescription(instance);
    String result = TWStringJsString(&env, twResult);
    return result;
}

