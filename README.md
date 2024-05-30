<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Libft Project</title>
</head>
<body>

<h1>Libft</h1>
<p><strong>Your very first own library</strong></p>
<p>
    This project is about coding a C library. It will contain a lot of general-purpose functions your programs will rely upon.
</p>

<h2>Table of Contents</h2>
<ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#common-instructions">Common Instructions</a></li>
    <li><a href="#mandatory-part">Mandatory Part</a></li>
    <li><a href="#bonus-part">Bonus Part</a></li>
    <li><a href="#submission-and-peer-evaluation">Submission and Peer-Evaluation</a></li>
    <li><a href="#resources-and-testing">Resources and Testing</a></li>
</ul>

<h2 id="introduction">Introduction</h2>
<p>
    C programming can be very tedious when one doesn’t have access to the highly useful standard functions. This project is about understanding the way these functions work, implementing, and learning to use them. You will create your own library. It will be helpful since you will use it in your next C school assignments. Take the time to expand your libft throughout the year. However, when working on a new project, don’t forget to ensure the functions used in your library are allowed in the project guidelines.
</p>

<h2 id="common-instructions">Common Instructions</h2>
<ul>
    <li>Your project must be written in C.</li>
    <li>Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.</li>
    <li>Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non-functional and will receive a 0 during the evaluation.</li>
    <li>All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.</li>
    <li>If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.</li>
    <li>Your Makefile must at least contain the rules $(NAME), all, clean, fclean, and re.</li>
    <li>To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, libraries, or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.</li>
    <li>If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.</li>
    <li>We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defense. Indeed, during defense, you are free to use your tests and/or the tests of the peer you are evaluating.</li>
    <li>Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.</li>
</ul>

<h2 id="mandatory-part">Mandatory Part</h2>
<p><strong>Program name:</strong> libft.a</p>
<p><strong>Turn in files:</strong> Makefile, libft.h, ft_*.c</p>
<p><strong>Makefile:</strong> NAME, all, clean, fclean, re</p>
<p><strong>External functions:</strong> Detailed below</p>
<p><strong>Libft authorized:</strong> n/a</p>
<p><strong>Description:</strong> Write your own library: a collection of functions that will be a useful tool for your cursus.</p>

<h3>Technical Considerations</h3>
<ul>
    <li>Declaring global variables is forbidden.</li>
    <li>If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.</li>
    <li>Place all your files at the root of your repository.</li>
    <li>Turning in unused files is forbidden.</li>
    <li>Every .c file must compile with the flags -Wall -Wextra -Werror.</li>
    <li>You must use the command ar to create your library. Using the libtool command is forbidden.</li>
    <li>Your libft.a has to be created at the root of your repository.</li>
</ul>

<h3>Part 1 - Libc functions</h3>
<p>
    To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.
</p>
<p>
    Some of the functions’ prototypes you have to redo use the ’restrict’ qualifier. This keyword is part of the c99 standard. It is therefore forbidden to include it in your own prototypes and to compile your code with the -std=c99 flag.
</p>
<p>
    You must write your own function implementing the following original ones. They do not require any external functions:
</p>
<ul>
    <li>isalpha</li>
    <li>isdigit</li>
    <li>isalnum</li>
    <li>isascii</li>
    <li>isprint</li>
    <li>strlen</li>
    <li>memset</li>
    <li>bzero</li>
    <li>memcpy</li>
    <li>memmove</li>
    <li>strlcpy</li>
    <li>strlcat</li>
    <li>toupper</li>
    <li>tolower</li>
    <li>strchr</li>
    <li>strrchr</li>
    <li>strncmp</li>
    <li>memchr</li>
    <li>memcmp</li>
    <li>strnstr</li>
    <li>atoi</li>
</ul>
<p>
    In order to implement the two following functions, you will use malloc():
</p>
<ul>
    <li>calloc</li>
    <li>strdup</li>
</ul>

<h3>Part 2 - Additional functions</h3>
<p>
    In this second part, you must develop a set of functions that are either not in the libc or that are part of it but in a different form.
</p>
<p>
    Some of the following functions can be useful for writing the functions of Part 1.
