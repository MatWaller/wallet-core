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

import { PublicKey } from './PublicKey';

// Class
export class IocoinAddress {

    private readonly nativeHandle: External;

    private constructor(nativeHandle: External) {
        this.nativeHandle = nativeHandle;
    }

    public static createWithNativeHandle(nativeHandle: External) {
        return new IocoinAddress(nativeHandle);
    }

    public getNativeHandle() {
        return this.nativeHandle;
    }

    public static createWithString(string: string): IocoinAddress {
        return new IocoinAddress(WalletCore.Js_wallet_core_napi_IocoinAddress_createWithString(string));
    }

    public static createWithPublicKey(publicKey: PublicKey, prefix: number): IocoinAddress {
        return new IocoinAddress(WalletCore.Js_wallet_core_napi_IocoinAddress_createWithPublicKey(publicKey.getNativeHandle(), prefix));
    }

    public delete(): void {
        WalletCore.Js_wallet_core_napi_IocoinAddress_delete(this.getNativeHandle());
    }

    public static equals(lhs: IocoinAddress, rhs: IocoinAddress): boolean {
        return WalletCore.Js_wallet_core_napi_IocoinAddress_equals(lhs.getNativeHandle(), rhs.getNativeHandle());
    }

    public static isValidString(string: string): boolean {
        return WalletCore.Js_wallet_core_napi_IocoinAddress_isValidString(string);
    }

    public description(): string {
        return WalletCore.Js_wallet_core_napi_IocoinAddress_description(this.getNativeHandle());
    }

}
