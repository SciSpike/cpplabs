Exercise Description:
=====================

For the classes Shape and Rectangle, overload:

* the input stream operator
* the output stream operator
* the comparison operator

Goal:

```C++
 Rectangle r1, r2;
 cin >> r1;
 cin >> r2;
 if (r1 == r2)
    cout << r1 << “ and “ << r2 << “ are the same!” << endl;
 else
    cout << r1 << “ and “ << r2 << “ are not the same!” << endl;
```

Caution: the lab uses inheritance! Try either approach:

* easier: write derived class op overloads only, and access the base member data directly (it’s declared protected)
* harder: write base and derived class op overloads, and call the base functions explicitly from the derived class

If you decide to go for the harder approach, you'll have to trick the compile to see the rectangle as a shape. 
This can be done by casting the Rectangle into a Shape inside the stream operator for the rectangle.

E.g.:
<pre>
    cout << ((const Shape&) theRectangle)
</pre>
