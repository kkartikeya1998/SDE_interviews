# Strategy Design Pattern

## Intent
Encapsulate interchangeable algorithms and allow behavior to vary independently from the client.

## Structure
- Strategy (interface)
- ConcreteStrategy (implementations)
- Context (uses a strategy)

## Key Idea
Client chooses the behavior instead of the class deciding it.

## When to Use
- Multiple `if/else` or `switch` branches for behavior
- Need to swap algorithms at runtime
- Want to avoid deep inheritance hierarchies

## Preconditions
- Algorithms share a common interface
- Behavior can be separated cleanly

## Postconditions
- Behavior is interchangeable
- New strategies can be added without modifying context (OCP)
- Context delegates logic instead of implementing it

## Pros
- Eliminates conditional logic
- Promotes composition over inheritance
- Improves testability
- Extensible

## Cons
- Increases number of classes
- Client must understand and choose strategies
- Can be overkill for simple logic

## Core Insight
Shifts responsibility from:
- "Object decides behavior"
to:
- "Client chooses behavior"