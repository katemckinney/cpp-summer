Learning log, June 14, 2025:

**What I thought:**
- `#define` behaves like a global constant
- The preprocessor might scan for all macros before compilation
- Assigning a value to a variable after declaring it\
 (e.g., `x = 5;` for `int x`, or `b1 = x < y;` for `bool b1`)\
 is  called "defining" the variable.

**What I learned:**
- `#define` is line-order sensitive
- It performs blind text substitution with no type or scope
- You can't use a macro name as a variable name later (compiler will fail)
- A program can fail in preprocessing (i.e. misuse of `#define`), compiling, or neither
- In C++, assigning a value after declaration is called assignment,\
  not definition. A variable is declared when its type and name \
  are introduced (e.g., `int x;`), and it's defined when memory is allocated\
  which usually happens at the same time as the declaration,\
  unless extern is used. 

Example:

int x, y;   // declaration AND definition of x and y (memory is allocated, but no values assigned yet)
x = 12;     // assignment
y = 13;     // assignment

versus

int x = 12; // declaration + definition + initialization (value assigned at the moment of definition)  

**Takeaway:**  
- Confusion regarding `#define` was resolved with step-by-step debugging
- Comments from week 1 and 2 inaccurately used "definition"\
  when "assignment" was correct
