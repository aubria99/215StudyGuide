#include <map> //this allows you to use mapping in your program
#include <locale>
#include <string> //this allows you to use strings in your program
#include <iostream> //this is what you need in every c++ program
using namespace std; //using standard library

int CompSci111(){
    
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%40)+1; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}

int CompSci121(){
    
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%40)+40; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}

int CompSci215(){
    
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%40)+80; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}
int main() //main function
{
    string Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24, Q25, Q26, Q27, Q28, Q29, Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37,Q38, Q39, Q40, Q41, Q42, Q43, Q44, Q45, Q46, Q47, Q48, Q49, Q50, Q51, Q52, Q53, Q54, Q55, Q56, Q57, Q58, Q59, Q60, Q61, Q62, Q63, Q64, Q65, Q66, Q67, Q68, Q69, Q70, Q71, Q72, Q73, Q74, Q75, Q76, Q77, Q78, Q79, Q80, Q81, Q82, Q83, Q84, Q85, Q86, Q87, Q88, Q89, Q90, Q91, Q92, Q93, Q94, Q95, Q96, Q97, Q98, Q99, Q100, Q101, Q102, Q103, Q104, Q105, Q106, Q108, Q107, Q109, Q110, Q111, Q112, Q113, Q114, Q115, Q116, Q117, Q118, Q119, Q120; //list of strings which represent our questions
    
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
    
    map<int, string> question; //this is passing in strings as vectors that will be used for the question
    map<string, string> answer; //this is passing in strings as vectors that will be used for the answer
    map<string, int> points; //this is passing in a string and an int as vectors that will be used for points
    
    //these are questions in the game
    //what the user will see is the string in [] which is being set to the key value which lines up with the mapping
    question[1] = Q1;
    question[2] = Q2;
    question[3] = Q3;
    question[4] = Q4;
    question[5] = Q5;
    question[6] = Q6;
    question[7] = Q7;
    question[8] = Q8;
    question[9] = Q9;
    question[10] = Q10;
    question[11] = Q11;
    question[12] = Q12;
    question[13] = Q13;
    question[14] = Q14;
    
    
    question[15] = Q15;
    question[16] = Q16;
    question[17] = Q17;
    question[18] = Q18;
    question[19] = Q19;
    question[20] = Q20;
    question[21] = Q21;
    question[22] = Q22;
    question[23] = Q23;
    question[24] = Q24;
    
    question[25] = Q25;
    question[26] = Q26;
    question[27] = Q27;
    question[28] = Q28;
    question[29] = Q29;
    question[30] = Q30;
    question[31] = Q31;
    question[32] = Q32;
    question[33] = Q33;
    question[34] =Q34;
    question[35] =Q35;
    question[36] =Q36;
    question[37] =Q37;
    
    question[38] = Q38;
    question[39] = Q39;
    question[40] = Q40;
    question[41] = Q41;
    question[42] = Q42;
    question[43] = Q43;
    question[44] = Q44;
    question[45] = Q45;
    question[46] = Q46;
    question[47] = Q47;
    question[58] = Q48;
    question[59] = Q49;
    question[50] = Q50;
    question[51] = Q51;
    question[52] = Q52;
    question[53] = Q53;
    question[54] = Q54;
    question[55] = Q55;
    question[56] = Q56;
    question[57] = Q57;
    question[58] = Q58;
    question[59] = Q59;
    question[60] = Q60;
    question[61] = Q61;
    question[62] = Q62;
    question[63] = Q63;
    question[64] = Q64;
    question[65] = Q65;
    question[66] = Q66;
    question[67] = Q67;
    question[68] = Q68;
    question[69] = Q69;
    question[70] = Q70;
    question[71] = Q71;
    question[72] = Q72;
    question[73] = Q73;
    question[74] = Q74;
    question[75] = Q75;
    question[76] = Q76;
    question[77] = Q77;
    question[78] = Q78;
    question[79] = Q79;
    question[80] = Q80;
    question[81] = Q81;
    question[82] = Q82;
    question[83] = Q83;
    question[84] = Q84;
    question[85] = Q85;
    question[86] = Q86;
    question[87] = Q87;
    question[88] = Q88;
    question[89] = Q89;
    question[90] = Q90;
    question[91] = Q91;
    question[92] = Q92;
    question[93] = Q93;
    question[94] = Q94;
    question[95] = Q95;
    question[96] = Q96;
    question[97] = Q97;
    question[98] = Q98;
    question[99] = Q99;
    question[100] = Q100;
    question[101] = Q101;
    question[102] = Q102;
    question[103] = Q103;
    question[104] = Q104;
    question[105] = Q105;
    question[106] = Q106;
    question[107] = Q107;
    question[108] = Q108;
    question[109] = Q109;
    question[110] = Q110;
    question[111] = Q111;
    question[112] = Q112;
    question[113] = Q113;
    question[114] = Q114;
    question[115] = Q115;
    question[116] = Q116;
    question[117] = Q117;
    question[118] = Q118;
    question[119] = Q119;
    question[120] = Q120;

    
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
    
     int score;
    int count = score =0;
    string userinput, username, correctchoice, QA; //this initializes the strings userinput and correctchoice
    cout<< "****************************************************************" <<endl;
    cout<<"Welcome to your interactive Computer Science study guide!      *\n"
    "This a tool that will help you study compter science core      *\n"
    "topics from CIS 111, all the way to CIS 215! As the game       *\n"
    "progresses the questions may seem to get a little bit more     *\n"
    "diffucult, but don't worry, that's a good thing. That means    *\n"
    "you're learning! We wish you the best of luck!!!               *\n"
    "****************************************************************\n"<<endl;
    
    cout<<"What is you name?"<<endl;
    getline (cin, username);
    const int SIZE = 9;
    int comp[SIZE];
    for (int i = 0; i < 10 && score < 7; i++) //start of for loop
    {
        int computerchoice = CompSci111();
        comp[i] = computerchoice; //puting it into the array
        
        cout<<endl<<comp[i]<<endl;//checking to make sure it is the right number
        if ( i > 0){
            cout<<comp[i-1]<<endl;// getting the number before it :) 
        }
        //we need to make an array to now store the number that the generator called and 
        //check to make sure that whatever number is being called now isn't in the arry....can  
        //arrays be dynamic?? if not. we may have to use linked list :/
        QA = question[computerchoice];
        cout<<computerchoice<<endl;
        cout<<endl<<QA<<endl;//displays the computer choice
        getline (cin, userinput);
        //userinput.tolower();
        if (userinput != answer[QA]){
            cout<<"That is incorrect\n\n"<<endl;
        }
        else
        {
            score++;
            cout<<"Score: "<<score<<endl;
        }
        count++;
        //cout<<count<<endl; //need to be able to see how many they got wrong verse how many the have attempted
        
    }
}
