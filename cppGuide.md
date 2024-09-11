
 Here are some common functions you can use with `std::vector` in C++:

1. **Element Access:**
   - `at(size_type pos)`: Access element at specified position with bounds checking.
   - `operator[](size_type pos)`: Access element at specified position without bounds checking.
   - `front()`: Access the first element.
   - `back()`: Access the last element.
   - `data()`: Access the underlying array.

2. **Capacity:**
   - `empty()`: Check if the vector is empty.
   - `size()`: Get the number of elements.
   - `max_size()`: Get the maximum possible number of elements.
   - `reserve(size_type new_cap)`: Request a change in capacity.
   - `capacity()`: Get the number of elements that can be held in currently allocated storage.
   - `shrink_to_fit()`: Reduce capacity to fit size.

3. **Modifiers:**
   - `clear()`: Clear all elements.
   - `insert(iterator pos, const T& value)`: Insert elements at specified position.
   - `emplace(iterator pos, Args&&... args)`: Construct and insert element at specified position.
   - `erase(iterator pos)`: Erase elements at specified position.
   - `push_back(const T& value)`: Add element to the end.
   - `emplace_back(Args&&... args)`: Construct and add element to the end.
   - `pop_back()`: Remove the last element.
   - `resize(size_type count)`: Change the number of elements stored.
   - `swap(vector& other)`: Swap contents with another vector.

4. **Iterators:**
   - `begin()`: Return iterator to the beginning.
   - `end()`: Return iterator to the end.
   - `rbegin()`: Return reverse iterator to the beginning.
   - `rend()`: Return reverse iterator to the end.
   - `cbegin()`: Return const iterator to the beginning.
   - `cend()`: Return const iterator to the end.
   - `crbegin()`: Return const reverse iterator to the beginning.
   - `crend()`: Return const reverse iterator to the end.

These functions provide a wide range of operations for managing and accessing elements in a `std::vector`.



