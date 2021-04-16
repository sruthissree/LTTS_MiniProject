# Requirements

* LIBRARY MANAGEMENT SYSTEM
A Library Management System is a software built to handle the primary housekeeping functions of a library. Libraries rely on library management systems to manage asset collections as well as relationships with their members. Library management systems help libraries keep track of the books and their checkouts, as well as members’ subscriptions and profiles.

Library management systems also involve maintaining the database for entering new books and recording books that have been borrowed with their respective due dates.


* Build : Make for CI
* Testing : Unity testing
* Static code analysis : cppcheck
* Dynamic Code analysis : Valgrind
* Documentation : Doxygen documentation
* C coding IDE, MS Excel

* Functional Requirements

Any library member should be able to search books by their access number.

Each book will have a unique identification number, also known as access number and other details including title, author and availability in library which will help to know about the book.

There could be more than one copy of a book and each copy is assigned a unique access number.

The system should be able to retrieve information like who took a particular book or what are the books checked-out by a specific library member.

There should be a maximum limit (5) on how many books a member can check-out.

The system should be able to tell if a book is beyond the duea date or not by retrieving the current date of the system.

Each book and member card will have a unique barcode. The system will be able to read barcodes from books and members’ library cards.

Source and references: https://www.educative.io/courses/grokking-the-object-oriented-design-interview/RMlM3NgjAyR#div-stylecolor-background-colore2f4c7-border-radius5px-padding5pxsystem-requirementsdiv
