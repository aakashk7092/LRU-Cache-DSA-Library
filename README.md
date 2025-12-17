# LRU Cache Implementation (C++)

An efficient **LRU (Least Recently Used) Cache** implementation in C++ using  
**Doubly Linked List + Hash Map**, supporting `O(1)` time complexity for both
`get()` and `put()` operations.

---

## Problem Statement
Design a cache system with a fixed capacity that removes the **least recently used**
item when the cache is full.

---

## Approach & Design

This implementation combines two data structures:

### 1️ Hash Map (`unordered_map`)
- Stores `key → Node*`
- Enables **O(1)** access to cache entries

### 2️ Doubly Linked List
- Maintains usage order
- **Most Recently Used** → Head
- **Least Recently Used** → Tail

The cache class controls:
- Capacity
- Eviction
- Memory ownership

---

## Operations

### `get(key)`
- Returns value if key exists
- Moves node to front (most recently used)
- Returns `-1` if key not found

### `put(key, value)`
- Updates value if key exists
- Inserts new key if not
- Evicts least recently used key if capacity is full

---

## Time & Space Complexity
| Operation | Complexity |
|---------|-----------|
| `get()` | O(1) |
| `put()` | O(1) |
| Space   | O(N) |

---

##  How to Compile & Run

```bash
g++ -std=c++17 LRU_Cache/main.cpp \
LRU_Cache/LRUCache.cpp \
Data_Structures/LinkedList/DoublyLinkedList.cpp \
-o lru

./lru

## Sample Output
10
-1
30
-1
30
40

