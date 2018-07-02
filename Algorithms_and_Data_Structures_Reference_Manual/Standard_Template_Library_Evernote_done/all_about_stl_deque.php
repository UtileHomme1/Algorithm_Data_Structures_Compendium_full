<!-- What are double ended queues in stl -->

<!-- Reference - https://www.geeksforgeeks.org/deque-cpp-stl/ -->

- are sequence containers with the feature of expansion and contraction on both the ends
- they are similar to vectors, but more efficient in case of insertion and deletion of elements at the end, and also the beginning

** Unlike vectors, contiguous storage allocation may not be guaranteed

 ** The functions are same as in vectors with an addition of push and pop operations for both front and back

<!-- empty() and size function in deque -->

<!-- Reference -  https://www.geeksforgeeks.org/dequeempty-dequesize-c-stl/ -->


1. empty()
- is used to check if the deque container is empty or not

<!-- Syntax : -->

dequename.empty()

<!-- Parameters : -->

No parameters are passed.

<!-- Returns : -->
True, if deque is empty
False, Otherwise

<!-- Examples: -->

Input :   mydeque
          mydeque.empty();
Output :  True

Input :   mydeque = 1, 2, 3
          mydeque.empty();
Output :  False

2. size()
- is used to return the size of the deque container or the number of elements in the deque container.

<!-- Syntax : -->

dequename.size()

<!-- Parameters : -->

No parameters are passed.

<!-- Returns : -->

Number of elements in the container.

<!-- Examples: -->

Input :   mydeque = 0, 1, 2
          mydeque.size();
Output :  3

Input :   mydeque = 0, 1, 2, 3, 4, 5
          mydeque.size();
Output :  6
