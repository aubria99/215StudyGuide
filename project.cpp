#include <map>
#include <locale>
#include <string>
#include <iostream>
using namespace std;

int start()
{
    int computerchoice;
    //srand(time(NULL));
    computerchoice = (rand()%10)+1;
    
    return computerchoice;
}
int main(){
    string Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24, Q25, Q26, Q27, Q28, Q29, Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37;
    
    Q1 = "All the operations used to construct algorithms belong to one of only three categories: \n1.    Sequential \n2.    Conditional \nWhat is the third operation?\n\n";
    
    Q2 ="What is the best definition of an algorithm?\nA. A well-ordered collection of unambiguous and effectively computable operations that, when executed, produces a result and halts in a finite amount of time.\nB. A list of instructions that can be effectively computable or it can be unsolveable.\nC. Instructions to accomplish a task.\nD. Computer language.\n";
    
    Q3 ="What generation were transistors and core memories invented?\nA.     Second\nB.     First\nC.     Fifth\nD.    Third\n";
    
    Q4 ="a ";
    Q5 =" a";
    Q6 =" a";
    Q7 =" a";
    
    Q8 ="Any operation on this computer that exceeds the maximum allowable value is called ___________ _________.\n";
    
    Q9 ="In an  __________ representation, objects can take on any value.\n";
    
    Q10 ="The __________ of the wave is a measure of its loudness—the greater the ________ the louder the sound.\n";
    Q11 ="The construction of computer circuits is based on the branch of mathematics and symbolic logic called _________   __________.\n";
    Q12 ="A _______ is an electronic device that operates on a collection of binary inputs to produce a binary output.\n";
    Q13 ="A _______ is a collection of logic gates that transforms a set of binary inputs into a set of binary outputs and in which the values of the outputs depend only on the current values of the inputs.\n";
    Q14 ="The study of algorithms is _________	___________.\n";
    Q15 ="The study of the efficiency of algorithms is called _________  __ __________.\n";
    Q16 =" ";
    Q17 ="A  _______ can be thought of as a group of one or more, programming statements that collectively has a name.\n";
    Q18 =" a";
    Q19 ="Every complete statement ends with a\nA)   Period\nB)   # symbol\nC)   semicolon\nD)   ending brace";
    Q20 ="Which of the following statements is correct?\nA)   #include (iostream)\nB)   #include {iostream}\nC)   #include <iostream>\nD)   #include [iostream]\nE)   All of the above\n";
    Q21 ="A _________ _____ is a statement that causes a function to execute. A function definition contains the statements that make up the function.\n";
    Q22 ="The ___ statement can cause other statements to execute only under certain conditions.\n";
    Q23 =" a";
    Q24 ="a ";
    Q25 ="_______ ______ is breaking a program up into smaller, manageable functions. \n";
    Q26 ="A ________ collection of statements to perform a specific task.\n";
    Q27 =": __________: Values passed to a function.\n";
    Q28 ="__________: Variables in function that hold values passed as arguments.\n";
    Q29 ="_____  ___ _____: when an argument is passed to a function, a copy of its value is placed in the parameter.\n";
    Q30 ="______  ______: defined within a function or block; accessible only with the function or block.\n";
    Q31 ="______  ______: a variable defined outside all functions; it is accessible to all functions within its scope.\n";
    Q32 =" _______  ______: a named constant that can be used by every function in a program.\n";
    Q33 ="______ ______: values passed automatically if arguments are missing from the function call\n";
    Q34 ="_______  ______: an alias for another variable.Mechanism that allows a function to work with the original argument from the function call, not a copy of the argument\n";
    Q35 ="True or false: 4 Things Before A Compiler Runs it Must Know About a Function :\n1) name\n2) return type\n3) number of parameters\n4) data type of each parameter\n";
    Q36 ="True or false: \n The address operator (&) returns the memory address of a variable.\n";
    Q37 ="a ";
    
    map<string, string> question; //
    map<string, string> answer;
    map<string, int> points;
     
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
    
    
    answer[Q1] = "iterative";
    answer[Q2] = "a";
    answer[Q3] ="a";
    answer[Q4] ="a";
    answer[Q5] ="aA";
    answer[Q6] ="a";
    answer[Q7] ="a";
    answer[Q8] = "arithmetic overflow";
    answer[Q9] = "analog";
    answer[Q10] = "amplitude";
    answer[Q11] = "boolean logic";
    answer[Q12] = "gate";
    answer[Q13] = "circuit";
    answer[Q14] = "computer science";
    answer[Q15] = "analysis of algorithms";
    answer[Q16] = "comment";
    answer[Q17] = "function";
    answer[Q18] ="a";
    answer[Q19] = "c";
    answer[Q20] = "c";
    answer[Q21] = "function call";
    answer[Q22] = "if";
    answer[Q23] ="a";
    answer[Q24] ="a";
    answer[Q25] = "modular programming";
    answer[Q26] = "function";
    answer[Q27] = "arguments";
    answer[Q28] = "parameters";
    answer[Q29] = "pass by value";
    answer[Q30] = "local variable";
    answer[Q31] = "global variable";
    answer[Q32] = "global constants";
    answer[Q33] = "default arguments";
    answer[Q34] = "refence variable";
    answer[Q35] = "true";
    answer[Q36] = "true";
    answer[Q37] ="a";
    
    for (int i = 0; i < 10; i++) {
        int computerchoice;
        srand(i);
        computerchoice = (rand()%10)+1;
        
        cout<<computerchoice<<endl;
    }

    string userinput, correctchoice;
    
    
    
}
