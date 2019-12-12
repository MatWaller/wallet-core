// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//


import { WalletCore } from '../WalletCore';

export enum HRP {
    UNKNOWN = 0,
    BITCOIN = 1,
    LITECOIN = 2,
    VIACOIN = 3,
    BITCOINCASH = 4,
    BINANCE = 5,
    COSMOS = 6,
    GROESTLCOIN = 7,
    QTUM = 8,
    ZILLIQA = 9
}

export class HRPUtil {

    public static toString(hrp: HRP): string {
        switch (hrp) {
            case HRP.UNKNOWN: return '';
            case HRP.BITCOIN: return 'bc';
            case HRP.LITECOIN: return 'ltc';
            case HRP.VIACOIN: return 'via';
            case HRP.BITCOINCASH: return 'bitcoincash';
            case HRP.BINANCE: return 'bnb';
            case HRP.COSMOS: return 'cosmos';
            case HRP.GROESTLCOIN: return 'grs';
            case HRP.QTUM: return 'qtum';
            case HRP.ZILLIQA: return 'zilliqa';
            default: return '';
        }
    }

}
