# Complex
This projects creates a complex data type for c++ users

Guide:
  1 . Download Complex.h and include it into your source file
  2 . Object creation is enabled by 2 constructors :
      a. Default -> initializes number with 0+0j
      b. Parameterized -> Takes 2 parameters for real and imaginary parts respectively
  3 . Both parameters are of range double
  4 . The following operators are supported :
      a . '+'
      b . '-'
      c . '*'
      d . '/'
      e . '+='
      f. '-='
      g. '*='
      h. '/='
      i. '-' (unary)
 5 . Following member functions are provided :
      a . getreal() ->  Returns real part of number
      b . getcomplex() -> Returns complex part of number
 6 . I/O support :
    a . As input it takes 2 numbers and assigns them to real and complex parts respectively through std::cin .
    b . Output is enabled through std::cout .
