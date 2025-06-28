# 🚗 Map Navigator - Shortest Path Finder using Dijkstra's Algorithm         

A C++ application that simulates a map-based navigation system using **Dijkstra's Algorithm** to find the shortest path between nodes (locations) in a graph.

---

## 🛠️ Tools & Technologies

* **C++**
* **Dijkstra’s Algorithm**
* **Data Structures (Graph, Priority Queue)**
* **Visual Studio Code**
* **Git & GitHub**

---

## 📌 Features

* Find the **shortest path** between two locations (nodes)
* Efficiently handles **weighted undirected graphs**
* Demonstrates the use of **priority queues** for optimal traversal
* Easy to extend for **real-world routing applications**

---

## 🧠 Algorithm Used

> Dijkstra’s Algorithm – Greedy algorithm used to find the shortest path from a source node to all other nodes in a graph with non-negative weights.

---

## 🧾 How It Works

1. The graph is constructed using an **adjacency list**
2. The user can add edges (routes between locations)
3. The Dijkstra function computes the shortest distances from a source node
4. Output displays shortest distance from the source to every other node

---

## 🧪 Sample Input & Output

**Graph:**

```
0 --(4)-- 1 --(1)-- 3
|         |         |
(1)      (2)       (3)
|         |         |
2 -------           4 --(1)-- 5
```

**Output:**

```
Shortest distances from node 0:
To 0: 0
To 1: 3
To 2: 1
To 3: 4
To 4: 7
To 5: 8
```

---

## 🚀 How to Run

```bash
g++ map_navigator.cpp -o navigator
./navigator
```

---

## 📂 File Structure

```
📁 MapNavigator
│
├── map_navigator.cpp     # Main C++ source file
├── README.md             # Project documentation
└── .gitignore            # Ignore build files
```
