# Composite Patternd

## Intent
- Compose objects into tree structures to represent part-whole hierarchies  
- Allow clients to treat individual objects and groups uniformly  

## Structure
- Component (interface / abstract class)
  - declares common operations  
- Leaf
  - individual object with no children  
- Composite
  - stores child Components  
  - implements child management operations  
  - delegates work recursively to children  
- Client
  - interacts with Component uniformly  

## When to Use
- Need to represent hierarchical/tree structures  
- Clients should treat single objects and groups the same way  
- Recursive composition of objects is required  
- Want to simplify client logic for nested structures  

## Core Idea
- A group of objects should behave like a single object  
- Composite contains Components, including other Composites  

## What It Solves
- Eliminates special handling for individual vs grouped objects  
- Simplifies operations on recursive structures  
- Provides uniform interaction with hierarchical data  

## Connection to SOLID Principles
- **Single Responsibility Principle (SRP)**
  - Leaf handles individual behavior  
  - Composite manages child composition and delegation  

- **Open/Closed Principle (OCP)**
  - New component types can be added without changing client logic  

- **Liskov Substitution Principle (LSP)**
  - Leaves and composites are interchangeable via Component interface  

- **Dependency Inversion Principle (DIP)**
  - Client depends on abstract Component, not concrete classes  

## Preconditions
- Objects can be represented in recursive hierarchy form  
- Leaf and composite share common behavior  
- Operations can be generalized across hierarchy levels  

## Postconditions
- Client interacts uniformly with single objects and groups  
- Tree structures become easier to traverse and manipulate  
- Recursive operations are centralized and simplified  

## Trade-offs

### Pros
- Simplifies client code through uniformity  
- Makes recursive structures easier to model  
- Supports dynamic tree composition  
- Extensible and scalable hierarchy design  

### Cons
- Hard to restrict operations valid only for leaves/composites  
- Can make design overly generic  
- Recursive traversal may impact performance  
- Debugging deep trees can become difficult  

## Subtle but Important Insight
- Shifts from:
  - "treat single objects and collections differently"  
  - to "treat everything as a Component"  

This enables:
- recursive composition  
- simpler client logic  
- elegant tree processing  

## Variants
- Transparent Composite → child operations exposed in Component interface  
- Safe Composite → child operations only in Composite class  
- Immutable Composite → hierarchy cannot change after creation  

## Comparisons
- vs Decorator → recursive tree composition vs layered behavior addition  
- vs Iterator → traversal mechanism vs hierarchical structure  
- vs Flyweight → shared lightweight objects vs recursive object composition  