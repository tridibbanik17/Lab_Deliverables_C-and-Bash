#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
        puts("Full name: Tridib Banik");
        sleep(1);
        puts("Student number: 400514461");
        sleep(1);
        puts("Course name: SFWRENG 2XC3: Development Basics");
        sleep(1);
        puts("What do you think is the most useful thing you’ve learned so far in this course?");
        sleep(3);
        puts("I think the most useful thing I've learned so far in this course is the familiarization with the Linux shell scripting.");
        sleep(6);
        puts("Is there anything you’ve learned so far that you do not think is useful? If so, explain why.");
        sleep(4);
        puts("There is one thing I've learned so far that I do not think is useful and that is a command used in MacOS called 'open' to open a file. Since I am not a Mac user, the information is not necessary.");
        sleep(12);
        puts("What are the advantages and disadvantages of using vim for coding?");
        sleep(3);
        puts("The advantages of using vim for coding are that it can be used from the Linux shell and it changes font color based on the command I am writing. The disadvantages are that they do not provide any graphics user interface and I always need to use 'colon' to save or exit my file which sometimes I forget.");
        sleep(18);
        puts("What are the advantages and disadvantages of using VS Code for coding?");
        sleep(3);
        puts("The advantages of using VS code for coding are that it illustrates different commands with different font colors, then auto-indentation was useful and finally the opportunity to download various packages as extensions free of costs. The disadvantage is that it cannot run directly at Linux shell.");
        sleep(18);
        return EXIT_SUCCESS;
}
