/*
====================================================
  Queue Implementation in C++
====================================================

# AIM
To study and implement **Queue Data Structure** in C++ using arrays 
and provide basic operations such as Enqueue, Dequeue, 
Overflow check, and Underflow check.

# SOFTWARE USED
- VS Code

# OBJECTIVES
1. To understand the concept of Queue and its applications.
2. To implement Queue using array (circular approach).
3. To perform operations: Enqueue (Add), Dequeue (Delete).
4. To check overflow and underflow conditions in Queue.
5. To compare Queue with other data structures like Stack.

# THEORY
A **Queue** is a linear data structure that follows the principle 
of **FIFO (First In, First Out)**. The element that is inserted 
first is the one to be removed first.

## Characteristics of Queue:
- Insertion (Enqueue) happens at the **rear** end.
- Deletion (Dequeue) happens at the **front** end.
- Linear data structure.
- Sequential order of processing.

## Types of Queues:
1. **Simple Queue**: Basic queue with insert at rear and delete at front.
2. **Circular Queue**: Improves space utilization by connecting the rear end to the front.
3. **Priority Queue**: Elements are dequeued according to priority, not order.
4. **Double Ended Queue (Deque)**: Insertion and deletion at both ends.

## Real-Life Applications:
- Printer Queue: Jobs are processed in the order received.
- Customer Service: First customer enters the queue and gets served first.
- CPU Scheduling: Tasks waiting for execution are queued.
- Call Center Systems: Calls are attended in order of arrival.

----------------------------------------------------
# ALGORITHM
1. START
2. Initialize Queue with size N.
3. Set front = -1, rear = -1.
4. ENQUEUE Operation:
    a. If (rear + 1) % size == front → Queue Overflow.
    b. Else if Queue empty → front = rear = 0.
    c. Else → rear = (rear + 1) % size.
    d. Insert element at arr[rear].
5. DEQUEUE Operation:
    a. If Queue empty → Underflow.
    b. Else print arr[front].
    c. If (front == rear) → reset front = rear = -1.
    d. Else front = (front + 1) % size.
6. Repeat until EXIT.
7. STOP

----------------------------------------------------
# FLOWCHART
                  ┌─────────────┐
            │    START    │
            └──────┬──────┘
                   │
            ┌──────▼───────┐
            │ Initialize   │
            │ front, rear  │
            └──────┬───────┘
                   │
            ┌──────▼───────────┐
            │ Choice: Enqueue? │
            └──────┬─────┬─────┘
                  Yes    No
                   │      │
          ┌────────▼─┐   ┌───────────────┐
          │ Insert   │   │ Choice:       │
          │ Data     │   │ Dequeue?      │
          │ rear++   │   └──────┬────────┘
          └──────┬───┘         Yes   │ No
                 │                  │
          ┌──────▼─────┐     ┌──────▼──────┐
          │ Choice:    │     │    EXIT     │
          │ Dequeue?   │     └─────────────┘
          └──────┬─────┘
                Yes
                 │
          ┌──────▼───────┐
          │ Delete Data  │
          │ front++      │
          └──────────────┘


----------------------------------------------------
# TABLE: Queue Operations Example

| Step | Operation     | Front | Rear | Queue Elements   |
|------|---------------|-------|------|------------------|
| 1    | Enqueue 10    | 0     | 0    | 10               |
| 2    | Enqueue 20    | 0     | 1    | 10, 20           |
| 3    | Enqueue 30    | 0     | 2    | 10, 20, 30       |
| 4    | Dequeue       | 1     | 2    | 20, 30           |
| 5    | Enqueue 40    | 1     | 3    | 20, 30, 40       |
| 6    | Enqueue 50    | 1     | 4    | 20, 30, 40, 50   |
| 7    | Enqueue 60    | -     | -    | Queue Overflow   |

----------------------------------------------------
# CONCLUSION
- Queue is a fundamental linear data structure that 
  efficiently manages ordered data with FIFO principle.
- Using circular queue in C++ helps in optimal memory usage.
- Queues are widely used in operating systems, networks, 
  and service systems where fairness and order are essential.
*/
