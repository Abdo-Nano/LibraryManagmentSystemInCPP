

## The main three steps for great software
- The software must do what does the customer want
- Apply OO principles to add flexibility
- Apply design patterns and principles for maintainable design

## Do what the customer do want it.
> Don't create problems to solve problems


> as long as your focus is
still on the customer’s needs. You want
the basic features of your application in
place before you start making big design
changes. But while you’re working on
functionality, you can certainly use good
OO principles and techniques to make
sure your application is well designed
from the start.

### And why is it so important to finish Step 1 before going on to Step 2?
> You’re going to make lots of
changes to your software when you’re
getting it to work right. Trying to do too much
design before you’ve at least got the basic
functionality down can end up being a waste,
because a lot of the design will change as
you’re adding new pieces of functionality to
your classes and methods.


### Apply basic OO principles to add flexibility
### One object = One job
> In the better-designed areas of Objectville, objects
are very particular about their jobs. Each object is
interested in doing its job, and only its job, to the best
of its ability. There’s nothing a well-designed object
hates more than being used to do something that really
isn’t its true purpose.
### Encapsulation to avoid duplicate code
> Encapsulation is also about breaking your app into logical
parts, and then keeping those parts separate. So just like you keep the
data in your classes separate from the rest of your app’s behavior, we
can keep the generic properties of a guitar separate from the actual
Guitar object itself. If you get stuck, think about the things that are
common between the Guitar object and what a
client would supply to the search() method.

> Encapsulate what does change frequently 

> Anytime you see duplicate code , look for a place to encapsulate

### what is the delegation?
> Delegation is when an object needs to
perform a certain task, and instead of doing that
task directly, it asks another object to handle the
task (or sometimes just a part of the task).
> Delegation makes your code more
reusable. It also lets each object worry about
its own functionality, rather than spreading the
code that handles a single object’s behavior all
throughout your application

>Once you’ve got the basic functionality of an app in
place, work on refining the design so it’s flexible.



