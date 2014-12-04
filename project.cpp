#include <map> //this allows you to use mapping in your program
#include <string> //this allows you to use strings in your program
#include <iostream> //this is what you need in every c++ program
using namespace std; //using standard library
int score;
map<string, string> answer;
map<int, string> question; 
int CompSci111(){
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%40)+1; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}
int CompSci121(){
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%40)+45; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}
int studentquest(int num){ //the random number generator used for the questions that the student inputed if the student chose to do so
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%num)+100; //this sets the computerchoice equal to the random number generator
    return computerchoice; //return the nuber chose by the computer 
}
string lower(string userinput){
    for(int j = 0; j< userinput.length(); j++){// going through each letter of the word
        userinput[j] = tolower(userinput[j]); //changing the letter to lowercase if it is not so already, if so then it does nothing 
    }
    return userinput; //returin gto the function call now a string in complete lower case
}
int insert(string username){
    cout<<"How many question would you like to enter?"<<endl; 
    int num, k = 1;
    cin>> num; // getting the number of question that the user wishes to input
    num+=100; //setting num equal to 100 hundred so that i may use the same map and not write over my questions but instead putting them in as question 100 and beyond
    int l = 1; //had to hack the code because there was a minor problem. this helps ensure that the question line up to their respective answer
    string Q, A;//Q is for question the user in entering A is for the answer
    for(int m= 99; m<num ; m++){//adding in the questions
        cout<<"Please enter question "<<k<<"."<<endl;
        getline (cin, Q); //getting the entire question from the user
        question.insert ( std::pair<int,string>(m,Q) );//putting the questiong into the mapp
        if (l == 1){
            l++;
        }
        else
            k++; // to eep track of what question we are on when displaying it to the user
    }
    k= 1;
    
    for(int m= 100; m<num ; m++){
        cout<<"What is the answer to question "<<k<<"?"<<endl;
        getline (cin, A); //getting the answer from the user
        A = lower(A); //changing the answer to lower so when playing the level when asking for user input and it converst it to lower there won't be any problems
        answer.insert ( std::pair<string,string>(Q,A) );//putting the answer into the answer map
        k+=1;
    }
    num -= 100; //setting num back to it's original value
    return num; //return num to the function call
}

