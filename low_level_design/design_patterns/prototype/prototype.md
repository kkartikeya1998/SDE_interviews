# Prototype Pattern 

## Intent
- Create new objects by copying existing ones (prototypes)  
- Avoid costly or complex object creation  
- Enable object creation without depending on concrete classes  

## Structure
- Prototype (interface)
  - clone() → returns a copy of the object  
- ConcretePrototype
  - implements clone() (deep/shallow copy)  
- Client
  - uses clone() instead of `new`  

## When to Use
- Object creation is expensive (e.g., DB calls, heavy computation)  
- Need many similar objects with slight variations  
- Want to avoid subclass explosion for object creation  
- Objects need to be created at runtime dynamically  

## Core Idea
- Instead of:
  - "create from scratch"  
- Do:
  - "copy an existing instance and modify it"  

## What It Solves
- Eliminates repeated initialization cost  
- Removes dependency on concrete classes during creation  
- Simplifies creation of complex objects  

## Summary
- Object copying via cloning  
- Dynamic object creation at runtime  
- Reduced need for multiple factory subclasses  

## Preconditions
- Objects support cloning (implement clone or copy mechanism)  
- Internal state can be safely copied  
- Deep vs shallow copy decision is well understood  

## Postconditions
- New objects are created via cloning  
- Creation is faster than building from scratch  
- Client is decoupled from concrete classes  

## Trade-offs

### Pros
- Improves performance for expensive object creation  
- Reduces subclassing (no need for many factories)  
- Enables dynamic and flexible object creation  
- Simplifies object creation for complex objects  

### Cons
- Cloning can be tricky (deep vs shallow copy issues)  
- Requires careful handling of references (mutable state)  
- May violate encapsulation (access to internal state needed)  
- Not all objects are easily cloneable  

## Subtle but Important Insight
- Shifts from:
  - "construct objects using constructors"  
  - to "duplicate existing objects as templates"  

This enables:
- fast object creation  
- runtime flexibility  
- reuse of preconfigured instances  

## Variants
- Shallow Copy → copies references (faster, but risky)  
- Deep Copy → copies full object graph (safe, but expensive)  
- Prototype Registry → store and reuse predefined prototypes  

## Comparisons
- vs Factory Method → subclass-based creation vs cloning-based creation  
- vs Abstract Factory → structured creation vs instance duplication  
- vs Builder → step-by-step construction vs copying existing object  