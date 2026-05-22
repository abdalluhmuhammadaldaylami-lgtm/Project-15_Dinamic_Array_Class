# 📦 Project 15 — Dynamic Array Class  
### C++ | Object-Oriented Programming | Manual Memory Management

---

## 📌 Introduction

This project demonstrates how to build a fully functional **Dynamic Array class from scratch in C++** without relying on STL containers.

The goal is not just to store data —  
but to deeply understand how dynamic memory works internally and how real containers are engineered.

This class serves as a foundational building block for more advanced data structures.

---

## 🎯 Project Goals

- Implement a reusable Dynamic Array class using templates
- Manage heap memory manually (allocation & deallocation)
- Control resizing behavior
- Support insertion, deletion, searching, and modification
- Apply OOP design principles
- Build a scalable and extensible architecture

---

## 🧠 Core Concepts Applied

- Templates (Generic Programming)
- Dynamic Memory Allocation (`new` / `delete`)
- Constructors & Destructors
- Encapsulation
- Defensive Programming
- Code Reusability
- Modular Design
- Method Composition (Lego-style architecture)

---

## 🏗 Class Design Philosophy

This class **owns its memory**.

✔ When an object is created → memory is allocated dynamically  
✔ When the object is destroyed → memory is released properly  
✔ All operations maintain internal size integrity  
✔ No STL containers are used  

The design emphasizes:

- Clear responsibility
- No duplicated logic
- Reusable internal methods
- Extensibility through composition

Many high-level methods reuse core methods instead of rewriting logic.

---

## 🧩 Implemented Features

### 🔹 Basic Operations
- Initialize with specific size
- `SetItem`
- `GetItem`
- `Size`
- `IsEmpty`
- `PrintList`
- `Clear`
- `Resize`

### 🔹 Searching
- `Find` (by value)

### 🔹 Deletion
- `DeleteItemAt` (by index)
- `DeleteFirstItem`
- `DeleteLastItem`
- `DeleteItem` (by value)

### 🔹 Insertion
- `InsertAt` (core insertion logic)
- `InsertAtBeginning`
- `InsertAtEnd`
- `InsertBefore`
- `InsertAfter`

All advanced methods are built on top of core logic to ensure clean architecture.

---

## 🧪 What This Project Teaches

By implementing this manually, we understand:

- How arrays resize internally
- Memory reallocation strategies
- Shifting mechanics during insert/delete
- Trade-offs between arrays and linked lists
- How container abstractions are built

This shifts the mindset from:

> Using data structures  
to  
> Engineering data structures

---

## ⚖ Dynamic Array vs Linked List

This project follows earlier implementations using Linked Lists.

Now we explore the array-based internal model.

| Aspect | Dynamic Array | Linked List |
|--------|---------------|-------------|
| Memory | Contiguous | Non-contiguous |
| Access | O(1) random access | O(n) traversal |
| Insert/Delete | Requires shifting | Pointer adjustments |
| Cache-friendly | Yes | Less |

Understanding both builds architectural awareness.

---

## 🔄 Architectural Pattern Used

The project follows a **Core + Extensions model**:

- Build powerful base methods
- Reuse them to construct higher-level behavior
- Avoid duplicate logic
- Compose functionality

### Examples

- `DeleteFirstItem()` → calls `DeleteItemAt(0)`
- `DeleteItem(Value)` → uses `Find()` + `DeleteItemAt()`
- `InsertAtBeginning()` → calls `InsertAt(0, Value)`

Programming is treated like assembling Lego blocks.

---

## 🛠 Technologies

- C++
- Templates
- Object-Oriented Programming
- Manual Heap Memory Management

---

## 🌐 Platform

Programming Advices  
https://programmingadvices.com

---

## 👨‍🏫 Instructor

Dr. Mohammed Abu-Hadhoud  
Programming Advices

---

## 🗺 Learning Journey Context

This project is part of a structured roadmap covering:

- Data Structures & Algorithms
- OOP Mastery
- Memory Management
- Clean Code Practices
- Engineering Thinking

The focus is not memorization.

It is understanding internal mechanics and architectural reasoning.

---

## 💡 Final Takeaway

When you understand dynamic memory…

You stop depending on ready-made containers.

You start designing your own.

And that’s the point where programming becomes engineering.
