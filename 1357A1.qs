namespace Solution {
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;

    operation Solve (unitary : (Qubit[] => Unit is Adj+Ctl)) : Int {
        using(qs = Qubit[2]) {
            X(qs[0]);
            unitary(qs);
            let ans = M(qs[1]);
            ResetAll(qs);
            return ans == Zero ? 1 | 0;
        }
    }
}