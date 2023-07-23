# printf group project

22-07-23: Both of us worked on the format specifiers in the printf function file we are trying to create.

So, Olix renamed the ```printf.h``` file to ```main.h```. Probably because of a naming convention that ALX requested.

23-07-23: Ayomide deleted the ```printf.h``` because we already have renamed it to ```main.h```.
And the made chages to the ```_printf.c``` file to account for null character from the beginning of argument. Tried doing it with the original While loop we started with. It was bring error. Couldn't pass in multiple args in a while loop.
Made sure not to delete anything. Instead, Ayomide commented out previous increments so the new changes are easily recognisable.
In the ```_string.c``` file, added string value to count through individual charactrer since we are using our customised _putchar that prints one char at a time so it keeps printing(and count 1) until ir reaches the null byte and then we end loop. Then return the string value.


To be continued...
