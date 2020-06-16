namespace Solution {
    open Microsoft.Quantum.Intrinsic;

    operation Solve (unitary : (Qubit => Unit is Adj+Ctl)) : Int {
        using (q = Qubit()) {
            H(q);
            unitary(q);
            H(q);
            let ans = M(q);
            Reset(q);
            return ans == Zero ? 0 | 1;
        }
    }
}