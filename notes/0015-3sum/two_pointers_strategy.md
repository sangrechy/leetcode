# Two Pointers Strategy
- Sorting takes O(N log N).
- Fix element i and use two pointers (`left` and `right`) from i+1 to N-1.
- Skip duplicate elements for both i, left, and right to avoid duplicate triplets.
- Total time: O(N^2).