To compare the performance difference between pass by value and pass by 
reference. Run the pass_by_val version provided and time it.

In main.cpp, change the number of iterations from 10000 to 1 and
compile with COUNT_TEMP flag on (or edit matrix.cpp to comment out the
#ifdef COUNT_TEMP) , this will print out the number of times the copy
constructor was called:

You should see that in one iteration, the copy constructor was called three
times. 

Now, modify this code to do pass by reference.

You should see that the copy constructor was not called at all.

Now change the number of iterations back to 10000 and recompile:

And re-run pass_by_val and pass_by_ref and you should now appreciate
the benefits of pass by reference!