string begin(){
    string username;
    cout<< "****************************************************************" <<endl;
    cout<<"Welcome to your interactive Computer Science study guide!      *\n"
    "This a tool that will help you study compter science core      *\n"
    "topics from CIS 111, all the way to CIS 215! As the game       *\n"
    "progresses the questions may seem to get a little bit more     *\n"
    "diffucult, but don't worry, that's a good thing. That means    *\n"
    "you're learning! We wish you the best of luck!!!               *\n"
    "****************************************************************\n"<<endl;
    cout<<"What is your name?"<<endl;
    getline (cin, username);
    return username;
}
int ready(string username){
    string ready;
nicetry:
    cout<<"\n\n\n\nHey "<<username<<"! Would you like to begin studying with us?\nEnter Y to START or N to EXIT."<<endl;
    getline (cin, ready);
    if ((ready != "n") && (ready != "N") && (ready != "y") && (ready != "Y" )){ //check to see if the user entered valid nput
        cout<<"\nThat is invalid input. Please try again! \nWe ask that you pay attention this time -_____-"<<endl; //telling the user to try again if the are wrong
        goto nicetry; //going back to nice try
    }
    if((ready == "n") || (ready =="N")){//if the user does not wish to study
        return 0; //username;
    }
    
}
int newQ(string username){ //funtion to ask the user if they would like to enter their own questions
    string ready;
seriously:
    cout<<"\n\n\n\nHey "<<username<<"! Would you like to add questions to the game? \nEnter Y for yes or N for no."<<endl;
    getline (cin, ready);
    if ((ready != "n") && (ready != "N") && (ready != "y") && (ready != "Y" )){//check to see if the user entered valid input
        cout<<"\nThat is invalid input. Please try again! \nPay attention this time -_____-"<<endl;//telling the user to try again if the are being difficult
        goto seriously; //going bac to seriously
    }
    if((ready == "y") || (ready =="Y")){//if the user does not wish to study
        return 1; 
    }
    return 0;
}
int next(string username){ // function promting the user to see if they would like to continue playing the game
    string ready;
nono:
    cout<<"\n\n\n\nGreat Job "<<username<<"! You have finished this level. Would you like to continue studying with us?\nEnter Y for yes or N for no."<<endl; // asking
    getline (cin, ready);
    if ((ready != "n") && (ready != "N") && (ready != "y") && (ready != "Y" )){
        cout<<"\nThat is invalid input. Please try again, and pay attention this time -_____-"<<endl;
        goto nono;
    }
    if((ready == "n") || (ready =="N")){//if the user does not wish to study
        return 0; 
    }
    return 1;
}
int bonus(string username, int num){
    string QA, userinput, correcthoice;
    const int SIZE = 9;
    int comp[SIZE];
    int goal, count=0;
    int wrong = count;
    goal = 37 +(num *3);
    goal -= 4;
    for (int i = 0; i < num && score < 50; i++) //start of for loop
    {
    redo:
        int computerchoice = studentquest(num);
        comp[i] = computerchoice; //puting it into the array
        //checking the array
        for (int k = 0; k < i; k++){//to check it aginst evrything already in the array
            if(comp[k] == computerchoice){ //checking to see if it is in the array
                goto redo; // if it is it should go back and racall the the 111 genorator
            }
        }
        QA = question[computerchoice];
        cout<<computerchoice<<endl;
        cout<<endl<<QA<<endl;//displays the computer choice
        getline (cin, userinput);
        userinput = lower(userinput);//calling the fuction to turn the user's answer to all lower case
        if (userinput != answer[QA]){
            cout<<"That is incorrect\n"<<endl;
            cout<<"The right answer was: "<<answer[QA]<<endl;//telling them the corect answer for the user's benfit.
            score--;
            wrong++;
            if(score < 0 ){
                cout<<"It may be time for you to hit the books :/"<<endl;
                break;
            }
            cout<<"Score: "<<score<<endl;
        }
        else
        {
            score+=3;
            cout<<"Score: "<<score<<endl;//keeping the user updated with their score
            if(score >= goal){//qualify for level two...may the odds be ever in their favor
                //cout<<"Congrats "<<username<<" you have passed the first level!"<<endl; //leting them know that finished level one
            }
        }
        count++;
        if( count == 10 && score < goal){ //if you have gone through ten questions for the levell and the student did not get the min # correct to move on to the next level
            cout<<"You did pretty good "<<username<<" but you have a little bit more studying to do.You did not pass this level. \n\t\t\t\t\tGOODBYE!"<<endl;
            return 1;
        }
    }
        return 0;
}

