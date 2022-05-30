# Member functions

```cpp
std::array<int, 5> myarray = { 2, 16, 77, 34, 50 };
```

## size

Returns the number of elements in the array container.

The size of an array object is always equal to the second template parameter used to instantiate the array template class (N).

Unlike the language operator `sizeof`, which returns the size in bytes, this member function returns the size of the array in terms of number of elements.

```cpp
myarray.size()
```

## max_size

Returns the maximum number of elements that the array container can hold.

The `max_size` of an array object, just like its size, is always equal to the second template parameter used to instantiate the array template class (N).

The difference between `size` and `max_size` is conceptual. `size` is the current number of elements in the container, and `max_size` is a theoretical upper bound to how many elements the container could have. Since the number of elements in `std::array` is constant, the current number of elements is exactly the same as the number of elements there can ever be. **For other containers, there may be a practical difference.**

For the array class, `max_size` exists so that `std::array` conforms to the `Container` concept, but not that there is any practical difference.

```cpp
myarray.max_size()
```

## empty

Test whether array is empty. Returns a `bool` value indicating whether the array container is empty, i.e. whether its `size` is 0.

This function does not modify the content of the array in any way.

```cpp
myarray.empty() 
```