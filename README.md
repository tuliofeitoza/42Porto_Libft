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
    <li><strong>Parameters:</strong> s1
