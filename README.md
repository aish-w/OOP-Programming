# OOP-Programming

OOPs, or Object-Oriented Programming is a programming model or paradigm which revolves around the concept of “OBJECTS”. Objects can be considered as real-world instances of entities like class, that contain some characteristics and behaviors specified in the class template.

## What is the need of OOPS?
There are many reasons why OOPs is mostly preferred, but the most important among them are: 

->OOPs helps users to understand the software easily, although they don’t know the actual implementation.\
->With OOPs, the readability, understandability, and maintainability of the code increase multifold.\
->Even very big software can be easily written and managed easily using OOPs.

## Advantages of OOPs
->OOPs is very helpful in solving very complex level of problems.\
->Highly complex programs can be created, handled, and maintained easily using object-oriented programming.\
->OOPs, promote code reuse, thereby reducing redundancy.\
->OOPs also helps to hide the unnecessary details with the help of Data Abstraction.\
->OOPs, are based on a bottom-up approach, unlike the Structural programming paradigm, which uses a top-down approach.\
->Polymorphism offers a lot of flexibility in OOPs

## What is Class?
A class can be understood as a template or a blueprint, which contains some values, known as member data or member, and some set of rules, known as behaviors or functions. So when an object is created, it automatically takes the data and functions that are defined in the class.\
Therefore the class is basically a template or blueprint for objects. Also one can create as many objects as they want based on a class.\
For example, first, a car’s template is created. Then multiple units of car are created based on that template.

## What is Object?
Objects can be considered as real-world instances of entities like class, that contain some characteristics and behaviors specified in the class template.\
Objects are considered the instance of a class, and are therefore sometimes called “instances”. The term “characteristics” refers to the “what” about the Object, and the term “behavior” refers to the “how” about the Object.

## What is Constructor?
Constructor is the function which is called when object is created.Constructors are special methods whose name is the same as the class name. The constructors serve the special purpose of initializing the objects.

### Types of Constructor
-- Default Constructor - The default constructor is the constructor which doesn’t take any argument. It has no parameters.\
-- Parameterized Constructor - The constructors that take some arguments are known as parameterized constructors.\
-- Copy Constructor - A copy constructor is a member function that initializes an object using another object of the same class.

## What is Destructor?
Destructor is the function which is called when the object is deleted.Contrary to constructors, which initialize objects and specify space for them, Destructors are also special methods. But destructors free up the resources and memory occupied by an object. Destructors are automatically called when an object is being destroyed.

## Features of OOPs
=>Inheritance\
=>Polymorphism\
=>Encapsulation\
=>Abstraction

## Encapsulation
Encapsulation is the process of binding data members and methods of a program together to do a specific job, without revealing unnecessary details.\
Encapsulation can also be defined in two different ways:
1) Data hiding: Encapsulation is the process of hiding unwanted information, such as restricting access to any member of an object.
2) Data binding: Encapsulation is the process of binding the data members and the methods together as a whole, as a class.

## Abstraction
Abstraction is the method of hiding unnecessary details from the necessary ones.\
For example, consider a car. You only need to know how to run a car, and not how the wires are connected inside it. This is obtained using Abstraction.

## Inheritance
Inheritance is one of the major features of object-oriented programming, by which an entity inherits some characteristics and behaviors of some other entity and makes them their own. Inheritance helps to improve and facilitate code reuse.

### Types of Inheritance
1)Single inheritance\
2)Multiple inheritances\
3)Multi-level inheritance\
4)Hierarchical inheritance\
5)Hybrid inheritance

## Access Specifiers & Mode of Inheritance
The access restriction specified to the class members (whether it is member function or data member) is known as access specifiers.\
Access Modifiers are of 3 types:

1)Private - It can neither be accessed nor be viewed from outside the class.\
2)Protected - It can be accessed if and only if the accessor is the derived class.\
3)Public - It can be accessed or be viewed from outside the class.

#### Diamond Problem
Base class has multiple parent class having a common ancestor class.

## Polymorphism
Polymorphism is composed of two words - “poly” which means “many”, and “morph” which means “shapes”.In OOPs, Polymorphism refers to the process by which some code, data, method, or object behaves differently under different circumstances or contexts.

### Types of Polymorphism
1)Compile Time Polymorphism - Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time. What it means is that the compiler decides what shape or value has to be taken by the entity in the picture.\
2)Runtime Polymorphism - Runtime polymorphism, also known as Dynamic Polymorphism, refers to the type of Polymorphism that happens at the run time. What it means is it can't be decided by the compiler. Therefore what shape or value has to be taken depends upon the execution. Hence the name Runtime Polymorphism.

#### Compile Time Polymorphism
-->Function Overloading - Function overloading allows you to define multiple functions with the same name but different parameters. It is a form of compile time polymorphism in which a function can perform different jobs based on the different parameters passed to it.\
-->Operator Overloading - C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. Operator overloading is a compile-time polymorphism. For example, we can overload an operator '+' in a class like String so that we can concatenate two strings by just using +.

#### Run Time Polymorphism
-->Function Overriding - Function overriding is a type of polymorphism in which we redefine the member function of a class which it inherited from its base class. The function signature remains same but the working of the function is altered to meet the needs of the derived class. So, when we call the function using its name for the parent object, the parent class function is executed. But when we call the function using the child object, the child class version will be executed.

-->Virtual Fuction - a virtual function is a member function declared within a base class using the virtual keyword. Its primary purpose is to enable runtime polymorphism, allowing derived classes to override the function's behavior. When a virtual function is called through a base class pointer or reference, the actual function executed is determined by the object's type at runtime, not the pointer's type.

## Friend Function
A friend function in C++ is a function that is declared outside the scope of a class but has access to the private and protected members of that class. Friend functions are not member functions of the class but are granted special access to the class's internals. 