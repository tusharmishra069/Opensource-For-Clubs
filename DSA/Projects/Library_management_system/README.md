# Library Management System

A simple Library Management System implemented in C++. This program allows users to manage a collection of books using a linked list data structure. Users can add, delete, search for, and display books in the library.

## Features

- **Add Book**: Allows users to add new books to the library with a unique ID, title, and author.
- **Delete Book**: Users can delete a book from the library using its ID.
- **Search Book**: Search for a book by its ID and view its details.
- **Display All Books**: List all the books currently in the library.
- **User-Friendly Interface**: A simple text-based interface for easy interaction.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++).
- Basic knowledge of C++ programming.

### How to Compile and Run

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/library-management-system.git
    cd library-management-system
    ```

2. Compile the program:
    ```bash
    g++ -o library_management_system main.cpp
    ```

3. Run the program:
    ```bash
    ./library_management_system
    ```

### Usage

Once the program is running, you will see a menu with the following options:

- **Add Book**: Enter the book ID, title, and author.
- **Delete Book**: Provide the book ID to remove a book from the library.
- **Search Book**: Enter a book ID to find and display its details.
- **Display All Books**: View the list of all books in the library.
- **Exit**: Close the program.

## Code Structure

- **main.cpp**: Contains the implementation of the Library Management System.

### Node Structure

The `Book` structure represents a book in the library with the following attributes:

- `id`: Unique identifier for each book.
- `title`: Title of the book.
- `author`: Author of the book.
- `next`: Pointer to the next book in the linked list.

### Library Class

The `Library` class manages the linked list of books and provides the following methods:

- `addBook(int id, string title, string author)`: Adds a new book to the library.
- `deleteBook(int id)`: Deletes a book with the specified ID.
- `searchBook(int id)`: Searches for a book by its ID.
- `displayBooks()`: Displays all books in the library.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

Contributions are welcome! Please see the [CONTRIBUTING.md](/CONTRIBUTING.md) for guidelines on how to contribute to this project.

