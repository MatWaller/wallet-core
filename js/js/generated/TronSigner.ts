// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

import { WalletCore } from '../WalletCore';
import { TW } from '../../proto/TrustWalletCore';
import * as Long from 'long';

// Class
export class TronSigner {

    public static sign(input: TW.Tron.Proto.SigningInput): TW.Tron.Proto.SigningOutput {
        return TW.Tron.Proto.SigningOutput.decode(WalletCore.Js_wallet_core_napi_TronSigner_sign(
                  TW.Tron.Proto.SigningInput.encode(input).finish()));
    }

}
