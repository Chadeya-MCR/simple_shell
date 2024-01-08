0x16. C - Simple unix interpreter 


1. A beautiful code that passes the Betty checks
2. Write a UNIX command line interpreter.
The Shell should:
- Display a prompt and wait for the user to type a command. A command line always ends with a new line. 
- The prompt is displayed again each time a command has been executed. The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- You have to handle the “end of file” condition (Ctrl+D) 
- - You don’t have to:
 -> Use the PATH 
 -> implement built-ins
 -> handle special characters : ", ', `, , *, &, # be able to move the cursor handl  e commands with arguments 2. Simple shell 0.2 Simple shell 0.1 +
 -> Handle command lines with arguments 
=> Handle command lines with arguments
=> Handle the PATH
  fork must not be called if the command doesn’t exist

3. Implement the exit built-in, that exits the shell 
- Usage: exit 
- You don’t have to handle any argument to the built-in exit 
4.  Implement the env built-in, that prints the current environment 
5.  Write your own getline function 
    • Use a buffer to read many chars at once and call the least possible the read      system call
    • You will need to use static variables
    • You are not allowed to use getline You don’t have to: 
    • be able to move the cursor 
6. Implement the  setenv, unsetenv 

=> setenv 
    Initialize a new environment variable, or modify an existing one 
    Command syntax: setenv VARIABLE VALUE
    Should print something on stderr on failure
=> unsetenv
    Remove an environment variable
    Command syntax: unsetenv VARIABLE 
    Should print something on stderr on failure 
7.  Implement the builtin command cd: 
    • Changes the current directory of the process.
    • Command syntax: cd [DIRECTORY]
    • If no argument is given to cd the command must be interpreted like cd $HOME
    • You have to handle the command cd - 
    • You have to update the environment variable PWD when you change directory man chdir, man getcwd
8.  Handle the commands separator
9. Handle the && and || shell logical operators
10. Implement the alias builtin command
    Usage: alias [name[='value'] ...]
    alias: Prints a list of all aliases, one per line, in the form name='value'
    alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the      form name='value'
    alias name='value' [...]: Defines an alias for each name whose value is given.      If name is already an alias, replaces its value with value
11. Handle variables replacement
    Handle the $? variable
    Handle the $$ variable
12. Handle comments (#)
13. Usage: simple_shell [filename]
    Your shell can take a file as a command line argument
    The file contains all the commands that your shell should run before exiting
    The file should contain one command per line
    In this mode, the shell should not print a prompt and should not read from stdin

