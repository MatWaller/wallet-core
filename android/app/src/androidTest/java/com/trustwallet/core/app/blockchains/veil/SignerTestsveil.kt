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
import wallet.core.jni.veilSigner
import wallet.core.jni.proto.veil

class TestveilSigner {

    init {
        System.loadLibrary("TrustWalletCore")
    }

    @Test
    fun veilTransactionSigning() {
        // TODO: Finalize implementation

        //val transaction = veil.TransactionPay.newBuilder()
        //    .setToAddress("...")
        //    .setAmount(...)
        //    ...
        //    .build()
        //val signingInput = veil.SigningInput.newBuilder()
        //    ...
        //    .build()

        //val output: veil.SigningOutput = veilSigner.sign(signingInput)

        //assertEquals(
        //    "__EXPECTED_RESULT_DATA__",
        //    Numeric.toHexString(output.encoded.toByteArray())
        //)
    }
}
