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
void checkanswer(string x ){
    
}
int main() //main function
{
    string Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24, Q25, Q26, Q27, Q28, Q29, Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37,Q38, Q39, Q40, Q41, Q42, Q43, Q44, Q45, Q46, Q47, Q48, Q49, Q50, Q51, Q52, Q53, Q54, Q55, Q56, Q57, Q58, Q59, Q60, Q61, Q62, Q63, Q64, Q65, Q66, Q67, Q68, Q69, Q70, Q71, Q72, Q73, Q74, Q75, Q76, Q77, Q78, Q79, Q80, Q81, Q82, Q83, Q84, Q85, Q86, Q87, Q88, Q89, Q90, Q91, Q92, Q93, Q94, Q95, Q96, Q97, Q98, Q99, Q100, Q101, Q102, Q103, Q104, Q105, Q106, Q108, Q107, Q109, Q110, Q111, Q112, Q113, Q114, Q115, Q116, Q117,Q118, Q119, Q120,Q121, Q122, Q123, Q124, Q125, Q126, Q127, Q128, Q129, Q130, Q131, Q132, Q133, Q134, Q135; //list of strings which represent our questions
    
    Q1 = "All the operations used to construct algorithms belong to one of only three categories: \n1.    Sequential \n2.    Conditional \nWhat is the third operation?\n\n"; //question 1
    
    Q2 = "What is the best definition of an algorithm?\nA. A well-ordered collection of unambiguous and effectively computable operations that, when executed, produces a result and halts in a finite amount of time.\nB. A list of instructions that can be effectively computable or it can be unsolveable.\nC. Instructions to accomplish a task.\nD. Computer language.\n"; //question 2
    
    Q3 = "What generation were transistors and core memories invented?\nA.     Second\nB.     First\nC.     Fifth\nD.    Third\n"; //question 3
    
    Q4 ="a "; //question 4
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
    
    
    
    
    Q15 = "The study of the efficiency of algorithms is called _________  __ __________.\n"; //question 15
    Q16 =" ";
    Q17 = "A  _______ can be thought of as a group of one or more, programming statements that collectively has a name.\n"; //question17
    Q18 = " a"; //question 18
    Q19 = "Every complete statement ends with a\nA)   Period\nB)   # symbol\nC)   semicolon\nD)   ending brace"; //question 19
    Q20 = "Which of the following statements is correct?\nA)   #include (iostream)\nB)   #include {iostream}\nC)   #include <iostream>\nD)   #include [iostream]\nE)   All of the above\n"; //question 20
    Q21 = "A _________ _____ is a statement that causes a function to execute. A function definition contains the statements that make up the function.\n"; //question 21
    Q22 = "The ___ statement can cause other statements to execute only under certain conditions.\n"; //question 22
    Q23 =" a"; //question 23
    Q24 ="a "; //question 24
    
    
    
    
    Q25 ="_______ ______ is breaking a program up into smaller, manageable functions. \n"; //question 25
    Q26 ="A ________ collection of statements to perform a specific task.\n"; //question 26
    Q27 ="__________: Values passed to a function.\n"; //question 27
    Q28 ="__________: Variables in function that hold values passed as arguments.\n"; //question 28
    Q29 ="_____  ___ _____: when an argument is passed to a function, a copy of its value is placed in the parameter.\n"; //question 29
    Q30 ="______  ______: defined within a function or block; accessible only with the function or block.\n"; //question 30
    Q31 ="______  ______: a variable defined outside all functions; it is accessible to all functions within its scope.\n"; //question 31
    Q32 ="_______  ______: a named constant that can be used by every function in a program.\n"; //question 32
    Q33 ="______ ______: values passed automatically if arguments are missing from the function call\n"; //question 33
    Q34 ="_______  ______: an alias for another variable. Mechanism that allows a function to work with the original argument from the function call, not a copy of the argument\n"; //question 34
    Q35 ="True or false: 4 Things Before A Compiler Runs it Must Know About a Function :\n1) name\n2) return type\n3) number of parameters\n4) data type of each parameter\n"; //question 35
    Q36 ="True or false: \nThe address operator (&) returns the memory address of a variable.\n"; //question 36
    Q37 ="a "; //question 37
    
    map<int, string> question; //this is passing in strings as vectors that will be used for the question
    map<string, string> answer; //this is passing in strings as vectors that will be used for the answer
   // map<string, int> points; //this is passing in a string and an int as vectors that will be used for points
    
    //these are questions in the game
    //what the user will see is the string in [] which is being set to the key value which lines up with the mapping
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
    //oficially doen with level two staring level three
    question.insert ( std::pair<int,string>(91,Q91) );
    question.insert ( std::pair<int,string>(92,Q92) );
    question.insert ( std::pair<int,string>(93,Q93) );
    question.insert ( std::pair<int,string>(94,Q94) );
    question.insert ( std::pair<int,string>(95,Q95) );
    question.insert ( std::pair<int,string>(96,Q96) );
    question.insert ( std::pair<int,string>(97,Q97) );
    question.insert ( std::pair<int,string>(98,Q98) );
    question.insert ( std::pair<int,string>(99,Q99) );
    question.insert ( std::pair<int,string>(100,Q100) );
    question.insert ( std::pair<int,string>(101,Q101) );
    question.insert ( std::pair<int,string>(102,Q102) );
    question.insert ( std::pair<int,string>(103,Q103) );
    question.insert ( std::pair<int,string>(104,Q104) );
    question.insert ( std::pair<int,string>(105,Q105) );
    question.insert ( std::pair<int,string>(106,Q106) );
    question.insert ( std::pair<int,string>(107,Q107) );
    question.insert ( std::pair<int,string>(108,Q108) );
    question.insert ( std::pair<int,string>(109,Q109) );
    question.insert ( std::pair<int,string>(110,Q110) );
    question.insert ( std::pair<int,string>(111,Q111) );
    question.insert ( std::pair<int,string>(112,Q112) );
    question.insert ( std::pair<int,string>(113,Q113) );
    question.insert ( std::pair<int,string>(114,Q114) );
    question.insert ( std::pair<int,string>(115,Q115) );
    question.insert ( std::pair<int,string>(116,Q116) );
    question.insert ( std::pair<int,string>(117,Q117) );
    question.insert ( std::pair<int,string>(118,Q118) );
    question.insert ( std::pair<int,string>(119,Q119) );
    question.insert ( std::pair<int,string>(120,Q120) );
    question.insert ( std::pair<int,string>(121,Q121) );
    question.insert ( std::pair<int,string>(122,Q122) );
    question.insert ( std::pair<int,string>(123,Q123) );
    question.insert ( std::pair<int,string>(124,Q124) );
    question.insert ( std::pair<int,string>(125,Q125) );
    question.insert ( std::pair<int,string>(126,Q126) );
    question.insert ( std::pair<int,string>(127,Q127) );
    question.insert ( std::pair<int,string>(128,Q128) );
    question.insert ( std::pair<int,string>(129,Q129) );
    question.insert ( std::pair<int,string>(130,Q130) );
    question.insert ( std::pair<int,string>(131,Q131) );
    question.insert ( std::pair<int,string>(132,Q132) );
    question.insert ( std::pair<int,string>(133,Q133) );
    question.insert ( std::pair<int,string>(134,Q134) );
    question.insert ( std::pair<int,string>(135,Q135) );


    
    
    //these are the answers to the questions that are mapped at specific key values which are denoted in []
    answer[Q1] = "iterative"; //this is the answer to question 1
    answer[Q2] = "a"; //this is the answer to question 2
    answer[Q3] = "d"; //this is the answer to question 3
    answer[Q4] ="a"; //this is the answer to question 4
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
    answer[Q32] = "global constant"; //this is the answer to question 32
    answer[Q33] = "default argument"; //this is the answer to question 33
    answer[Q34] = "refence variable"; //this is the answer to question 34
    answer[Q35] = "true"; //this is the answer to question 35
    answer[Q36] = "true"; //this is the answer to question 36
    answer[Q37] ="a"; //this is the answer to question 37
    
    int score, wrong = 0;
    int count = score = 0;
    string userinput, username, correctchoice, QA; //this initializes the strings userinput and correctchoice
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
    const int SIZE = 9;
    int comp[SIZE];
//LEVEL ONE ******************************************************************************************************************************************************************************
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
        //still need to make the input all to lower
        for(int j = 0; j< userinput.length(); j++){
            userinput[j] = tolower(userinput[j]);
        }
        
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
        if( count == 10 && score < 5){ //if you have gone through ten questions for the levell and the student did not get the min # correct to move on to the next level
            cout<<"You did pretty good "<<username<<" but you have a little bit more studying to do"<<endl;
        }
        cout<<"Count: "<<count<<endl; //need to be able to see how many they got wrong verse how many the have attempted
        
    }
    if (wrong == 0){
        cout<<"You recieved a pefect score on this level. Conrats! Here is five extra points."<<endl;
        score +=5;
        cout<<"Score: "<<score<<endl;//keeping the user updated with their score
    }
