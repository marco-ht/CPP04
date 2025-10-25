# CPP Module 04

This repository contains my implementation of **C++ Module 04**, developed as part of the 42 School curriculum. This module explores advanced Object-Oriented Programming concepts including subtype polymorphism, abstract classes, and interfaces. Through these exercises, you'll learn how to design flexible and extensible class hierarchies using virtual functions and pure abstract classes.

**"Subtype Polymorphism, Abstract Classes, and Interfaces"**

## Table of Contents

- [Overview](#overview)
- [General Rules](#general-rules)
- [Exercises](#exercises)
  - [Exercise 00: Polymorphism](#exercise-00-polymorphism)
  - [Exercise 01: I don't want to set the world on fire](#exercise-01-i-dont-want-to-set-the-world-on-fire)
  - [Exercise 02: Abstract class](#exercise-02-abstract-class)
  - [Exercise 03: Interface & recap](#exercise-03-interface--recap)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Submission and Peer Evaluation](#submission-and-peer-evaluation)
- [Acknowledgments](#acknowledgments)
- [Disclaimer](#disclaimer)
- [License](#license)

## Overview

C++ is a general-purpose programming language created by **Bjarne Stroustrup** as an extension of the C programming language, or "C with Classes". This module focuses on polymorphism, one of the core principles of Object-Oriented Programming, allowing objects of different classes to be treated uniformly through a common interface.

Key topics covered in this module:
- **Subtype Polymorphism** - using base class pointers/references to manipulate derived class objects
- **Virtual Functions** - enabling runtime polymorphism through dynamic dispatch
- **Abstract Classes** - classes that cannot be instantiated and serve as interfaces
- **Pure Virtual Functions** - functions that must be overridden by derived classes
- **Interfaces** - pure abstract classes that define contracts for derived classes
- **Deep Copy** - proper copying of objects with dynamically allocated members
- **Virtual Destructors** - ensuring proper cleanup in inheritance hierarchies

All exercises must be written in **C++98** and compiled using the appropriate flags.

## General Rules

- **Compilation:**
  - Compile with `c++ -Wall -Wextra -Werror`
  - Code must still compile with `-std=c++98`

- **Formatting & Naming:**
  - Exercises are stored in directories `ex00`, `ex01`, `ex02`, …  
  - Class names in `UpperCamelCase` (e.g., `Animal`, `AMateria`)  
  - Source files: `ClassName.cpp`  
  - Header files: `ClassName.hpp` or `ClassName.h`  

- **Allowed / Forbidden:**
  - Allowed: most of the C++ standard library
  - Forbidden: external libraries, C++11 or newer, Boost libraries
  - Forbidden functions: `*printf()`, `*alloc()`, `free()`
  - Forbidden keywords: `using namespace <ns_name>`, `friend` (unless explicitly stated)
  - STL containers and algorithms are only allowed starting from Module 08

- **Design Requirements:**
  - All classes must follow the Orthodox Canonical Form
  - Avoid memory leaks when using `new` / `delete`
  - Each header must be self-contained and protected by include guards
  - No function implementations inside headers (except templates)
  - Test thoroughly for memory leaks using tools like `valgrind`.

## Exercises

### Exercise 00: Polymorphism

**Directory:** `ex00/`  
**Files to turn in:** `Makefile`, `main.cpp`, `*.cpp`, `*.{h,hpp}`

Implement a simple class hierarchy to demonstrate polymorphism:

**Animal class (base):**
- Protected attribute: `std::string type`
- Member function: `makeSound()` - prints an appropriate sound

**Derived classes:**
- `Dog` - inherits from Animal, type set to "Dog"
- `Cat` - inherits from Animal, type set to "Cat"

**Expected behavior:**
```cpp
const Animal* j = new Dog();
const Animal* i = new Cat();
i->makeSound(); // Outputs cat sound
j->makeSound(); // Outputs dog sound
```

**Additional requirement:**
Implement `WrongAnimal` and `WrongCat` classes to demonstrate what happens without proper polymorphism (non-virtual functions).

**Key Learning:** Understanding virtual functions and how they enable runtime polymorphism. The difference between virtual and non-virtual member functions.

### Exercise 01: I don't want to set the world on fire

**Directory:** `ex01/`  
**Files to turn in:** Files from previous exercise + `*.cpp`, `*.{h,hpp}`

Extend the Animal hierarchy with dynamic memory management.

**Brain class:**
- Contains an array of 100 `std::string` called `ideas`

**Dog and Cat classes:**
- Each has a private `Brain*` attribute
- Upon construction: create Brain using `new Brain()`
- Upon destruction: delete their Brain

**Requirements:**
- Create an array of Animal objects (half Dogs, half Cats)
- Delete all Animals properly (no memory leaks)
- Implement **deep copy** for Dog and Cat (shallow copy is forbidden)
- Test that copies are truly deep copies

**Example:**
```cpp
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j; // Should not create a leak
delete i;
```

**Key Learning:** Deep vs shallow copy, managing dynamically allocated members, proper use of virtual destructors.

### Exercise 02: Abstract class

**Directory:** `ex02/`  
**Files to turn in:** Files from previous exercise + `*.cpp`, `*.{h,hpp}`

Make the Animal class abstract to prevent direct instantiation.

**Requirement:**
- The Animal class should not be instantiable
- Everything else should work as before
- Optional: rename Animal to AAnimal (A prefix for abstract)

**Key Learning:** Creating abstract classes using pure virtual functions. Understanding why certain base classes should never be instantiated.

### Exercise 03: Interface & recap

**Directory:** `ex03/`  
**Files to turn in:** `Makefile`, `main.cpp`, `*.cpp`, `*.{h,hpp}`

Implement a complex system using interfaces (pure abstract classes) to simulate a Materia system.

**AMateria class (abstract):**
```cpp
class AMateria {
protected:
    [...]
public:
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
```

**Concrete Materia classes:**
- `Ice` - type: "ice", use: "* shoots an ice bolt at <name> *"
- `Cure` - type: "cure", use: "* heals <name>'s wounds *"

**ICharacter interface:**
```cpp
class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
```

**Character class:**
- Implements ICharacter interface
- Has an inventory of 4 slots for Materias
- Equips Materias in first empty slot (0-3)
- `unequip()` does NOT delete the Materia
- Deep copy required (copy constructor and assignment operator)

**IMateriaSource interface:**
```cpp
class IMateriaSource {
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
```

**MateriaSource class:**
- Can learn at most 4 Materias (stores copies)
- `createMateria()` returns a new Materia based on learned templates
- Returns 0 if type is unknown

**Expected output:**
```
* shoots an ice bolt at bob *
* heals bob's wounds *
```

**Key Learning:** Interface design, factory pattern, managing complex object relationships, avoiding memory leaks with proper ownership semantics.

*Note: This exercise is optional and not required to pass the module.*

## Project Structure

```
CPP04/
├── ex00/
│   ├── Makefile
│   ├── main.cpp
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── WrongAnimal.hpp
│   ├── WrongAnimal.cpp
│   ├── WrongCat.hpp
│   └── WrongCat.cpp
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Brain.hpp
│   └── Brain.cpp
├── ex02/
│   ├── Makefile
│   ├── main.cpp
│   ├── AAnimal.hpp (or Animal.hpp)
│   ├── AAnimal.cpp (or Animal.cpp)
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   ├── Brain.hpp
│   └── Brain.cpp
├── ex03/
│   ├── Makefile
│   ├── main.cpp
│   ├── AMateria.hpp
│   ├── AMateria.cpp
│   ├── Ice.hpp
│   ├── Ice.cpp
│   ├── Cure.hpp
│   ├── Cure.cpp
│   ├── ICharacter.hpp
│   ├── Character.hpp
│   ├── Character.cpp
│   ├── IMateriaSource.hpp
│   ├── MateriaSource.hpp
│   └── MateriaSource.cpp
└── README.md
```

## Installation

1. **Clone the Repository:**

   ```sh
   git clone https://github.com/yourusername/CPP04.git
   cd CPP04
   ```

2. **Build the Desired Exercise:**

   ```sh
   cd ex00 && make
   ```

## Usage

Each exercise produces its own executable. Navigate to the exercise directory and run:

**Exercise 00:**
```sh
./polymorphism
```

**Exercise 01:**
```sh
./brain
```

**Exercise 02:**
```sh
./abstract
```

**Exercise 03:**
```sh
./materia
```

Each program will demonstrate the polymorphic behavior, proper memory management, and interface implementation.

## Acknowledgments

- Thanks to the 42 community, mentors, and fellow students for their guidance and support.
- Special thanks to resources on C++ polymorphism, abstract classes, and interface design patterns.

## Disclaimer

**IMPORTANT**:
This project was developed solely as part of the educational curriculum at 42 School. The code in this repository is published only for demonstration purposes to showcase my programming and C++ development skills.

**Academic Integrity Notice**:
It is strictly prohibited to copy or present this code as your own work in any academic submissions at 42 School. Any misuse or uncredited use of this project will be considered a violation of 42 School's academic policies.

## License

This repository is licensed under the Creative Commons - NonCommercial-NoDerivatives (CC BY-NC-ND 4.0) license. You are free to share this repository as long as you:

- Provide appropriate credit.
- Do not use it for commercial purposes.
- Do not modify, transform, or build upon the material.

For further details, please refer to the CC BY-NC-ND 4.0 license documentation.

Developed with dedication and in strict adherence to the high standards of 42 School.
