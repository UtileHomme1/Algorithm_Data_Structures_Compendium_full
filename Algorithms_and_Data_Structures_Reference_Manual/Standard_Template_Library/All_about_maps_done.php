<!-- What is STL maps -->
<!-- Reference - https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/ -->

- it is like a hash table
- a key value pair

- they are associative containers that store elements in a mapped fashion
- each element has a key value and a mapped value
* No two mapped values can have the same key values

<!-- Functions associated with Maps -->

1. begin()
- returns an iterator to the first element of the map

2. end()
- returns an iterator to the theoretical element that follows the last element in the map

3. size()
- returns the number of elements in the map

4. max_size()
- returns the maximum number of elements that the map can hold

5. empty()
- returns whether the map is empty

6. pair insert(key value, map value)
- add a new element to the map

7. erase(iterator position)
- removes the element at the position pointed by the iterator

8. erase(const g)
- removes the key value "g" from the map

9. clear()
- removes all the elements from the map

10. key_comp() / value_comp()
- returns the object that determines how the elements in the map are ordered ("<" by default)

11. find(const g)
- returns an iterator to the element with key value "g" in the map if found, else returns the iterator to end

12. count(const g)
- returns the number of matches to element with key value "g" in the map

13. lower_bound(const g)
- returns an iterator to the first element that is equivalent to the mapped value with key value "g"

14. upper_bound(const g)
- returns an iterator to the first element that is equivalent to mapped value with key value "g"

<!-- Maps vs unordered map -->
<!-- Reference - https://www.geeksforgeeks.org/?p=164838 -->

1. Ordering
- for maps, it is ascending order (by default)
- for unordered maps, there is no ordering

2. Implementation
- for maps, in self balancing BST (like Red Black Tree)
- for unordered maps, in hash table

3. Search time
- for maps, log(n)
- for unordered maps, O(1) - average, O(n) - worst case

4. Insertion time
- for maps, log(n) + rebalance
- for unordered maps, O(1) - average, O(n) - worst case

5. Deletion time
- for maps, log(n) + rebalance
- for unordered maps, O(1) - average, O(n) - worst case

** use "maps" when we need ordered data

** use "unordered_map" when we need to keep count of some data (eg - strings) and no ordering is required
- when we need a single element access (no traversal)
