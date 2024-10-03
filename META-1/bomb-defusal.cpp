/*understand it better.

Problem Explanation
Input:

size: An integer representing the size of the list 
𝑁
N.
key: An integer representing the key 
𝐾
K. If 
𝐾
K is positive, we will sum the next 
𝐾
K numbers in a cyclic manner. If 
𝐾
K is negative, we will sum the previous 
∣
𝐾
∣
∣K∣ numbers in a cyclic manner.
message: A list of 
𝑁
N integers.
Output:

A new list where each number is replaced by the sum of the next 
𝐾
K numbers (if 
𝐾
K is positive) or the previous 
∣
𝐾
∣
∣K∣ numbers (if 
𝐾
K is negative) in a cyclic manner.
Example
Let's use an example to illustrate this:

Example 1:
size: 5
key: 2
message: [1, 2, 3, 4, 5]
Here, 
𝐾
K is positive, so we will sum the next 
𝐾
=
2
K=2 numbers for each element in a cyclic manner.

For the first element (1):

Next 2 numbers: 2, 3
Sum: 
2
+
3
=
5
2+3=5
For the second element (2):

Next 2 numbers: 3, 4
Sum: 
3
+
4
=
7
3+4=7
For the third element (3):

Next 2 numbers: 4, 5
Sum: 
4
+
5
=
9
4+5=9
For the fourth element (4):

Next 2 numbers: 5, 1 (cyclic)
Sum: 
5
+
1
=
6
5+1=6
For the fifth element (5):

Next 2 numbers: 1, 2 (cyclic)
Sum: 
1
+
2
=
3
1+2=3
The resulting list is: 
[
5
,
7
,
9
,
6
,
3
]
[5,7,9,6,3].

Example 2:
size: 5
key: -2
message: [1, 2, 3, 4, 5]
Here, 
𝐾
K is negative, so we will sum the previous 
∣
𝐾
∣
=
2
∣K∣=2 numbers for each element in a cyclic manner.

For the first element (1):

Previous 2 numbers: 5, 4 (cyclic)
Sum: 
5
+
4
=
9
5+4=9
For the second element (2):

Previous 2 numbers: 1, 5 (cyclic)
Sum: 
1
+
5
=
6
1+5=6
For the third element (3):

Previous 2 numbers: 2, 1
Sum: 
2
+
1
=
3
2+1=3
For the fourth element (4):

Previous 2 numbers: 3, 2
Sum: 
3
+
2
=
5
3+2=5
For the fifth element (5):

Previous 2 numbers: 4, 3
Sum: 
4
+
3
=
7
4+3=7
The resulting list is: 
[
9
,
6
,
3
,
5
,
7
]
[9,6,3,5,7].*/

#include <iostream>
#include <vector>

std::vector<int> defuse_bomb(int size, int key, std::vector<int>& message) {
    std::vector<int> result(size);
    int n = message.size();

    for (int i = 0; i < n; ++i) {
        int sum_k = 0;
        if (key > 0) {
            for (int j = 1; j <= key; ++j) {
                sum_k += message[(i + j) % n];
            }
        } else {
            for (int j = 1; j <= -key; ++j) {
                sum_k += message[(i - j + n) % n];
            }
        }
        result[i] = sum_k;
    }

    return result;
}

int main() {
    int size = 5;
    int key = 2;
    std::vector<int> message = {1, 2, 3, 4, 5};
    
    std::vector<int> result = defuse_bomb(size, key, message);

    std::cout << "Result: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Example with negative key
    key = -2;
    result = defuse_bomb(size, key, message);

    std::cout << "Result with negative key: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
