# SmartCalculator
This a mathematical calculator that also a chat bot it is able to calculate mathematical problems by typing it in english language 


This calculator is developed by RazSoft under a open source project 
Developer :- Rohit Raz
Facebook for help :-  https://www.facebook.com/Razsoft/

This is a chat bot calculator that able to solve mathematical problem by inputting in your language(ENGLISH)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

The project is divided into five files 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

First is main.c this function is where program recive a string by a global variable str[250]
then it passes it to find macro function
FindMacro() is efiend in finder.c file haveing find.h heaer file 
which sends the control to various mathematical function defiend in algebra.h
then control goes to FindNum() function which is used to find the number from string and 
and calculation is done.

then again function return to main and repet all the process...........
