// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

package com.trustwallet.core.app.blockchains.veil

import com.google.protobuf.ByteString
import com.trustwallet.core.app.utils.Numeric
import com.trustwallet.core.app.utils.toHexByteArray
import com.trustwallet.core.app.utils.toHexBytes
import com.trustwallet.core.app.utils.toHexBytesInByteString
import junit.framework.Assert.assertEquals
import org.junit.Test
import wallet.core.jni.VeilSigner
import wallet.core.jni.proto.Veil

class TestVeilSigner {

    init {
        System.loadLibrary("TrustWalletCore")
    }

    @Test
    fun VeilTransactionSigning() {
        // TODO: Finalize implementation

        //val transaction = Veil.TransactionPay.newBuilder()
        //    .setToAddress("...")
        //    .setAmount(...)
        //    ...
        //    .build()
        //val signingInput = Veil.SigningInput.newBuilder()
        //    ...
        //    .build()

        //val output: Veil.SigningOutput = VeilSigner.sign(signingInput)

        //assertEquals(
        //    "__EXPECTED_RESULT_DATA__",
        //    Numeric.toHexString(output.encoded.toByteArray())
        //)
    }
}
