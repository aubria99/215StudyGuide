#include <map> //this allows you to use mapping in your program
#include <locale>
#include <string> //this allows you to use strings in your program
#include <iostream> //this is what you need in every c++ program
using namespace std; //using standard library

int main() //main function
{
    string Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24, Q25, Q26, Q27, Q28, Q29, Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37; //list of strings which represent our questions
    
    Q1 = "All the operations used to construct algorithms belong to one of only three categories: \n1.    Sequential \n2.    Conditional \nWhat is the third operation?\n\n"; //question 1 
    
    Q2 ="What is the best definition of an algorithm?\nA. A well-ordered collection of unambiguous and effectively computable operations that, when executed, produces a result and halts in a finite amount of time.\nB. A list of instructions that can be effectively computable or it can be unsolveable.\nC. Instructions to accomplish a task.\nD. Computer language.\n"; //question 2
    
    Q3 ="What generation were transistors and core memories invented?\nA.     Second\nB.     First\nC.     Fifth\nD.    Third\n"; //question 3
    
    Q4 ="a "; //question 4
    Q5 =" a"; //question 5
    Q6 =" a"; //question 6
    Q7 =" a"; //question 7
    
    Q8 ="Any operation on this computer that exceeds the maximum allowable value is called ___________ _________.\n"; //question 8
    
    Q9 ="In an  __________ representation, objects can take on any value.\n"; //question 9
    
    Q10 ="The __________ of the wave is a measure of its loudness—the greater the ________ the louder the sound.\n"; //question 10
    Q11 ="The construction of computer circuits is based on the branch of mathematics and symbolic logic called _________   __________.\n"; //question 11
    Q12 ="A _______ is an electronic device that operates on a collection of binary inputs to produce a binary output.\n"; //question 12
    Q13 ="A _______ is a collection of logic gates that transforms a set of binary inputs into a set of binary outputs and in which the values of the outputs depend only on the current values of the inputs.\n"; //question 13
    Q14 ="The study of algorithms is _________	___________.\n"; //question 14
    Q15 ="The study of the efficiency of algorithms is called _________  __ __________.\n"; //question 15
    Q16 =" ";
    Q17 ="A  _______ can be thought of as a group of one or more, programming statements that collectively has a name.\n"; //question17
    Q18 =" a"; //question 18
    Q19 ="Every complete statement ends with a\nA)   Period\nB)   # symbol\nC)   semicolon\nD)   ending brace"; //question 19
    Q20 ="Which of the following statements is correct?\nA)   #include (iostream)\nB)   #include {iostream}\nC)   #include <iostream>\nD)   #include [iostream]\nE)   All of the above\n"; //question 20
    Q21 ="A _________ _____ is a statement that causes a function to execute. A function definition contains the statements that make up the function.\n"; //question 21
    Q22 ="The ___ statement can cause other statements to execute only under certain conditions.\n"; //question 22
    Q23 =" a"; //question 23
    Q24 ="a "; //question 24
    Q25 ="_______ ______ is breaking a program up into smaller, manageable functions. \n"; //question 25
    Q26 ="A ________ collection of statements to perform a specific task.\n"; //question 26
    Q27 =": __________: Values passed to a function.\n"; //question 27
    Q28 ="__________: Variables in function that hold values passed as arguments.\n"; //question 28 
    Q29 ="_____  ___ _____: when an argument is passed to a function, a copy of its value is placed in the parameter.\n"; //question 29
    Q30 ="______  ______: defined within a function or block; accessible only with the function or block.\n"; //question 30
    Q31 ="______  ______: a variable defined outside all functions; it is accessible to all functions within its scope.\n"; //question 31
    Q32 =" _______  ______: a named constant that can be used by every function in a program.\n"; //question 32
    Q33 ="______ ______: values passed automatically if arguments are missing from the function call\n"; //question 33
    Q34 ="_______  ______: an alias for another variable.Mechanism that allows a function to work with the original argument from the function call, not a copy of the argument\n"; //question 34
    Q35 ="True or false: 4 Things Before A Compiler Runs it Must Know About a Function :\n1) name\n2) return type\n3) number of parameters\n4) data type of each parameter\n"; //question 35
    Q36 ="True or false: \n The address operator (&) returns the memory address of a variable.\n"; //question 36
    Q37 ="a "; //question 37
    
    map<string, string> question; //this is passing in strings as vectors that will be used for the question
    map<string, string> answer; //this is passing in strings as vectors that will be used for the answer
    map<string, int> points; //this is passing in a string and an int as vectors that will be used for points
     
    //these are questions in the game
    //what the user will see is the string in [] which is being set to the key value which lines up with the mapping
    question["CIS111 Q1"] = Q1;
    question["CIS111 Q2"] = Q2;
    question["CIS111 Q3"] = Q3;
    question["CIS111 Q4"] = Q4;
    question["CIS111 Q5"] = Q5;
    question["CIS111 Q6"] = Q6;
    question["CIS111 Q7"] = Q7;
    question["CIS111 Q8"] = Q8;
    question["CIS111 Q9"] = Q9;
    question["CIS111 Q10"] = Q10;
    question["CIS111 Q11"] = Q11;
    question["CIS111 Q12"] = Q12;
    question["CIS111 Q13"] = Q13;
    question["CIS111 Q14"] = Q14;
    
    
    question["CIS121 Q1"] = Q15;
    question["CIS121 Q2"] = Q16;
    question["CIS121 Q3"] = Q17;
    question["CIS121 Q4"] = Q18;
    question["CIS121 Q5"] = Q19;
    question["CIS121 Q6"] = Q20;
    question["CIS121 Q7"] = Q21;
    question["CIS121 Q8"] = Q22;
    question["CIS121 Q9"] = Q23;
    question["CIS121 Q10"] = Q24;
    
    question["CIS215 Q1"] = Q25;
    question["CIS215 Q2"] = Q26;
    question["CIS215 Q3"] = Q27;
    question["CIS215 Q4"] = Q28;
    question["CIS215 Q5"] = Q29;
    question["CIS215 Q6"] = Q30;
    question["CIS215 Q7"] = Q31;
    question["CIS215 Q8"] = Q32;
    question["CIS215 Q9"] = Q33;
    question["CIS215 Q10"] =Q34;
    question["CIS215 Q11"] =Q35;
    question["CIS215 Q12"] =Q36;
    question["CIS215 Q13"] =Q37;
    
    //these are the answers to the questions that are mapped at specific key values which are denoted in []
    answer[Q1] = "iterative"; //this is the answer to question 1
    answer[Q2] = "a"; //this is the answer to question 2
    answer[Q3] ="a"; //this is the answer to question 3
    answer[Q4] ="a"; //this is the answer to question 4
    answer[Q5] ="aA"; //this is the answer to question 5
    answer[Q6] ="a"; //this is the answer to question 6
    answer[Q7] ="a"; //this is the answer to question 7
    answer[Q8] = "arithmetic overflow"; //this is the answer to question 8 
    answer[Q9] = "analog"; //this is the answer to question 9
    answer[Q10] = "amplitude"; //this is the answer to question 10
    answer[Q11] = "boolean logic"; //this is the answer to question 11
    answer[Q12] = "gate"; //this is the answer to question 12
    answer[Q13] = "circuit"; //this is the answer to question 13
    answer[Q14] = "computer science"; //this is the answer to question 14
    answer[Q15] = "analysis of algorithms"; //this is the answer to question 15
    answer[Q16] = "comment"; //this is the answer to question 16
    answer[Q17] = "function"; //this is the answer to questino 17
    answer[Q18] ="a"; //this is the answer to question 18
    answer[Q19] = "c"; //this is the answer to question 19
    answer[Q20] = "c"; //this is the answer to question 20
    answer[Q21] = "function call"; //this is the answer to question 21
    answer[Q22] = "if"; //this is the answer to question 22
    answer[Q23] ="a"; //this is the answer to question 23
    answer[Q24] ="a"; //this is the answer to question 24
    answer[Q25] = "modular programming"; //this is the answer to question 25
    answer[Q26] = "function"; //this is the answer to question 26
    answer[Q27] = "arguments"; //this is the answer to question 27
    answer[Q28] = "parameters"; //this is the answer to question 28
    answer[Q29] = "pass by value"; //this is the answer to question 29
    answer[Q30] = "local variable"; //this is the answer to question 30
    answer[Q31] = "global variable"; //this is the answer to question 31
    answer[Q32] = "global constants"; //this is the answer to question 32
    answer[Q33] = "default arguments"; //this is the answer to question 33
    answer[Q34] = "refence variable"; //this is the answer to question 34
    answer[Q35] = "true"; //this is the answer to question 35
    answer[Q36] = "true"; //this is the answer to question 36
    answer[Q37] ="a"; //this is the answer to question 37
    
    for (int i = 0; i < 10; i++) //start of for loop
    {
        int computerchoice; //initializes the variable computerchoice
        srand(i); //this initializes a random variable
        computerchoice = (rand()%10)+1; //this sets the computerchoice equal to the random number generator
        
        cout<<computerchoice<<endl;//displays the computer choice
    }

    string userinput, correctchoice; //this initializes the strings userinput and correctchoice
    cout<<"Welcome to your interactive Computer Science study guide!\n"
    "This a tool that will help you study compter science core\n"
    "topics from CIS 111, all the way to CIS 215! As the game \n"
    "progresses the questions may seem to get a little bit more \n"
    "diffucult, but don't worry, that's a good thing. That means \n"
    "you're learning! We wish you the best of luck!!!"<<endl;
    
    
}
