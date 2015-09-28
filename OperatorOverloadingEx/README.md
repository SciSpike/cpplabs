Exercise Description:
=====================

For the classes Shape and Rectangle, overload:

* the input stream operator
* the output stream operator
* the comparison operator

Goal:

<pre>
 Rectangle r1, r2;
 cin >> r1;
 cin >> r2;
 if (r1 == r2)
    cout << r1 << “ and “ << r2 << “ are the same!” << endl;
 else
    cout << r1 << “ and “ << r2 << “ are not the same!” << endl;
</pre>

Caution: the lab uses inheritance! Try either approach:

* easier: write derived class op overloads only, and access the base member data directly (it’s declared protected)
* harder: write base and derived class op overloads, and call the base functions explicitly from the derived class