int levelOne(string username)
    {
        string Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24, Q25, Q26, Q27, Q28, Q29, Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37,Q38, Q39, Q40, Q41, Q42, Q43, Q44, Q45;
        //assigning the question to variables 
    Q1 = "All the operations used to construct algorithms belong to one of only three categories: \n1.    Sequential \n2.    Conditional \nWhat is the third operation?\n\n"; 
    Q2 = "What is the best definition of an algorithm?\nA. A well-ordered collection of unambiguous and effectively computable operations that, when executed, produces a result and halts in a finite amount of time.\nB. A list of instructions that can be effectively computable or it can be unsolveable.\nC. Instructions to accomplish a task.\nD. Computer language.\n"; 
    Q3 = "What generation were transistors and core memories invented?\nA.     Second\nB.     First\nC.     Fifth\nD.    Third\n"; 
    Q4 ="What is  the fourth component of Charles Babbage’s Analytic Engine?\n1.     mill\n2.     store\n3.    output unit"; 
    Q5 ="The ___ ____ is the numer of bits used to encode each sample."; 
    Q6 ="How many bit are in a byte?"; 
    Q7 ="The symbols used in an assembly language are __________."; 
    Q8 = "Any operation on this computer that exceeds the maximum allowable value is called ___________ _________.\n"; 
    Q9 = "In an  __________ representation, objects can take on any value.\n"; 
    Q10 = "The __________ of the wave is a measure of its loudness—the greater the ________ the louder the sound.\n"; 
    Q11 = "The construction of computer circuits is based on the branch of mathematics and symbolic logic called _________   __________.\n"; 
    Q12 = "A _______ is an electronic device that operates on a collection of binary inputs to produce a binary output.\n"; 
    Q13 = "A _______ is a collection of logic gates that transforms a set of binary inputs into a set of binary outputs and in which the values of the outputs depend only on the current values of the inputs.\n"; 
    Q14 = "The study of algorithms is _________	___________.\n"; 
    Q15 = "Binary is what kind of positional number system?\nA.) base-16\nB.) base-2\nC.) base-10\nD.) None of the above";   
    Q16 ="How many bits are in two bytes?";
    Q17 = "Q17: Which of these is NOT a programing language?\nA.) Ruby\nB.) Sonic\nC.)Python\nD.) C#";
    Q18 = "The binary number 101101 represents what decimal number?"; 
    Q19 = "What is the binary representation of the number 25?"; 
    Q20 = "______ the term used to describe an algorithm’s  careful use of resources.";  
    Q21 = "The process of searching for a special pattern of symbols within a larger collection of information is called _______ __________."; 
    Q22 = "Conditional, sequential, and iterative statements are all a part of what operation?"; 
    Q23 ="_______ operations provide the computing agent with data values from the outside world that it may then use in later instructions."; 
    Q24 ="______ operations send results from the computing agent to the outside world."; 
    Q25 ="What is a named storage location that can hold data?"; 
    Q26 ="The central concept in computer science is the __________."; 
    Q27 ="True or False. Computer science is the study of how to write computer programs."; 
    Q28 ="The machine, robot, person, or thing carrying out the steps of the algorithm is called a __________ _____."; 
    Q29 ="The ____ state is represented by the binary value 0 in circuitry.";
    Q30 ="What binary value represents the ON state of a gate?";
    Q31 ="The equivalent of 1 billion bytes is 1 ___________."; 
    Q32 ="What is the name of the 8-bit representation of characters?"; 
    Q33 ="True or false. Only computers are able to convert from binary to decimal.";    
    Q34 ="Who was the most instrumental in creating the computer as we know it today?"; 
    Q35 ="Who invented logarithms?\n"; 
    Q36 ="Who designed and built the first mechanical calculators?\n"; 
    Q37 ="The first actual 'computing device' was invented by whom?"; 
    Q38 = "__________: Values passed to a function";
    Q39 = "What is the name of the 16 bt represtation of characters.";
    Q40 = "The two digits, 0 and 1, are frecuently referred to as _________.";
    Q41 = " __________: Variables in function that hold values passed as argument";
    Q42 = "__________ respresents a comprsie between the two extremes of natural and formal languages.";
    Q43 = "Pseudocode is written in ________ language.";
    Q44 = "___________ search is the standard algorithm for searching an UNORDED list.";
    Q45 = "_________ statments are the 'question asking' operations of the algorithm";
    
   //creating the map for the questions
    question.insert ( std::pair<int,string>(1,Q1) );
    question.insert ( std::pair<int,string>(2,Q2) );
    question.insert ( std::pair<int,string>(3,Q3) );
    question.insert ( std::pair<int,string>(4,Q4) );
    question.insert ( std::pair<int,string>(5,Q5) );
    question.insert ( std::pair<int,string>(6,Q6) );
    question.insert ( std::pair<int,string>(7,Q7) );
    question.insert ( std::pair<int,string>(8,Q8) );
    question.insert ( std::pair<int,string>(9,Q9) );
    question.insert ( std::pair<int,string>(10,Q10) );
    question.insert ( std::pair<int,string>(11,Q11) );
    question.insert ( std::pair<int,string>(12,Q12) );
    question.insert ( std::pair<int,string>(13,Q13) );
    question.insert ( std::pair<int,string>(14,Q14) );
    question.insert ( std::pair<int,string>(15,Q15) );
    question.insert ( std::pair<int,string>(16,Q16) );
    question.insert ( std::pair<int,string>(17,Q17) );
    question.insert ( std::pair<int,string>(18,Q18) );
    question.insert ( std::pair<int,string>(19,Q19) );
    question.insert ( std::pair<int,string>(20,Q20) );
    question.insert ( std::pair<int,string>(21,Q21) );
    question.insert ( std::pair<int,string>(22,Q22) );
    question.insert ( std::pair<int,string>(23,Q23) );
    question.insert ( std::pair<int,string>(24,Q24) );
    question.insert ( std::pair<int,string>(25,Q25) );
    question.insert ( std::pair<int,string>(26,Q26) );
    question.insert ( std::pair<int,string>(27,Q27) );
    question.insert ( std::pair<int,string>(28,Q28) );
    question.insert ( std::pair<int,string>(29,Q29) );
    question.insert ( std::pair<int,string>(30,Q30) );
    question.insert ( std::pair<int,string>(31,Q31) );
    question.insert ( std::pair<int,string>(32,Q32) );
    question.insert ( std::pair<int,string>(33,Q33) );
    question.insert ( std::pair<int,string>(34,Q34) );
    question.insert ( std::pair<int,string>(35,Q35) );
    question.insert ( std::pair<int,string>(36,Q36) );
    question.insert ( std::pair<int,string>(37,Q37) );
    question.insert ( std::pair<int,string>(38,Q38) );
    question.insert ( std::pair<int,string>(39,Q39) );
    question.insert ( std::pair<int,string>(40,Q40) );
    question.insert ( std::pair<int,string>(41,Q41) );
    question.insert ( std::pair<int,string>(42,Q42) );
    question.insert ( std::pair<int,string>(43,Q43) );
    question.insert ( std::pair<int,string>(44,Q44) );
    question.insert ( std::pair<int,string>(45,Q45) );
    //oficially done with level one staring level two
    
    //mapping the answers to the proper question
    answer.insert ( std::pair<string, string>(Q1, "iterative") ); //this is the answer to question 1
    answer.insert ( std::pair<string, string>(Q2, "a") ); //this is the answer to question 2
    answer.insert ( std::pair<string, string>(Q3, "d") );//this is the answer to question 3
    answer.insert ( std::pair<string, string>(Q4, "operator") );
    answer.insert ( std::pair<string, string>(Q5, "bit depth") );
    answer.insert ( std::pair<string, string>(Q6, "8") );
    answer.insert ( std::pair<string, string>(Q7, "mnemonics") );
    answer.insert ( std::pair<string, string>(Q8, "arithmetic overflow") );
    answer.insert ( std::pair<string, string>(Q9, "analog") );
    answer.insert ( std::pair<string, string>(Q10, "amplitude") );
    answer.insert ( std::pair<string, string>(Q11, "boolean logic") );
    answer.insert ( std::pair<string, string>(Q12, "gate") );
    answer.insert ( std::pair<string, string>(Q13, "circuit") );
    answer.insert ( std::pair<string, string>(Q14, "computer science") );
    answer.insert ( std::pair<string, string>(Q15, "b") );
    answer.insert ( std::pair<string, string>(Q16, "16") );
    answer.insert ( std::pair<string, string>(Q17, "b") );
    answer.insert ( std::pair<string, string>(Q18, "45") );
    answer.insert ( std::pair<string, string>(Q19, "11001") );
    answer.insert ( std::pair<string, string>(Q20, "efficiency") );
    answer.insert ( std::pair<string, string>(Q21, "pattern matching") );
    answer.insert ( std::pair<string, string>(Q22, "control") );
    answer.insert ( std::pair<string, string>(Q23, "input") );
    answer.insert ( std::pair<string, string>(Q24, "output") );
    answer.insert ( std::pair<string, string>(Q25, "variable") );
    answer.insert ( std::pair<string, string>(Q26, "algorithm") );
    answer.insert ( std::pair<string, string>(Q27, "false") );
    answer.insert ( std::pair<string, string>(Q28, "computer agent") );
    answer.insert ( std::pair<string, string>(Q29, "off") );
    answer.insert ( std::pair<string, string>(Q30, "1") );
    answer.insert ( std::pair<string, string>(Q31, "gigabyte") );
    answer.insert ( std::pair<string, string>(Q32, "ascii") );
    answer.insert ( std::pair<string, string>(Q33, "false") );
    answer.insert ( std::pair<string, string>(Q34, "john von neumann") );
    answer.insert ( std::pair<string, string>(Q35, "john napier") );
    answer.insert ( std::pair<string, string>(Q36, "blaise pascal") );
    answer.insert ( std::pair<string, string>(Q37, "joseph jacquard") );
    answer.insert ( std::pair<string, string>(Q38, "arguments") );
    answer.insert ( std::pair<string, string>(Q39, "unicode") );
    answer.insert ( std::pair<string, string>(Q40, "bits") );
    answer.insert ( std::pair<string, string>(Q41, "parameters") );
    answer.insert ( std::pair<string, string>(Q42, "pseudocode") );
    answer.insert ( std::pair<string, string>(Q43, "natural") );
    answer.insert ( std::pair<string, string>(Q44, "sequential") );
    answer.insert ( std::pair<string, string>(Q45, "conditional") );
 
    string QA, userinput, correcthoice;
    const int SIZE = 9;
    int comp[SIZE];
    int count=0;
    for (int i = 0; i < 10 && score < 10; i++) //start of for loop
    {
    redo:
        int computerchoice = CompSci111();
        comp[i] = computerchoice; //puting it into the array
        //checking the array
        for (int k = 0; k < i; k++){//to check it aginst evrything already in the array
            if(comp[k] == computerchoice){ //checking to see if it is in the array
                goto redo; // if it is it should go back and racall the the 111 genorator
            }
        }
        QA = question[computerchoice];
        cout<<computerchoice<<endl;
        cout<<endl<<QA<<endl;//displays the computer choice
        getline (cin, userinput);
        userinput = lower(userinput);//calling the fuction to turn the user's answer to all lower case
        if (userinput != answer[QA]){
            cout<<"That is incorrect\n"<<endl;
            cout<<"The right answer was: "<<answer[QA]<<endl;//telling them the corect answer for the user's benfit.
            score--;
            if(score < 0 ){
                cout<<"It may be time for you to hit the books :/"<<endl;
                break;
            }
            cout<<"Score: "<<score<<endl;
        }
        else
        {
            score+=2;
            cout<<"Score: "<<score<<endl;//keeping the user updated with their score
            if(score >= 10){//qualify for level two...may the odds be ever in their favor
                cout<<"Congrats "<<username<<" you have passed the first level!"<<endl; //leting them know that finished level one
            }
        }
        count++;
        if( count == 10 && score < 10){ //if you have gone through ten questions for the levell and the student did not get the min # correct to move on to the next level
            cout<<"You did pretty good "<<username<<" but you have a little bit more studying to do.You did not pass this level. \n\t\t\t\t\tGOODBYE!"<<endl;
            return 1;
        }
        //cout<<"Count: "<<count<<endl; //need to be able to see how many they got wrong verse how many the have attempted
        
    }

        return 0;
    }
