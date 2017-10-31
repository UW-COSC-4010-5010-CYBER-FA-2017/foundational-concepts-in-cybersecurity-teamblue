Group Members:
Jordan Cooper
Nick Stegelman

Homework 1 and Homework 2:
10 foundational concepts in cybersecurity properly programmed and improperly programmed.

The files are divided up into folders HW1 and HW2, and each of those folders contain sub-folders which contain proper and improper implementation folders that contain the corresponding files and makefiles.

Program Information:
Domain Separation:
- Proper - The program contains test data and real data which are represented by integers. The program begins with testing the test data first, and if the real data is tested first, then there's an error outputed.
- Improper - The program contains test data and real data, and the program doesn't care whether or not the test data or real data is tested first.

Process Isolation:
- Proper - There are two arrays containing data. They neither of them interact with each other and they are deleted at the end of the program.
- Improper - There are two arrays containing data. One array points to the other and it's data changes which changes the data of the other array. Then it gets deleted which deletes both arrays.

Resource Encapsulation:
- Proper - There's a class that defines an object. And everything needed to change or recieve information about the object can be accessed by the methods of the class.
- Improper - The class contains methods that the developer can use to change or access information about it, but there's a function seperate from the class that can alter data about the object.

Least Privelage:
- Proper - There's an array containing the names of admins, and the user enters in their name. If their name is on the list, they are given admin privelages, otherwise they aren't.
- Improper - The user enters in their name, and they're given admin privelages whether they are an admin or not.

Modularity:
- Proper - 
- Improper - 

Layering:
- Proper -
- Improper -

Abstraction:
- Proper - There's a class that contains private methods. The methods can't be called publicly so that there's less work for the developer.
- Improper - There's a class that contains only public methods. The methods can be private, but are instead public and the developer has to call the mutators and accessrs in order to change or recieve information regarding the object.

Data Hiding:
- Proper - There's a class that contains accessors that don't reveal sensitive information about the class.
- Improper - There's a class that contains a method that reveals potentially vulnerable information about the class.

Simplicity:
- Proper - A function that contains self documenting code, plenty of comments and naming conventions that are easy to understand what's happening throughout the program.
- Improper - A program that contains horrible naming conventions and no comments. And is difficult to understand what's happening without looking purely at the logic of it.

Minimization:
- Proper - 
- Improper - 

