<!-- What can be done using the STL list-->
<!-- Reference - https://www.youtube.com/watch?v=O249HAuBNIQ&index=1&t=0s&list=PLTZbNwgO5ebrHu5xDlEdv_aZQVn7x2V-I -->

- List is a kind of linked list
- one can push elements in the front, back, middle
- iterate through the elements
- delete the elements

** vectors are better than lists because any element can be accessed using the index "i" because
vectors are stored in contiguous locations

<!-- What are lists in STL -->
<!-- Reference - https://www.geeksforgeeks.org/list-cpp-stl/ -->

- Lists are sequence containers that allow non-contiguous memory allocation
- As compared to vectors, list has slow traversal, but once a position has been found, insertion and deletion are quick
- List generally means doubly linked list
- For implementing a singly linked list, we used forward list

<!-- Functions used with Lists -->

1. front()
- returns the value of the first element of the list

2. back()
- returns the value of the last element of the list

3. push_front(g)
- adds a new element 'g' at the beginning of the list

4. push_back(g)
- add a new element 'g' at the end of the list

5. pop_front(g)
- removes the first element of the list, and reduces size of the list by 1

6. pop_back()
- removes the last element of the list, and reduces size of the list by 1

7. begin()
- returns an iterator pointing to the first element of the list

8. end()
- returns an iterator pointing to the theoretical last element which follows the last element

9. empty()
- returns whether the list is empty(1) or not(0)

10. insert()
- inserts new elements in the list before the element at a specified position

11. erase()
- removes a single element or a range of elements from the list

12. assign()
- assigns new elements to list by replacing current elements and resizes the list

13. remove()
- removes all the elements from the list which are equal to given element

14. reverse()
- reverses the list

15.  size()
- returns the number of elements in the list

16. sort()
- sorts the list in increasing order

<!-- Other Important fuctions -->

1. emplace(position, value)
- is used to insert an element at the position specified

2. emplace_back(value)
- adds value at the end of the list
- it is different from push_back() by the fact that it directly creates element at position whereas push_back() first makes a temporary copy and copies from there.

3. emplace_front(value)
- adds value at the end of the list
- it is different from push_front() by the fact that it directly creates element at position whereas push_front() first makes a temporary copy and copies from there.

4. merge(list2)
- merges list2 with list1.
- if both elements are in sorted order, the resulting list is also sorted

5. remove_if(condition)
- removes the element from the list on the basis of condition given in its argument

6. unique()
- is used to delete the repeated occurrences of the number
- List has to be sorted for this function to get executed

7. splice(position list2)
- is used to transfer elements from one list to another

8. swap(list2)
- is used to swap one list element with other
