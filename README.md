# Summary Ranges

This repository contains a C++ implementation of the `"Summary Ranges"` problem. Given a sorted unique integer array, the code finds the smallest sorted list of ranges that covers all the numbers exactly.

## Problem Description

You are given a sorted unique integer array `nums`.

A range `[a,b]` is the set of all integers from `a` to `b` (inclusive).

The task is to return the smallest sorted list of ranges that cover all the numbers in the array exactly. Each element of `nums` should be covered by exactly one of the ranges, and there should be no integer `x` such that `x` is in one of the ranges but not in `nums`.

Each range `[a,b]` in the list is output as:
- `"a->b"` if `a != b`
- `"a"` if `a == b`

## Approach

The implementation follows a simple approach to construct the ranges:
1. Iterate through each number in the input array.
2. If the list of ranges is empty, create a new range with the current number.
3. If the current number is consecutive to the previous range's end, update the end of the range.
4. If the current number is not consecutive, create a new range.
5. Convert the list of ranges to the required output format:
   - If the start and end of the range are equal, add it to the output list as a string representation of the number.
   - If the start and end of the range are different, add it to the output list as a string representation of the range in the format "start->end".
6. Return the output list of ranges.

## Usage

To use the code provided in this repository, follow these steps:
1. Clone the repository or download the source code files.
2. Open the project in a C++ compiler.
3. Include the necessary headers and make sure the code is compilable.
4. Call the `summaryRanges` function with a sorted unique integer array to obtain the smallest sorted list of ranges.
5. Use the resulting ranges as needed.

## Example
```c++
     #include <iostream>
     #include <vector>
     #include <string>

     using namespace std;

     // Function implementation here...

    int main() {
        vector<int> nums = {0, 1, 2, 4, 5, 7};
        vector<string> result = summaryRanges(nums);

        cout << "Ranges: ";
        for (const string& range : result) {
          cout << range << " ";
      }
       cout << endl;

      return 0;
     }
```

In this example, we have an input array nums with values [0, 1, 2, 4, 5, 7]. The summaryRanges function is called with nums to obtain the ranges. The resulting ranges are then printed to the console.

The output of this example would be:
    
    Ranges: 0->2 4->5 7

