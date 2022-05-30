## fill

Sets `val` as the value for all the elements in the array object. `val` is the value to fill the array with.

## swap

Exchanges the content of the array by the content of `x`, which is another array object of the same `type` (including the same `size`).

After the call to this member function, the elements in this container are those which were in x before the call, and the elements of `x` are those which were in this.

Unlike with the `swap` member functions of the other containers, this member function operates in linear time by performing as many individual swap operations between the individual elements as their size.