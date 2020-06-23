namespace Solution {
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;

    operation Solve (unitary : (Qubit[] => Unit is Adj+Ctl)) : Int {
        using(q = Qubit()) {
            unitary(q);
            Z(q);
            unitary(q);
            let ans = M(q);
            Reset(q);
            return (ans == Zero)? 0 | 1;
        }
    }
}