int levelTwo( string username){
    string Q46, Q47, Q48, Q49, Q50, Q51, Q52, Q53, Q54, Q55, Q56, Q57, Q58, Q59, Q60, Q61, Q62, Q63, Q64, Q65, Q66, Q67, Q68, Q69, Q70, Q71, Q72, Q73, Q74, Q75, Q76, Q77, Q78, Q79, Q80, Q81, Q82, Q83, Q84, Q85, Q86, Q87, Q88, Q89, Q90,userinput, QA;
    int count;
    //the quesions for level two in strings variables
    Q46 = "The // marks the beginning of a ________ in C++ code."; 
    Q47 = "A  _______ can be thought of as a group of one or more, programming statements that collectively has a name."; 
    Q48 = "How many operands does the Unary operatoor require?"; 
    Q49 = "Every complete statement ends with a\nA)   Period\nB)   # symbol\nC)   semicolon\nD)   ending brace"; 
    Q50 ="Which of the following statements is correct?\nA)   #include (iostream)\nB)   #include {iostream}\nC)   #include <iostream>\nD)   #include [iostream]\nE)   All of the above"; 
    Q51 ="A _________ _____ is a statement that causes a function to execute. A function definition contains the statements that make up the function."; 
    Q52 ="The ___ statement can cause other statements to execute only under certain conditions."; 
    Q53 = "The address operator (&) returns the memory address of a variable\n"; 
    Q54 = "In an  __________ representation, objects can take on any value.\n"; 
    Q55 = "True or false. RAM memory is a form of computer data storage.\n"; 
    Q56 = "Which one of the following is not a variable type in C++?\nA.) int\nB.) num\nC.) double\nD.) float"; 
    Q57 = "True or False? A variable must be defined before you can use it."; 
    Q58 = "_______ refers to the physical components that a computer is made of.";
    Q59 = "A ___________ _________ is a special language used to write computer programs.\n";
    Q60 = "A ________ is a set of instructions that a computer follows in order to perform a task.\n"; 
    Q61 ="In C++, keywords, also  known as reserved words, are written in all ________.";
    Q62 = "Which of these is not a header file?\nA.) iostream\nB.)  cmath\nC.) map\nD.) tolower\n"; 
    Q63 = "Which of these properly displays the letter x?\nA.) cout>>x;\nB.) cout<<x;\nC.) cout'\n'”x”;\nD.) cout<<x\t;\nE.) cout<<”x”;"; 
    Q64 = "How many bytes can  short data type use?"; 
    Q65 = "True or False? Boolean variables can be set to more than true or false."; 
    Q66 = "A variable’s ______ is the part of the program that has access to the variable.\n"; 
    Q67 = "_____ _________ allows you to perform manual data type conversions.\n"; 
    Q68 ="The ________ statement causes a loop to terminate early."; 
    Q69 ="The ________ statement causes a loop to stop its current iteration  and begin the next one."; 
    Q70 ="True or False? Variables may be created and destroyed while a program is running. \n";
    Q71 ="Which of these function types while not allow a return type?\nA.) string\nB.) void\nC.) int\nD.)bool\n";
    Q72 ="The function header declare the function’s _______ _____, name, and parameter list.\n"; 
    Q73 ="A _____ is a variable that is regularly incremented or decremented each time a loop iterates.\n"; 
    Q74 ="True or False? A function is only executed when it is called.\n"; 
    Q75 ="Which of these is an invalid way to get user input in c++?\nA.) cin>>word;\nB.) userinput(word);\nC.) getline (cin, word);\n"; 
    Q76 ="An _____ allows you to store and work with multiple values of the same data type.\n";
    Q77 ="What is the proper way to say AND in C++?\n"; 
    Q78 ="What is  the proper symbol in saying NOT in C++?\n"; 
    Q79 ="What is the proper symbol for OR in C++?\n";
    Q80 ="True or false: 4 Things Before A Compiler Runs it Must Know About a Function :\n1) name\n2) return type\n3) number of parameters\n4) data type of each parameter\n"; 
    Q81 ="True or false: \nThe address operator (&) returns the memory address of a variable.\n"; 
    Q82 =" _______ ______ is breaking a program up into smaller, manageable functions. (divide-and-conquer approach)";
    Q83 = "A ________ collection of statements to perform a specific task ";
    Q84 = "_____  ___ _____: when an argument is passed to a function, a copy of its value is placed in the parameter";
    Q85 ="______ ______: values passed automatically if arguments are missing from the function call";
    //mapping the answers to the question
    answer.insert ( std::pair<string, string>(Q46, "comment") ); //this is the answer to question 1
    answer.insert ( std::pair<string, string>(Q47, "function") ); //this is the answer to question 2
    answer.insert ( std::pair<string, string>(Q48, "1") );//this is the answer to question 3
    answer.insert ( std::pair<string, string>(Q49, "c") );
    answer.insert ( std::pair<string, string>(Q50, "c") );
    answer.insert ( std::pair<string, string>(Q51, "function call") );
    answer.insert ( std::pair<string, string>(Q52, "if") );
    answer.insert ( std::pair<string, string>(Q53, "true") );
    answer.insert ( std::pair<string, string>(Q54, "analog") );
    answer.insert ( std::pair<string, string>(Q55, "true") );
    answer.insert ( std::pair<string, string>(Q56, "b") );
    answer.insert ( std::pair<string, string>(Q57, "true") );
    answer.insert ( std::pair<string, string>(Q58, "hardware") );
    answer.insert ( std::pair<string, string>(Q59, "programming language") );
    answer.insert ( std::pair<string, string>(Q60, "program") );
    answer.insert ( std::pair<string, string>(Q61, "lowercase") );
    answer.insert ( std::pair<string, string>(Q62, "d") );
    answer.insert ( std::pair<string, string>(Q63, "e") );
    answer.insert ( std::pair<string, string>(Q64, "2") );
    answer.insert ( std::pair<string, string>(Q65, "false") );
    answer.insert ( std::pair<string, string>(Q66, "scope") );
    answer.insert ( std::pair<string, string>(Q67, "type csting") );
    answer.insert ( std::pair<string, string>(Q68, "break") );
    answer.insert ( std::pair<string, string>(Q69, "continue") );
    answer.insert ( std::pair<string, string>(Q70, "true") );
    answer.insert ( std::pair<string, string>(Q71, "b") );
    answer.insert ( std::pair<string, string>(Q72, "return type") );
    answer.insert ( std::pair<string, string>(Q73, "counter") );
    answer.insert ( std::pair<string, string>(Q74, "true") );
    answer.insert ( std::pair<string, string>(Q75, "b") );
    answer.insert ( std::pair<string, string>(Q76, "array") );
    answer.insert ( std::pair<string, string>(Q77, "&&") );
    answer.insert ( std::pair<string, string>(Q78, "!") );
    answer.insert ( std::pair<string, string>(Q79, "||") );
    answer.insert ( std::pair<string, string>(Q80, "moduar programming") );
    answer.insert ( std::pair<string, string>(Q81, "function") );
    answer.insert ( std::pair<string, string>(Q82, "pass by value") );
    answer.insert ( std::pair<string, string>(Q83, "local variable") );
    answer.insert ( std::pair<string, string>(Q84, "global variable") );
    answer.insert ( std::pair<string, string>(Q85, "default arguments") );
   
    //mappping the question the the question number
    question.insert ( std::pair<int,string>(46,Q46) );
    question.insert ( std::pair<int,string>(47,Q47) );
    question.insert ( std::pair<int,string>(48,Q48) );
    question.insert ( std::pair<int,string>(49,Q49) );
    question.insert ( std::pair<int,string>(50,Q50) );
    question.insert ( std::pair<int,string>(51,Q51) );
    question.insert ( std::pair<int,string>(52,Q52) );
    question.insert ( std::pair<int,string>(53,Q53) );
    question.insert ( std::pair<int,string>(54,Q54) );
    question.insert ( std::pair<int,string>(55,Q55) );
    question.insert ( std::pair<int,string>(56,Q56) );
    question.insert ( std::pair<int,string>(57,Q57) );
    question.insert ( std::pair<int,string>(58,Q58) );
    question.insert ( std::pair<int,string>(59,Q59) );
    question.insert ( std::pair<int,string>(60,Q60) );
    question.insert ( std::pair<int,string>(61,Q61) );
    question.insert ( std::pair<int,string>(62,Q62) );
    question.insert ( std::pair<int,string>(63,Q63) );
    question.insert ( std::pair<int,string>(64,Q64) );
    question.insert ( std::pair<int,string>(65,Q65) );
    question.insert ( std::pair<int,string>(66,Q66) );
    question.insert ( std::pair<int,string>(67,Q67) );
    question.insert ( std::pair<int,string>(68,Q68) );
    question.insert ( std::pair<int,string>(69,Q69) );
    question.insert ( std::pair<int,string>(70,Q70) );
    question.insert ( std::pair<int,string>(71,Q71) );
    question.insert ( std::pair<int,string>(72,Q72) );
    question.insert ( std::pair<int,string>(73,Q73) );
    question.insert ( std::pair<int,string>(74,Q74) );
    question.insert ( std::pair<int,string>(75,Q75) );
    question.insert ( std::pair<int,string>(76,Q76) );
    question.insert ( std::pair<int,string>(77,Q77) );
    question.insert ( std::pair<int,string>(78,Q78) );
    question.insert ( std::pair<int,string>(79,Q79) );
    question.insert ( std::pair<int,string>(80,Q80) );
    question.insert ( std::pair<int,string>(81,Q81) );
    question.insert ( std::pair<int,string>(82,Q82) );
    question.insert ( std::pair<int,string>(83,Q83) );
    question.insert ( std::pair<int,string>(84,Q84) );
    question.insert ( std::pair<int,string>(85,Q85) );
    question.insert ( std::pair<int,string>(86,Q86) );
    question.insert ( std::pair<int,string>(87,Q87) );
    question.insert ( std::pair<int,string>(88,Q88) );
    question.insert ( std::pair<int,string>(89,Q89) );
    question.insert ( std::pair<int,string>(90,Q90) );
    const int SIZE = 9; //creating a constant varible for the the size of an array
    int comp[SIZE]; // creating an array for the the computer choices with the siz 9
        count = 0; //count is just s we can keep track of how many questions we asked in this level
        for (int i = 0; i < 10 && score < 31 ; i++) //initalize i to 0 and while i is < than 10 & the score is !> than 30 you should continue to go through the loop each time incrementing i by 1
        {
        redo2: //where I want the computer to go back to if the number called in the psedo erandom number generator is already in the array that i have created
            int computerchoice = CompSci121(); //calling the function o get a random number 
            comp[i] = computerchoice; //puting it into the array. It doesnt matter that it is the same array because i started at zero gain so it is going to copy over it
            
            //checking the array
            for (int k = 0; k < i; k++){//to check it aginst evrything already in the array
                if(comp[k] == computerchoice){ //checking to see if it is in the array
                    goto redo2; // if it is it should go back and racall the the 121 genorator
                }
            }
            QA = question[computerchoice]; //the answer to the question
            cout<<computerchoice<<endl;//DELETE SOON I NEED IT TO KNOW THE ANSWER WHEN TEST PLAYING THE GAME
            cout<<endl<<QA<<endl;//displays the computer choice
            getline (cin, userinput);
            userinput = lower(userinput);//calling the function to convert the userinput to lowercase
            if (userinput != answer[QA]){ //if the answer s wrong....personaly i think the should be exied from the science center but hey subtracting points works too
                cout<<"That is incorrect\n"<<endl;
                cout<<"The right answer was: "<<answer[QA]<<endl;//telling them the corect answer for the user's benfit.
                score-=2; //taking away points fr them being foolish
                if(score < 0 ){
                    cout<<"It may be time for you to hit the books :/"<<endl;
                    break;
                }
                cout<<"Score: "<<score<<endl;
            }
            else
            {
                score+=4;
                cout<<"Score: "<<score<<endl;//keeping the user updated with their score
                if(score >= 30){//qualify for level three...best of luck
                    cout<<"\t\tCongrats "<<username<<" you have passed the second level!"<<endl; //leting them know that finished level one
                }
            }
            count++;
            if( count == 10 && score < 30){ //if you have gone through ten questions for the levell and the student did not get the min # correct to move on to the next level
                cout<<"You did pretty good "<<username<<" but you have a little bit more studying to do. You did not pass this level. \n\t\t\t\t\tGOODBYE!"<<endl;
                return 1;
            }
        }
    return 0;
}
int main(){
    
    string username = begin();
    int num, resp, response = ready(username);
    if (response == 0){
        return 0;
    }
    else{
        resp = newQ(username);
        if (resp == 1){
            num = insert(username);
        }
        cout<<"\n\t\t\tLET'S BEGIN THE GAME!"<<endl;
        cout<<"\n\n\n\n\nFor each level you will be given the chance to answer up to 10 questions. \nIf you score drop below zero the game will end as well as if you do not recieve enough points during that round. GOOD LUCK!"<<endl;
        int newl =  levelOne(username);
        if (newl == 0){
            response = next(username);
            if (response == 0){
                return 0;
            }
            newl =  levelTwo(username);
            if(newl != 0){
                return 0;
            }
            if (newl == 0){
                if (resp ==1){
                    
                    response = next(username);
                    if (response == 0){
                        return 0;
                    }
                }
                else{
                    cout<<"\t\t\t\tCONGRATS "<<username<<endl;
                    cout<<"\t\tYou have actually finished the entire game!!!\n\t\t\tYou must be one smart cookie! ;)"<<endl;
                }
                
            }
            if (resp == 1){
                newl =  bonus(username, num);
                if (newl == 0);{
                    cout<<"\t\t\t\tCONGRATS "<<username<<endl;
                    cout<<"\t\tYou have actually finished the entire game!!!\n\t\t\tYou must be one smart cookie! ;)"<<endl;
                }
                
            }
        }
        
    }

    return 0;
}
