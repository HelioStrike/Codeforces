namespace Solution {
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;

    operation Solve (unitary : (Qubit[] => Unit is Adj+Ctl)) : Int {
        using(qs = Qubit[2]) {
            X(qs[1]);
            unitary(qs);
            let bit0 = M(qs[0]);
            let bit1 = M(qs[1]);
            ResetAll(qs);
            if(bit0 == One and bit1 == Zero) {
                //SWAP
                return 3;
            } elif (bit0 == One and bit1 == One) {
                //CNOT2
                return 2;
            } else {
                X(qs[0]);
                unitary(qs);
                let bit3 = M(qs[1]);
                ResetAll(qs);
                if(bit3 == One) {
                    //CNOT1
                    return 1;
                } else {
                    //Identity
                    return 0;
                }
            }
        }
    }
}