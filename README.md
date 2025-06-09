# PC Parts Inventory Management System

A comprehensive inventory management system for computer hardware components with separate interfaces for customers and employees.

## Features

- **User Authentication System**
  - Separate login for customers and employees
  - Secure password handling
  - Account creation system

- **Inventory Management**
  - Add new hardware components (CPU, Motherboard, RAM, GPU, PSU, CASE)
  - View all inventory items
  - Edit existing items
  - Delete items (employee only)

- **Hardware Components Supported**
  - CPUs (with clock speed, generation details)
  - Motherboards (with size and generation)
  - RAM (with capacity and latency)
  - GPUs (with VRAM and power details)
  - PSUs (with wattage and efficiency rating)
  - Cases (with size information)

## Technical Details

- **Object-Oriented Design**
  - Base `Items` class with common attributes
  - Derived classes for each hardware type
  - Encapsulation with proper getters/setters

- **File Handling**
  - Persistent data storage for user accounts
  - Inventory data saved to binary files
  - Data retrieval functionality

- **User Interface**
  - Console-based menu system
  - Clear section headers
  - Formatted output for hardware details

## How to Use

1. Compile the program using a C++ compiler (tested with g++)
2. Run the executable
3. Choose between Customer or Employee mode
4. For first-time use, create an account
5. Use the menu system to manage inventory

## Employee Functions
- Add new inventory items
- Edit existing items
- Delete items
- View complete inventory

## Customer Functions
- Browse available components
- View detailed specifications

## Future Enhancements

- Implement proper database instead of file handling
- Add transaction history tracking
- Implement search functionality
- Add graphical user interface
- Expand hardware categories (storage, cooling, etc.)

## Requirements

- C++11 or higher compatible compiler
- Windows OS (due to Windows.h usage)
- Basic understanding of inventory systems
