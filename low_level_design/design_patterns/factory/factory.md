# Factory Method Pattern

## Intent
- Define an interface for creating objects  
- Let subclasses decide which class to instantiate  
- Defer object creation to subclasses  

## Structure
- Creator (abstract class / interface)
  - factoryMethod() → returns Product  
  - may contain business logic using the product  
- ConcreteCreator
  - overrides factoryMethod() to instantiate specific Product  
- Product (interface / abstract class)
- ConcreteProduct
  - actual implementations of Product  

## When to Use
- Class cannot anticipate the exact type of objects it must create  
- Want to delegate instantiation logic to subclasses  
- Need to follow Open/Closed Principle for object creation  
- Want to encapsulate object creation logic  

## Core Idea
- Move object creation from:
  - client / base class  
  - into subclasses via overridden factory method  

## What It Solves
- Removes tight coupling to concrete classes  
- Avoids hardcoded `new` calls in business logic  
- Enables flexible and extensible object creation  

## What You Get
- Polymorphism in object creation  
- Separation of:
  - creation logic  
  - usage logic  
- Base class defines contract, subclasses decide instantiation  

## Preconditions
- Products share a common interface or base class  
- Creation logic varies across implementations  
- Subclasses are allowed to control instantiation  

## Postconditions
- Object creation is encapsulated and extensible  
- Client code depends only on abstractions  
- New product types can be introduced without modifying existing logic  

## Trade-offs

### Pros
- Loose coupling between creator and concrete products  
- Adheres to Open/Closed Principle  
- Centralizes and encapsulates object creation  
- Improves maintainability and scalability  

### Cons
- Increased number of classes (creator + multiple concrete creators)  
- Can introduce complexity for simple creation logic  
- Requires subclassing even for small variations  

## Subtle but Important Insight
- Shifts from:
  - "directly instantiating objects"  
  - to "delegating instantiation to subclasses"  

This enables:
- extensibility in object creation  
- cleaner separation of concerns  
- better testability and mocking  

## Variants
- Parameterized Factory Method → decides product based on input  
- Lazy Factory Method → creates objects only when needed  
- Factory Method + Template Method → factory used inside workflow  

## Comparisons
- vs Abstract Factory → single product family vs multiple related products  
- vs Template Method → focuses on object creation vs algorithm structure  
- vs Strategy → selects behavior vs selects object type  