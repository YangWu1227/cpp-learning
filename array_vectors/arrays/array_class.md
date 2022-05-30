# Array class

Arrays are fixed-size sequence containers: they hold a specific number of elements ordered in a strict linear sequence.

Internally, an array does not keep any data other than the elements it contains (not even its size, which is a template parameter, fixed on compile time). It is as efficient in terms of storage size as an ordinary array declared with the language's bracket syntax ([]). This class merely adds a layer of member and global functions to it, so that arrays can be used as standard containers.

Unlike the other standard containers, arrays have a fixed size and do not manage the allocation of its elements through an allocator: they are an aggregate type encapsulating a fixed-size array of elements. Therefore, they cannot be expanded or contracted dynamically.

<br>

# Properties

## Sequence

Elements in sequence containers are ordered in a strict linear sequence. Individual elements are accessed by their position in this sequence.

## Contiguous storage

The elements are stored in contiguous memory locations, allowing constant time random access to elements.

## Fixed-size aggregate

The container uses implicit constructors and destructors to allocate the required space statically. Its size is compile-time constant. No memory or time overhead.

<br>

# Template parameters

## T

Type of the elements contained. Aliased as member type `array::value_type`.

## N

Size of the array, in terms of number of elements.
