namespace Solution {
    open Microsoft.Quantum.Arithmetic;
    open Microsoft.Quantum.Intrinsic;

    operation Increment (register : LittleEndian) : Unit is Adj+Ctl {
		let q = register!;
		let n = Length(q);
        for (i in n-1..-1..0)
        {
            (Controlled X)(q[0..i-1], q[i]);
        }
    }

    operation Solve (register : LittleEndian) : Unit is Adj+Ctl {
        Adjoint Increment(register);
    }
}