</p>
<ul>
    <li><strong>Function name:</strong> ft_substr</li>
    <li><strong>Prototype:</strong> char *ft_substr(char const *s, unsigned int start, size_t len);</li>
    <li><strong>Parameters:</strong> s: The string from which to create the substring. start: The start index of the substring in the string ’s’. len: The maximum length of the substring.</li>
    <li><strong>Return value:</strong> The substring. NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc</li>
    <li><strong>Description:</strong> Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_strjoin</li>
    <li><strong>Prototype:</strong> char *ft_strjoin(char const *s1, char const *s2);</li>
    <li><strong>Parameters:</strong> s1: The prefix string. s2: The suffix string.</li>
    <li><strong>Return value:</strong> The new string. NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc</li>
    <li><strong>Description:</strong> Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_strtrim</li>
    <li><strong>Prototype:</strong> char *ft_strtrim(char const *s1, char const *set);</li>
    <li><strong>Parameters:</strong> s1: The string to be trimmed. set: The reference set of characters to trim.</li>
    <li><strong>Return value:</strong> The trimmed string. NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc</li>
    <li><strong>Description:</strong> Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_split</li>
    <li><strong>Prototype:</strong> char **ft_split(char const *s, char c);</li>
    <li><strong>Parameters:</strong> s: The string to be split. c: The delimiter character.</li>
    <li><strong>Return value:</strong> The array of new strings resulting from the split. NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc, free</li>
    <li><strong>Description:</strong> Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_itoa</li>
    <li><strong>Prototype:</strong> char *ft_itoa(int n);</li>
    <li><strong>Parameters:</strong> n: the integer to convert.</li>
    <li><strong>Return value:</strong> The string representing the integer. NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc</li>
    <li><strong>Description:</strong> Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_strmapi</li>
    <li><strong>Prototype:</strong> char *ft_strmapi(char const *s, char (*f)(unsigned int, char));</li>
    <li><strong>Parameters:</strong> s: The string on which to iterate. f: The function to apply to each character.</li>
    <li><strong>Return value:</strong> The string created from the successive applications of ’f’. Returns NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc</li>
    <li><strong>Description:</strong> Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the results from the successive applications of f.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_striteri</li>
    <li><strong>Prototype:</strong> void ft_striteri(char *s, void (*f)(unsigned int, char*));</li>
    <li><strong>Parameters:</strong> s: The string on which to iterate. f: The function to apply to each character.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> None</li>
    <li><strong>Description:</strong> Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_putchar_fd</li>
    <li><strong>Prototype:</strong> void ft_putchar_fd(char c, int fd);</li>
    <li><strong>Parameters:</strong> c: The character to output. fd: The file descriptor on which to write.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> write</li>
    <li><strong>Description:</strong> Outputs the character ’c’ to the given file descriptor.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_putstr_fd</li>
    <li><strong>Prototype:</strong> void ft_putstr_fd(char *s, int fd);</li>
    <li><strong>Parameters:</strong> s: The string to output. fd: The file descriptor on which to write.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> write</li>
    <li><strong>Description:</strong> Outputs the string ’s’ to the given file descriptor.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_putendl_fd</li>
    <li><strong>Prototype:</strong> void ft_putendl_fd(char *s, int fd);</li>
    <li><strong>Parameters:</strong> s: The string to output. fd: The file descriptor on which to write.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> write</li>
    <li><strong>Description:</strong> Outputs the string ’s’ to the given file descriptor followed by a newline.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_putnbr_fd</li>
    <li><strong>Prototype:</strong> void ft_putnbr_fd(int n, int fd);</li>
    <li><strong>Parameters:</strong> n: The integer to output. fd: The file descriptor on which to write.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> write</li>
    <li><strong>Description:</strong> Outputs the integer ’n’ to the given file descriptor.</li>
</ul>

<h2 id="bonus-part">Bonus Part</h2>
<p>
    If you completed the mandatory part, do not hesitate to go further by doing this extra one. It will bring bonus points if passed successfully.
</p>
<p>
    Functions to manipulate memory and strings are very useful. But you will soon discover that manipulating lists is even more useful.
</p>
<p>
    You have to use the following structure to represent a node of your list. Add its declaration to your libft.h file:
</p>
<pre><code>typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;</code></pre>
<p>
    The members of the t_list struct are:
</p>
<ul>
    <li>content: The data contained in the node. void * allows to store any kind of data.</li>
    <li>next: The address of the next node, or NULL if the next node is the last one.</li>
</ul>
<p>
    In your Makefile, add a make bonus rule to add the bonus functions to your libft.a.
</p>
<p>
    The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.
</p>

