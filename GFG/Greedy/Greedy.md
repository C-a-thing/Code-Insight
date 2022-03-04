# Greedy

| Sl No | Qu title | Platform                            | Soln Lang |   | Time comp | Space comp | difficulty |    | approach |
| --     | ---     |   ------                            | ---       |-- | ---       | ---        | ----       | -- | ---------|
| 1    | [N meetings in one room](https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1)     | [GFG ](/GFG/GFGQuestions.md) | [c++](https://github.com/C-a-thing/Code-Insight/blob/main/GFG/Greedy/C%2B%2B/N%20meetings%20in%20one%20room.cpp)       |   | O(n*log(n)       | O(n)        | Easy       |    | <ol><li>take a vactor of pair<int,int> and sort it by end values</li><li>then check end value[ith element] < start value[i+1th element]</li></ol>|