//LEVEL TWO ******************************************************************************************************************************************************************************
    if(score >= 10){//lchecking to see if the score is good enough to go to level two. You must have a score of at least 10 to move on
        count = 0; //count is just s we can keep track of how many questions we asked in this level
        for (int i = 0; i < 10 && score < 31 ; i++) //initalize i to 0 and while i is less than ten and the score is not greater than 25 you should continue to go through the loop each time incrementing i by one
        {
        redo2: //where i want the computer to go back to if the number called in the psedo erandom number generator is already in the array that i have created
            int computerchoice = CompSci121();
            comp[i] = computerchoice; //puting it into the array. It doesnt matter that it is the same array because i started at zero gain so it is going to copy over it
            
            //checking the array
            for (int k = 0; k < i; k++){//to check it aginst evrything already in the array
                if(comp[k] == computerchoice){ //checking to see if it is in the array
                    goto redo2; // if it is it should go back and racall the the 121 genorator
                }
            }
            
            //cout<<endl<<comp[i]<<endl;//checking to make sure it is the right number
            QA = question[computerchoice]; //
            cout<<computerchoice<<endl;
            cout<<endl<<QA<<endl;//displays the computer choice
            getline (cin, userinput);
            //still need to make the input all to lower
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
            if( count == 10 && score < 5){ //if you have gone through ten questions for the levell and the student did not get the min # correct to move on to the next level
                cout<<"You did pretty good "<<username<<" but you have a little bit more studying to do"<<endl;
            }
            cout<<"Count: "<<count<<endl; //need to be able to see how many they got wrong verse how many the have attempted
            
        }
    }
}
