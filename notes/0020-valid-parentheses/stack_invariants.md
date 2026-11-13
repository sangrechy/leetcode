# Stack Invariants
- Every closing bracket must match the most recently opened bracket.
- If stack is empty when receiving closing bracket -> immediately invalid.
- At end of loop, `len(stack) == 0` must hold true.