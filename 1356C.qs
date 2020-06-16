namespace Solution {
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;
    
    operation Solve (qs : Qubit[]) : Unit {
        using (q = Qubit()) {
            repeat {
                ApplyToEach(H, qs);
                (ControlledOnInt(0, X))(qs, q);
                let res = M(q);
            } until (res == Zero)
            fixup {
                X(q);
            }
        }
    }
}