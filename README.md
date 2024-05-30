<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <img src="./libft.webp" alt="42porto printf">
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
