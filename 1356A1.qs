namespace Solution {
    open Microsoft.Quantum.Intrinsic;

    operation Solve (unitary : (Qubit => Unit is Adj+Ctl)) : Int {
        using (q = Qubit()) {
            unitary(q);
            let ans = M(ans);
            Reset(q);
            return (ans == Zero)? 0 | 1;
        }
    }
}