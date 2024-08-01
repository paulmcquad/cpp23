# Smart Pointers

## What is a Smart pointer?

It's a type whose values can be used like pointers, but which provides the additional feature of automatic memory management: When a smart pointer is no longer in use, the memory it points to is deallocated 

## Using Smart Pointers

It's best to use Smart Pointers over Normal Raw Pointers.
There are 4 types of Smart pointers.

1. auto_ptr // Removed in C++17
2. unique_ptr
3. shared_ptr
4. weak_ptr