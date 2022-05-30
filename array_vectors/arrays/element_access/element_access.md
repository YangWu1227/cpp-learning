## operator []

Returns a `reference` to the element at position `n` in the array.

A similar member function, `array::at`, has the same behavior as this operator function, except that `array::at` checks the array bounds and signals whether `n` is out of range by throwing an exception.

## at

Returns a reference to the element `at` position `n` in the array.

The function automatically checks whether `n` is within the bounds of valid elements in the container, throwing an `out_of_range` exception if it is not (i.e., if `n` is greater than, or equal to, its `size`). This is in contrast with member operator[], that does not check against bounds.

## front

Returns a reference to the first element in the array.

Unlike member `array::begin`, which returns an iterator to this same element, this function returns a **direct reference**.

Calling this function on an empty container causes `undefined` behavior.

## back

Returns a reference to the last element in the array container.

## data

Returns a pointer to the first element in the array object. Because elements in the array are stored in contiguous storage locations, the pointer retrieved can be offset to access any element in the array.

## get

Returns a reference to the Ith element of array arr.

### Parameters

* I - Position of an element in the array, with 0 as the position of the first element.
* T - Type of elements contained in the array (generally obtained implicitly from arr).
* N - Size of the array, in number of elements (generally obtained implicitly from arr).

This overload of tuple's homonym function get is provided so that array objects can be treated as tuples. For that purpose, header `<array>` also overloads tuple_size and tuple_element types with the appropriate members defined.

```cpp
std::get<I>(myarray)
```