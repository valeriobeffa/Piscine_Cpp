# BraiiiiiiinnnzzzZ - 42 Roma LUISS

First, make a Zombie class. The zombies have a private name and are able to announce themselves like:
<name> BraiiiiiiinnnzzzZ...
Yes, announce(void) is a member function. Also, add a debugging message in the destructor including de name of the Zombie.
After this, write a function that will create a Zombie, name it, and return it to be used somewhere else in your code.
The prototype of the function is:
Zombie* newZombie(std::string name);
You will also have to write another function that will create a Zombie, and make it announce itself.
The prototype of the function is: void randomChump(std::string name).
Now the actual point of the exercise: your Zombies must be destroyed at the appropriate time (when they are not needed anymore).
They must be allocated on the stack or the heap depending on its use: sometimes it’s appropriate to have them on the stack, at other times the heap may a better choice.
