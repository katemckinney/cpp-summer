Learning log, June 14, 2025:

**What I thought:**
- `#define` behaves like a global constant
- The preprocessor might scan for all macros before compilation

**What I learned:**
- `#define` is line-order sensitive
- It performs blind text substitution with no type or scope
- You can't use a macro name as a variable name later (compiler will fail)
- A program can fail in preprocessing, compiling, or neither.

**Takeaway:**  
Confusion here was resolved with step-by-step debugging.
