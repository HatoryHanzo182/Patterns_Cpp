# Design patterns in C++

## About the project

Welcome to the "Patterns_Cpp" repository! Here you will find examples of using different design patterns in C++. This project is a set of implementations of popular patterns that will help you better understand how to use patterns to increase the flexibility and efficiency of your code.

## Important

This repository is under development and we are constantly adding new examples and improvements. The current version of the project represents only a small set of available patterns, and in the future we plan to expand it.

## Available patterns

At the moment, the following patterns are implemented in the project:

1. Singleton pattern - this is a generating pattern that guarantees the existence of only one object of a certain class, and also allows you to reach this object from anywhere in the program.

2. Pattern Abstract method - generative design pattern that solves the problem of creating different products without specifying specific classes of products.
The factory method specifies the method that should be used instead of calling the new operator to create product objects. Subclasses can override this method to change the type of products they create. 

3. Pattern Abstract Factory - generative design pattern that solves the problem of creating entire families of related products, without specifying specific classes of products. An abstract factory defines an interface for creating all available types of products, and each specific factory implementation generates products of one of the variations. The client code calls the factory methods to get the products instead of creating them on its own with the new operator. At the same time, the factory itself ensures that the product of the desired variation is created.

4. Snapshot pattern - is a behavioral pattern that allows you to take snapshots of the internal state of objects, and then restore them. At the same time, the Snapshot does not disclose the details of the implementation of objects, and the client does not have access to the protected information of the object.
   
5. Facade pattern - structural pattern that provides a simple (but stripped down) interface to a complex object system, library, or framework. In addition to reducing the overall complexity of a program, Facade also helps to bring code that depends on an external system into a single place.

Each pattern is accompanied by a demo that shows its application in different situations.
Learn more about patterns at https://refactoring.guru/en/design-patterns/cpp
