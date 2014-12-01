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
    computerchoice = (rand()%45)+45; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}

int CompSci215(){
    
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%45)+90; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}
string lower(string userinput){
    for(int j = 0; j< userinput.length(); j++){
        userinput[j] = tolower(userinput[j]);
    }
    return userinput;
}
int studentquest(int num){
    int computerchoice; //initializes the variable computerchoice
    srand(time(0)); //this initializes a random variable
    computerchoice = (rand()%num)+100; //this sets the computerchoice equal to the random number generator
    return computerchoice;
}
int insert(string username){
    cout<<"How many question would you like to enter?"<<endl;
    int num, k = 1;
    cin>> num;
    num+=100;
    int l = 1;
    string Q, A;//Q is for question the user in entering A is for the answer
    for(int m= 99; m<num ; m++){//adding in the questions
        cout<<"Please enter question "<<k<<"."<<endl;
        getline (cin, Q);
        question.insert ( std::pair<int,string>(m,Q) );//putting the questiong
        if (l == 1){
            l++;
        }
        else
            k++;
    }
    k= 1;
    for(int m= 100; m<num ; m++){
        cout<<"What is the answer to question "<<k<<"?"<<endl;
        getline (cin, A);
        answer.insert ( std::pair<string,string>(Q,A) );//putting the name
        k+=1;
    }
    num -= 100;
    return num;
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
    cout<<"\n\n\n\nHey "<<username<<"! Would you like to begin studying with us?\nEnter Y to START or N to EXIT."<<endl;
    getline (cin, ready);
    if((ready == "n") || (ready =="N")){//if the user does not wish to study
        return 0; //username;
    }
    
}
int newQ(string username){
    string ready;
    cout<<"\n\n\n\nHey "<<username<<"! Would you like to add questions to the game? \nEnter Y for yes or N for no."<<endl;
    getline (cin, ready);
    if((ready == "y") || (ready =="Y")){//if the user does not wish to study
        return 1; //username;
    }
    return 0;
}
int next(string username){
    string ready;
    cout<<"\n\n\n\nGreat Job "<<username<<"! You have finished this level. Would you like to continue studying with us?\nEnter Y for yes or N for no."<<endl;
    getline (cin, ready);
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
    Q1 = "All the operations used to construct algorithms belong to one of only three categories: \n1.    Sequential \n2.    Conditional \nWhat is the third operation?\n\n"; //question 1
    
    Q2 = "What is the best definition of an algorithm?\nA. A well-ordered collection of unambiguous and effectively computable operations that, when executed, produces a result and halts in a finite amount of time.\nB. A list of instructions that can be effectively computable or it can be unsolveable.\nC. Instructions to accomplish a task.\nD. Computer language.\n"; //question 2
    
    Q3 = "What generation were transistors and core memories invented?\nA.     Second\nB.     First\nC.     Fifth\nD.    Third\n"; //question 3
    
    Q4 ="What is  the fourth component of Charles Babbage’s Analytic Engine?\n1.     mill\n2.     store\n3.    output unit"; //question 4
    Q5 =" a"; //question 5
    Q6 =" a"; //question 6
    Q7 =" a"; //question 7
    
    Q8 = "Any operation on this computer that exceeds the maximum allowable value is called ___________ _________.\n"; //question 8
    
    Q9 = "In an  __________ representation, objects can take on any value.\n"; //question 9
    
    Q10 = "The __________ of the wave is a measure of its loudness—the greater the ________ the louder the sound.\n"; //question 10
    Q11 = "The construction of computer circuits is based on the branch of mathematics and symbolic logic called _________   __________.\n"; //question 11
    Q12 = "A _______ is an electronic device that operates on a collection of binary inputs to produce a binary output.\n"; //question 12
    Q13 = "A _______ is a collection of logic gates that transforms a set of binary inputs into a set of binary outputs and in which the values of the outputs depend only on the current values of the inputs.\n"; //question 13
    Q14 = "The study of algorithms is _________	___________.\n"; //question 14
    
    Q15 = "Binary is what kind of positional number system?\nA.) base-16\nB.) base-2\nC.) base-10\nD.) None of the above";
        
        
    Q16 ="How many bits are in two bytes?";
    Q17 = "Q17: Which of these is NOT a programing language?\nA.) Ruby\nB.) Sonic\nC.)Python\nD.) C#";
    Q18 = "The binary number 101101 represents what decimal number?"; //question 18
    Q19 = "What is the binary representation of the number 25?"; //question 19
    Q20 = "______ the term used to describe an algorithm’s  careful use of resources."; //question 20
        
        
        
    Q21 = "The process of searching for a special pattern of symbols within a larger collection of information is called _______ __________."; //question 21
    Q22 = "Conditional, sequential, and iterative statements are all a part of what operation?"; //question 22
    Q23 ="_______ operations provide the computing agent with data values from the outside world that it may then use in later instructions."; //question 23
    Q24 ="______ operations send results from the computing agent to the outside world."; //question 24
    
    Q25 ="What is a named storage location that can hold data?"; //question 25
    Q26 ="The central concept in computer science is the __________."; //question 26
    Q27 ="True or False. Computer science is the study of how to write computer programs."; //question 27
    Q28 ="The machine, robot, person, or thing carrying out the steps of the algorithm is called a __________ _____."; //question 28
    Q29 ="The ____ state is represented by the binary value 0 in circuitry."; //question 29
    Q30 ="What binary value represents the ON state of a gate?"; //question 30
    Q31 ="The equivalent of 1 billion bytes is 1 ___________."; //question 31
    Q32 ="What is the name of the 8-bit representation of characters?"; //question 32
    Q33 ="True or false. Only computers are able to convert from binary to decimal."; //question 33
        
        
    Q34 ="_______  ______: an alias for another variable. Mechanism that allows a function to work with the original argument from the function call, not a copy of the argument\n"; //question 34
    Q35 ="True or false: 4 Things Before A Compiler Runs it Must Know About a Function :\n1) name\n2) return type\n3) number of parameters\n4) data type of each parameter\n"; //question 35
    Q36 ="True or false: \nThe address operator (&) returns the memory address of a variable.\n"; //question 36
    Q37 ="a "; //question 37
    
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
    //oficially doen with level one staring level two
 
    
     //this is passing in strings as vectors that will be used for the answer
    answer[Q1] = "iterative"; //this is the answer to question 1
    answer[Q2] = "a"; //this is the answer to question 2
    answer[Q3] = "d"; //this is the answer to question 3
    answer[Q4] = "operator"; //this is the answer to question 4
    answer[Q5] ="a"; //this is the answer to question 5
    answer[Q6] ="a"; //this is the answer to question 6
    answer[Q7] ="a"; //this is the answer to question 7
    answer[Q8] = "arithmetic overflow"; //this is the answer to question 8
    answer[Q9] = "analog"; //this is the answer to question 9
    answer[Q10] = "amplitude"; //this is the answer to question 10
    answer[Q11] = "boolean logic"; //this is the answer to question 11
    answer[Q12] = "gate"; //this is the answer to question 12
    answer[Q13] = "circuit"; //this is the answer to question 13
    answer[Q14] = "computer science"; //this is the answer to question 14
    answer[Q15] = "b"; //this is the answer to question 15
    answer[Q16] = "16"; //this is the answer to question 16
    answer[Q17] = "b"; //this is the answer to questino 17
    answer[Q18] = "45"; //this is the answer to question 18
    answer[Q19] = "11001"; //this is the answer to question 19
    answer[Q20] = "efficiency"; //this is the answer to question 20
    answer[Q21] = "pattern matching"; //this is the answer to question 21
    answer[Q22] = "control"; //this is the answer to question 22
    answer[Q23] ="input"; //this is the answer to question 23
    answer[Q24] ="output"; //this is the answer to question 24
    answer[Q25] = "varable"; //this is the answer to question 25
    answer[Q26] = "algorithm"; //this is the answer to question 26
    answer[Q27] = "false"; //this is the answer to question 27
    answer[Q28] = "computing agent"; //this is the answer to question 28
    answer[Q29] = "off"; //this is the answer to question 29
    answer[Q30] = "1"; //this is the answer to question 30
    answer[Q31] = "gigabyte"; //this is the answer to question 31
    answer[Q32] = "ascii"; //this is the answer to question 32
    answer[Q33] = "false"; //this is the answer to question 33
        
        
    answer[Q34] = "refence variable"; //this is the answer to question 34
    answer[Q35] = "true"; //this is the answer to question 35
    answer[Q36] = "true"; //this is the answer to question 36
    answer[Q37] ="a"; //this is the answer to question 37
    
    string QA, userinput, correcthoice;
    const int SIZE = 9;
    int comp[SIZE];
    int count=0;
    int wrong = count;
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
            wrong++;
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
    int wrong, count;
    
    //the quesions for level two
    Q46 = "The // marks the beginning of a ________ in C++ code."; 
    
    Q47 = "A  _______ can be thought of as a group of one or more, programming statements that collectively has a name."; //question 2
    
    Q48 = "**What generation were transistors and core memories invented?\nA.     Second\nB.     First\nC.     Fifth\nD.    Third\n"; //question 3
    
    Q49 = "Every complete statement ends with a\nA)   Period\nB)   # symbol\nC)   semicolon\nD)   ending brace"; //question 4
    Q50 ="Which of the following statements is correct?\nA)   #include (iostream)\nB)   #include {iostream}\nC)   #include <iostream>\nD)   #include [iostream]\nE)   All of the above"; //question 5
    Q51 ="A _________ _____ is a statement that causes a function to execute. A function definition contains the statements that make up the function."; //question 6
    Q52 ="The ___ statement can cause other statements to execute only under certain conditions."; //question 7
    
    Q53 = "Any operation on this computer that exceeds the maximum allowable value is called ___________ _________.\n"; //question 8
    
    Q54 = "In an  __________ representation, objects can take on any value.\n"; //question 9
    
    Q55 = "True or false. RAM memory is a form of computer data storage.\n"; //question 10
    Q56 = "Which one of the following is not a variable type in C++?\nA.) int\nB.) num\nC.) double\nD.) float"; //question 11
    Q57 = "True or False? A variable must be defined before you can use it."; //question 12
    Q58 = "_______ refers to the physical components that a computer is made of.";
    Q59 = "A ___________ _________ is a special language used to write computer programs.\n";//14
    
    
    Q60 = "A ________ is a set of instructions that a computer follows in order to perform a task.\n"; //question 15
    Q61 ="In C++, keywords, also  known as reserved words, are written in all ________.";
    Q62 = "Which of these is not a header file?\nA.) iostream\nB.)  cmath\nC.) map\nD.) tolower\n"; //question17
    Q63 = "Which of these properly displays the letter x?\nA.) cout>>x;\nB.) cout<<x;\nC.) cout\n”x”;\nD.) cout<<x\n;\nE.) cout<<”x”;"; //question 18
    Q64 = "How many bytes can  short data type use?"; //question 19
    Q65 = "True or False? Boolean variables can be set to more than true or false."; //question 20
    Q66 = "A variable’s ______ is the part of the program that has access to the variable.\n"; //question 21
    Q67 = "_____ _________ allows you to perform manual data type conversions.\n"; //question 22
    Q68 ="The ________ statement causes a loop to terminate early."; //question 23
    Q69 ="The ________ statement causes a loop to stop its current iteration  and begin the next one."; //question 24
    
    
    Q70 ="True or False? Variables may be created and destroyed while a program is running. \n";//25
    Q71 ="Which of these function types while not allow a return type?\nA.) string\nB.) void\nC.) int\nD.)bool\n";
    Q72 ="The function header declare the function’s _______ _____, name, and parameter list.\n"; //27
    Q73 ="A _____counter is a variable that is regularly incremented or decremented each time a loop iterates.\n"; 
    Q74 ="True or False? A function is only executed when it is called.\n"; //29
    Q75 ="Which of these is an invalid way to get user input in c++?\nA.) cin>>word;\nB.) userinput(word);\nC.) getline (cin, word);\n"; //30
    Q76 ="An _____ allows you to store and work with multiple values of the same data type.\n";
    Q77 ="What is the proper way to say AND in C++?\n"; //32
    Q78 ="What is  the proper symbol in saying NOT in C++?\n"; 
    Q79 ="What is the proper symbol for OR in C++?\n";
    
    
    Q80 ="True or false: 4 Things Before A Compiler Runs it Must Know About a Function :\n1) name\n2) return type\n3) number of parameters\n4) data type of each parameter\n"; 
    Q81 ="True or false: \nThe address operator (&) returns the memory address of a variable.\n"; 
    Q82 ="a "; 
    //map<string, string> answer;
    answer[Q46] = "comment"; //this is the answer to question 1
    answer[Q47] = "function"; //this is the answer to question 2
    answer[Q48] = "d"; //this is the answer to question 3
    answer[Q49] = "c"; //this is the answer to question 4
    answer[Q50] = "c"; //this is the answer to question 5
    answer[Q51] = "function call"; //this is the answer to question 6
    answer[Q52] = "if"; //this is the answer to question 7
    answer[Q53] = "arithmetic overflow"; //this is the answer to question 8
    answer[Q54] = "analog"; //this is the answer to question 9
    answer[Q55] = "true"; //this is the answer to question 10
    answer[Q56] = "b"; //this is the answer to question 11
    answer[Q57] = "true"; //this is the answer to question 12
    answer[Q58] = "hardware"; //this is the answer to question 13
    answer[Q59] = "programming language"; //this is the answer to question 14
    answer[Q60] = "program"; //this is the answer to question 15
    answer[Q61] = "lowercase"; //this is the answer to question 16
    answer[Q62] = "d"; //this is the answer to question 17
    answer[Q63] = "e"; //this is the answer to question 18
    answer[Q64] = "2"; //this is the answer to question 19
    answer[Q65] = "false"; //this is the answer to question 20
    answer[Q66] = "scope"; //this is the answer to question 21
    answer[Q67] = "type casting"; //this is the answer to question 22
    answer[Q68] = "break"; //this is the answer to question 23
    answer[Q69] = "continue"; //this is the answer to question 24
    answer[Q70] = "true"; //this is the answer to question 25
    answer[Q71] = "b"; //this is the answer to question 26
    answer[Q72] = "return type"; //this is the answer to question 27
    answer[Q73] = "counter"; //this is the answer to question 28
    answer[Q74] = "true"; //this is the answer to question 29
    answer[Q75] = "b"; //this is the answer to question 30
    answer[Q76] = "array"; //this is the answer to question 31
    answer[Q77] = "&&"; //this is the answer to question 32
    answer[Q78] = "!"; //this is the answer to question 33
    answer[Q79] = "||"; //this is the answer to question 34


    answer[Q80] = "true"; //this is the answer to question 35
    answer[Q81] = "true"; //this is the answer to question 36
    answer[Q82] ="a"; //this is the answer to question 37

    
    //map<int, string> question; //creating the map for the questions
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
    const int SIZE = 9;
    int comp[SIZE];
        count = 0; //count is just s we can keep track of how many questions we asked in this level
        for (int i = 0; i < 10 && score < 31 ; i++) //initalize i to 0 and while i is less than ten and the score is not greater than 45 you should continue to go through the loop each time incrementing i by one
        {
        redo2: //where I want the computer to go back to if the number called in the psedo erandom number generator is already in the array that i have created
            int computerchoice = CompSci121();
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
            userinput = lower(userinput);
            if (userinput != answer[QA]){
                cout<<"That is incorrect\n"<<endl;
                cout<<"The right answer was: "<<answer[QA]<<endl;//telling them the corect answer for the user's benfit.
                score-=2;
                wrong++;
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
                    cout<<"Congrats "<<username<<" you have passed the second level!"<<endl; //leting them know that finished level one
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
        int newl =  levelOne(username);
        if (newl == 0){
            response = next(username);
            if (response == 0){
                return 0;
            }
            newl =  levelTwo(username);
            if (newl == 0){
                response = next(username);
                if (response == 0){
                    return 0;
                }
            }
            if(newl != 0){
                return 0;
            }
            if (resp == 1){
            newl =  bonus(username, num);
                if (newl == 0);{
                    cout<<"CONGRATS "<<username<<" you have finished the game!!!\nYou must be one smart cookie! ;)"<<endl;
                
                }
                
            }
        }
        
    }

    return 0;
}
