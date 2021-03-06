/*
  Copyright (c) 2017 Microsoft Corporation
  Author: Lev Nachmanson
*/
#include "util/lp/numeric_pair.h"
#include "util/lp/binary_heap_priority_queue.hpp"
namespace lean {
template binary_heap_priority_queue<int>::binary_heap_priority_queue(unsigned int);
template unsigned binary_heap_priority_queue<int>::dequeue();
template void binary_heap_priority_queue<int>::enqueue(unsigned int, int const&);
template void binary_heap_priority_queue<double>::enqueue(unsigned int, double const&);
template void binary_heap_priority_queue<mpq>::enqueue(unsigned int, mpq const&);
template void binary_heap_priority_queue<int>::remove(unsigned int);
template unsigned binary_heap_priority_queue<numeric_pair<mpq> >::dequeue();
template unsigned binary_heap_priority_queue<double>::dequeue();
template unsigned binary_heap_priority_queue<mpq>::dequeue();
template void binary_heap_priority_queue<numeric_pair<mpq> >::enqueue(unsigned int, numeric_pair<mpq> const&);
template void binary_heap_priority_queue<numeric_pair<mpq> >::resize(unsigned int);
template void lean::binary_heap_priority_queue<double>::resize(unsigned int);
template binary_heap_priority_queue<unsigned int>::binary_heap_priority_queue(unsigned int);
template void binary_heap_priority_queue<unsigned>::resize(unsigned int);
template unsigned binary_heap_priority_queue<unsigned int>::dequeue();
template void binary_heap_priority_queue<unsigned int>::enqueue(unsigned int, unsigned int const&);
template void binary_heap_priority_queue<unsigned int>::remove(unsigned int);
template void lean::binary_heap_priority_queue<mpq>::resize(unsigned int);
}
