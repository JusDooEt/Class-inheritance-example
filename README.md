# Shape Class and Subclass Inheriance
## Summary
This program has a base Shape class with a default constructor and destructor, and has a pure virtual function making Shape an abstract class. 
The pure virtual function will be used to create overriden functions for unique subclasses of Shape. The Circle, Rectangle, and Triangle class are all
subclasses of shape and include the data members required to calculate the area of the class shape. This is done by redefining the virtual calcArea function 
on a class by class basis. The program will ask the user to choose a shape and will use the subclasses to create a dynamic object for the user to manipulate and 
find the area using the calcArea public member function.
