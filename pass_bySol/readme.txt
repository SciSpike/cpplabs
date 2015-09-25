To compare the performance difference between pass by value and pass by 
reference, compile the code twice, once with the PASS_BY_REF flag turned
on and the other without:

1. In a DOS window, execute VC_DIR\bin\VCVARS32.BAT
  where VC_DIR is the directory where Visual C++ is installed.
  For example, the default installation directory for Visual C++ 6.0
  in Visual Studio 6.0 is:
    C:/Program Files/Microsoft Visual Studio/VC98

2. Compile without the PASS_BY_REF flag:

  cl -o by_val -GX -I.. main.cpp matrix.cpp ../util/timer.cpp

3. Compile with the PASS_BY_REF flag:

  cl -o by_ref -DPASS_BY_REF -GX -I.. main.cpp matrix.cpp ../util/timer.cpp 

4. Execute by_val and by_ref to see the performance difference

------------------------------------------------------------------------------

Next, in main.cpp, change the number of iterations from 10000 to 1 and compile
with COUNT_TEMP flag on, this will print out the number of times the copy 
constructor was called:

  cl -o by_val -DCOUNT_TEMP -GX -I.. main.cpp matrix.cpp ../util/timer.cpp 

You should see that in one iteration, the copy constructor was called three
times. Now recompile with the PASS_BY_REF flag turned on:

  cl -o by_ref -DCOUNT_TEMP -DPASS_BY_REF -GX -I.. main.cpp matrix.cpp ../util/timer.cpp 

You should see that the copy constructor was not called at all.

Now change the number of iterations back to 10000 and recompile:

  cl -o by_val -GX -I.. main.cpp matrix.cpp ../util/timer.cpp 
  cl -o by_ref -DPASS_BY_REF -GX -I.. main.cpp matrix.cpp ../util/timer.cpp 

And re-run by_val and by_ref and you should now appreciate the benefits of
pass by reference!
