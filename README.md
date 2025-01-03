# Online Store Project

This project is an **Online Store** implemented in **C++** using the **Standard Template Library (STL)**. It provides functionality to manage products, customers, and orders efficiently.

---
## Features

### 1. Product Management
- **Store Product Details**:  
  Product information such as `productID`, `name`, and `category` is stored using a `vector`, enabling efficient traversal and updates.  
- **Unique Product Categories**:  
  Product categories are stored in a `set`, ensuring each category is unique and can be retrieved quickly.

### 2. Inventory Management
- **Product Stock Management**:  
  The stock count for each product is managed using a `map`, where the `productID` serves as the key, and the stock quantity is the value.

### 3. Customer Management
- **Recent Customer Visits**:  
  Tracks recently active customers using a `deque`, which allows fast insertion at both the front and back.  
- **Customer Data Storage**:  
  Customer IDs and their names are stored in an `unordered_map` for fast and efficient lookup.

### 4. Order Management
- **Order History**:  
  A `list` is used to maintain the history of all orders, including details like:
  - Order ID
  - Product ID
  - Quantity
  - Customer ID
  - Order date and time  
- **Customer Orders**:  
  Multiple orders by a single customer are stored using a `multimap`, associating each customer ID with their respective orders.

### 5. Unique Product Identification
- **Track Unique Product IDs**:  
  Unique product IDs are stored and retrieved using an `unordered_set`.

### 6. Data Output
- Prints the following details:
  - Unique product IDs
  - Complete order history with timestamps
  - List of recent customer visits

---

## Technology Stack
- **Language**: C++
- **Libraries**: STL (Vectors-> store a list of products,
list -> orders.
deque -> visits,
set -> unique category,
map -> stock count,
multimap -> allowing multiple order per customer,
unordered_map -> to store customer id,
unordered_set -> to store duplicate elements
 etc.)
- **Development Environment**: [ e.g., Visual Studio]

---

## Installation and Setup
1. Clone the repository:
   ```bash
   git clone https://github.com/VishalJaiswada/Online-Store-using-CPP.git
