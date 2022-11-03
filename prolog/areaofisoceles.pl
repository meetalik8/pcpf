area:-
   write('Enter the length of 1st side of isoceles triangle:'),
    read(S1),
    write('Enter the length of the equal sides of isoceles triangle:'),
    read(S2),
    write('The area of the triangle is :'),
    S is (S1+S1+S2)/2,
    A is (sqrt(S*(S-S1)*(S-S2)*(S-S2))),
    write(A).