<h3>Bonus Functions</h3>
<ul>
    <li><strong>Function name:</strong> ft_lstnew</li>
    <li><strong>Prototype:</strong> t_list *ft_lstnew(void *content);</li>
    <li><strong>Parameters:</strong> content: The content to create the node with.</li>
    <li><strong>Return value:</strong> The new node</li>
    <li><strong>External functions:</strong> malloc</li>
    <li><strong>Description:</strong> Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstadd_front</li>
    <li><strong>Prototype:</strong> void ft_lstadd_front(t_list **lst, t_list *new);</li>
    <li><strong>Parameters:</strong> lst: The address of a pointer to the first link of a list. new: The address of a pointer to the node to be added to the list.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> None</li>
    <li><strong>Description:</strong> Adds the node ’new’ at the beginning of the list.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstsize</li>
    <li><strong>Prototype:</strong> int ft_lstsize(t_list *lst);</li>
    <li><strong>Parameters:</strong> lst: The beginning of the list.</li>
    <li><strong>Return value:</strong> The length of the list</li>
    <li><strong>External functions:</strong> None</li>
    <li><strong>Description:</strong> Counts the number of nodes in a list.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstlast</li>
    <li><strong>Prototype:</strong> t_list *ft_lstlast(t_list *lst);</li>
    <li><strong>Parameters:</strong> lst: The beginning of the list.</li>
    <li><strong>Return value:</strong> Last node of the list</li>
    <li><strong>External functions:</strong> None</li>
    <li><strong>Description:</strong> Returns the last node of the list.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstadd_back</li>
    <li><strong>Prototype:</strong> void ft_lstadd_back(t_list **lst, t_list *new);</li>
    <li><strong>Parameters:</strong> lst: The address of a pointer to the first link of a list. new: The address of a pointer to the node to be added to the list.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> None</li>
    <li><strong>Description:</strong> Adds the node ’new’ at the end of the list.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstdelone</li>
    <li><strong>Prototype:</strong> void ft_lstdelone(t_list *lst, void (*del)(void *));</li>
    <li><strong>Parameters:</strong> lst: The node to free. del: The address of the function used to delete the content.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> free</li>
    <li><strong>Description:</strong> Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstclear</li>
    <li><strong>Prototype:</strong> void ft_lstclear(t_list **lst, void (*del)(void *));</li>
    <li><strong>Parameters:</strong> lst: The address of a pointer to a node. del: The address of the function used to delete the content of the node.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> free</li>
    <li><strong>Description:</strong> Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstiter</li>
    <li><strong>Prototype:</strong> void ft_lstiter(t_list *lst, void (*f)(void *));</li>
    <li><strong>Parameters:</strong> lst: The address of a pointer to a node. f: The address of the function used to iterate on the list.</li>
    <li><strong>Return value:</strong> None</li>
    <li><strong>External functions:</strong> None</li>
    <li><strong>Description:</strong> Iterates the list ’lst’ and applies the function ’f’ on the content of each node.</li>
</ul>
<ul>
    <li><strong>Function name:</strong> ft_lstmap</li>
    <li><strong>Prototype:</strong> t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));</li>
    <li><strong>Parameters:</strong> lst: The address of a pointer to a node. f: The address of the function used to iterate on the list. del: The address of the function used to delete the content of a node if needed.</li>
    <li><strong>Return value:</strong> The new list. NULL if the allocation fails.</li>
    <li><strong>External functions:</strong> malloc, free</li>
    <li><strong>Description:</strong> Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.</li>
</ul>

<h2 id="submission-and-peer-evaluation">Submission and Peer-Evaluation</h2>
<p>
    Turn in your assignment in your git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct. Place all your files at the root of your repository.
</p>

<h2 id="resources-and-testing">Resources and Testing</h2>
<p>
    Here are some useful resources and testing tools to help you with your libft project:
</p>
<ul>
    <li><a href="https://github.com/jtoty/Libftest">Libftest</a>: A comprehensive test suite for libft.</li>
    <li><a href="https://github.com/alelievr/libft-unit-test">libft-unit-test</a>: Another great test suite for libft.</li>
    <li><a href="https://github.com/Tripouille/libftTester">libftTester</a>: A simple and effective libft tester.</li>
    <li><a href="https://github.com/y3ll0w42/libft-war-machine">libft-war-machine</a>: A battle-tested suite to ensure your libft is robust.</li>
    <li><a href="https://github.com/42Paris/42cursus-libft">42cursus-libft</a>: The official repository for the 42 school libft project.</li>
</ul>

<hr>

<p>Thank you for checking out the <strong>libft</strong> project! Happy coding!</p>

</body>
</html>
