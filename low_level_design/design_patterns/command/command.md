# Command Pattern (Refined Notes)

## Intent
- Encapsulate a request as an object
  - Decouples the source and receiver  
- Parameterize clients with different requests  
- Support undo/redo and request queuing  

## Structure
- Command (interface)
- ConcreteCommand (implements execution)
- Receiver (performs actual work)
- Source/Invoker (triggers command)
- Client (creates and configures command)

## When to Use
- Need to decouple sender from receiver  
- Want to parameterize actions (buttons, menu items, etc.)  
- Support undo/redo operations  
- Need logging, queuing, or scheduling of requests  

## Core Idea
- Turn actions into objects  
- Invoker calls command → command calls receiver  

## What It Solves
- Removes tight coupling between caller and logic  
- Eliminates hardcoded method calls  
- Enables flexible and extensible action handling  

## What You Already Have (Sharpened)
- Decouples:
  - invoker (who triggers)  
  - receiver (who executes)  
- Encapsulates request details into command object  
- Supports:
  - delayed execution  
  - undo/redo  
  - macro commands (composing multiple commands)  

## Preconditions
- Commands share a common interface (e.g., `execute()`)  
- Receiver logic can be separated from invocation  
- Enough information is stored in command to execute later  

## Postconditions
- Requests are first-class objects  
- New commands can be added without changing invoker (OCP)  
- Execution is decoupled from request creation  

## Trade-offs

### Pros
- Loose coupling between sender and receiver  
- Extensible (new commands without modifying existing code)  
- Supports undo/redo and logging  
- Enables macro/compound commands  

### Cons
- Increased number of classes  
- Can add indirection (harder to trace flow)  
- Storing state for undo can be complex  
- Overkill for simple direct calls  

## Subtle but Important Insight
- Shifts from:
  - "call a method directly"  
  - to "wrap the call as an object"  

This enables:
- delayed execution  
- history tracking  
- flexible composition  

## Variants
- Undoable Command → stores previous state  
- Macro Command → executes multiple commands  
- Null Object Command → avoids null checks  

## Comparisons
- vs Strategy → selects algorithm vs encapsulates request  
- vs Observer → event notification vs action execution  
- vs Chain of Responsibility → passes request along chain vs executes encapsulated request  