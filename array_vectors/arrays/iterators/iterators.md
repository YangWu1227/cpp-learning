# Member functions

```cpp
std::array<int, 5> myarray = { 2, 16, 77, 34, 50 };
```

## Iterators

### begin

Returns an iterator pointing to the first element in the array container.

Unlike member `array::front`, which returns a reference to the first element, this function returns a random access iterator pointing to it.

```cpp
myarray.begin()
```

### end

Returns an iterator pointing to the past-the-end element in the array container.

The *past-the-end* element is the theoretical element that would follow the last element in the array. It does not point to any element, and thus shall not be dereferenced.

Because the ranges used by functions of the standard library do not include the element pointed by their closing iterator, this function is often used in combination with array::begin to specify a range including all the elements in the container.

```cpp
myarray.end()
```

### rbegin

Returns a reverse iterator pointing to the last element in the array container.

rbegin points to the element right before the one that would be pointed to by member `array::end`, and so it is not necessarily the same as `array::end`.

```cpp
myarray.rbegin()
```

### rend

Returns a reverse iterator pointing to the theoretical element preceding the first element in the array (which is considered its reverse end).

The range between `array::rbegin` and `array::rend` contains all the elements of the array (in reverse order).

```cpp
myarray.rend()
```

### cbegin

Returns a `const_iterator` pointing to the first element in the array container.

A `const_iterator` is an iterator that points to const content. This iterator can be increased and decreased (unless it is itself also `const`), just like the iterator returned by `array::begin`, but **it cannot be used to modify the contents it points to, even if the array object is not itself** `const`.

```cpp
myarray.cbegin()
```

### cend

Returns a const_iterator pointing to the past-the-end element in the array container.

```cpp
myarray.cend()
```

### crbegin

Returns a `const_reverse_iterator` pointing to the last element in the array container.

A const_reverse_iterator is an iterator that points to const content and iterates in reverse order.

```cpp
myarray.crbegin()
```

### crend

Returns a `const_reverse_iterator` pointing to the theoretical element preceding the first element in the vector, which is considered its reverse end.

```cpp
myarray.crend()
```