# Pointers

## What is a pointer?

A Pointer is a **variable** that contains an **memory address**. The pointer can contain the numeric location of another variable.

## Pointer Syntax

A **pointer** delcaration uses the following syntax:

    type* name;
    int* pa;

To initialize a **pointer** do this:

    int a{2};
    int* pa = &a; // pa now points to a.
    
    English:
    integer pointer named pa is set to the address of a.


The **asterisk symbol(*)** (Known as a pointer variable) can be read as **"value pointed to by"** or **"set to the address"** of **a** in this case.

The **ampersand(&)** (known as address-of operator) gets back the **memory address** of **a** in hexadecimal form (0x..).


## Why use pointers?

The advantages of pointers are pointers can:

1. Reduce the code and improve performance. They are used to retrieve **strings, trees, arrays, structures, and functions**.

2. Allow us to return **multiple values from functions**.

3. Allow us to access a **memory address** in the computer’s memory.