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
export class WanchainAddress {

    private readonly nativeHandle: External;

    private constructor(nativeHandle: External) {
        this.nativeHandle = nativeHandle;
    }

    public static createWithNativeHandle(nativeHandle: External) {
        return new WanchainAddress(nativeHandle);
    }

    public getNativeHandle() {
        return this.nativeHandle;
    }

    public static createWithString(string: string): WanchainAddress {
        return new WanchainAddress(WalletCore.Js_wallet_core_napi_WanchainAddress_createWithString(string));
    }

    public static createWithKeyHash(keyHash: Uint8Array): WanchainAddress {
        return new WanchainAddress(WalletCore.Js_wallet_core_napi_WanchainAddress_createWithKeyHash(keyHash));
    }

    public static createWithPublicKey(publicKey: PublicKey): WanchainAddress {
        return new WanchainAddress(WalletCore.Js_wallet_core_napi_WanchainAddress_createWithPublicKey(publicKey.getNativeHandle()));
    }

    public delete(): void {
        WalletCore.Js_wallet_core_napi_WanchainAddress_delete(this.getNativeHandle());
    }

    public static equals(lhs: WanchainAddress, rhs: WanchainAddress): boolean {
        return WalletCore.Js_wallet_core_napi_WanchainAddress_equals(lhs.getNativeHandle(), rhs.getNativeHandle());
    }

    public static isValidString(string: string): boolean {
        return WalletCore.Js_wallet_core_napi_WanchainAddress_isValidString(string);
    }

    public description(): string {
        return WalletCore.Js_wallet_core_napi_WanchainAddress_description(this.getNativeHandle());
    }

    public keyHash(): Uint8Array {
        return WalletCore.Js_wallet_core_napi_WanchainAddress_keyHash(this.getNativeHandle());
    }

}
