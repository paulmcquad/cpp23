1. Use Containers in Modern C++ - (std::vector and std::string, and occasionally std::array.)

[Wednesday 31 July 2024]

<InPhase> paulmcquad: First rule of modern C++ and purging raw pointers...  Embrace containers:  https://godbolt.org/z/fE18cvW86
<InPhase> paulmcquad: Most of what is raw pointers in C should be containers in C++, where this will most often be std::vector and std::string, and occasionally std::array.
<InPhase> paulmcquad: Smart pointers then come in as a more specialized and rarely used modality for dynamically managed memory, for items that don't fit reasonably into a container type.