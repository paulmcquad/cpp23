# Strings library

**[string](https://en.cppreference.com/w/cpp/header/string)** - The header introduces **string types, character traits** and a set of **converting functions.**

## Class templates

C++ **class templates** are **classes** that work with different **data types**.

The **[string header](https://en.cppreference.com/w/cpp/header/string)** contains the following 2 class templates:

**[std::basic_string](https://en.cppreference.com/w/cpp/string/basic_string)** - **stores and manipulates sequences** of character-like objects.
<!--
**[std::basic_string_view](https://en.cppreference.com/w/cpp/string/basic_string_view)** - describes an **object** that can refer to a **constant contiguous sequence.**
-->
**[std::char_traits](https://en.cppreference.com/w/cpp/string/char_traits)** - **abstracts basic character and string operations** for a **given character type.**
<!--

## Header: Non-Member Functions

1. **Non-member functions** can appear outside of a **class.**
2. **Non-member functions** must be **declared** before the **member functions.**

-->

## Header: Member Functions

### Numberic conversions

#### Convert from strings:

[stoi, stol, stoll](https://en.cppreference.com/w/cpp/string/basic_string/stol) - converts a **string** to an **integer, long integer and a long long integer.**

[stoul, stoull](https://en.cppreference.com/w/cpp/string/basic_string/stoul) - converts a **string** to an **unsigned integer and unsigned long long integer.**

[stof stod stold](https://en.cppreference.com/w/cpp/string/basic_string/stof) -  converts a **string** to a **float, to a double and long double.**

#### Convert to strings:

[to_string](https://en.cppreference.com/w/cpp/string/basic_string/to_string), [to_wstring](https://en.cppreference.com/w/cpp/string/basic_string/to_wstring) - converts an **integral or floating-point value** to **string** or **wstring.**