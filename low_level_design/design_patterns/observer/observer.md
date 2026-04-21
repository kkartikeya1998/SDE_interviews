# Observer Pattern (Refined Notes)

## Intent
- Define a one-to-many dependency between objects  
- When one object (subject) changes state, all dependents (observers) are notified automatically  

## Structure
- Subject/Observable (publisher)
- Observer (interface)
- ConcreteObserver (subscribers)
- ConcreteSubject (holds state, notifies observers)

## When to Use
- Multiple objects need to react to state changes  
- Want to decouple sender from receivers  
- Event-driven systems (UI, messaging, reactive systems)  

## Core Idea
- Subject maintains a list of observers  
- Observers subscribe/unsubscribe  
- Subject notifies observers on state change  

## What It Solves
- Removes tight coupling between components  
- Avoids polling (push-based updates instead)  
- Enables dynamic subscription  

## Preconditions
- Observers share a common interface  
- Clear event/state change trigger exists  
- Update mechanism (push or pull) is defined  

## Postconditions
- Observers stay in sync with subject state  
- New observers can be added without modifying subject (OCP)  
- Loose coupling between subject and observers  

## Trade-offs

### Pros
- Loose coupling between components  
- Supports broadcast communication  
- Dynamic and flexible subscriptions  
- Good for event-driven architectures  

### Cons
- Can lead to unexpected update chains  
- Harder to debug (implicit flow)  
- Risk of memory leaks (forgotten unsubscriptions)  
- Order of notifications may be undefined  
- Performance issues with many observers  

## Subtle but Important Insight
- Communication is **indirect and event-driven**, not explicit calls  
- Shifts from:
  - "call specific objects"
  - to "notify whoever is interested"  

## Variants
- Push model → subject sends full data  
- Pull model → observers request needed data  

## Comparisons
- vs Strategy → behavior selection vs event notification  
- vs Mediator → centralized communication vs distributed observers  
- vs Publisher-Subscriber → similar, but often more decoupled via message broker  