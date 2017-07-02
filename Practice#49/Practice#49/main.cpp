//
//  main.cpp
//  Practice#49
//  www.codeground.org
//
//  Created by 박주연 on 2017. 7. 2..
//  Copyright © 2017년 박주연. All rights reserved.
//

/*
 문제 해결 : 
 1. 입력받은 문자열 안에 'h','e','l','o' 각각의 갯수를 구한다.
 2. h, e, o, l/2 의 갯수 중 가장 작은 수를 출력한다.
 */

/*
 You should use the statndard input/output
 
 in order to receive a score properly.
 
 Do not use file input and output
 
 Please be very careful.
 */

#include <iostream>

using namespace std;

int Answer;

int main(int argc, char** argv)
{
    int T, test_case;
    /*
     The freopen function below opens input.txt file in read only mode, and afterward,
     the program will read from input.txt file instead of standard(keyboard) input.
     To test your program, you may save input data in input.txt file,
     and use freopen function to read from the file when using cin function.
     You may remove the comment symbols(//) in the below statement and use it.
     Use #include<cstdio> or #include <stdio.h> to use the function in your program.
     But before submission, you must remove the freopen function or rewrite comment symbols(//).
     */
    
    // freopen("input.txt", "r", stdin);
    
    cin >> T;
    for(test_case = 0; test_case  < T; test_case++)
    {
        
        Answer = 0;
        /////////////////////////////////////////////////////////////////////////////////////////////
        /*
         Implement your algorithm here.
         The answer to the case will be stored in variable Answer.
         */
        /////////////////////////////////////////////////////////////////////////////////////////////
        
        string input;   //입력받을 문자열
        cin >> input;
        
        int hCount=0, eCount=0, lCount=0, oCount=0;     //hCount : h의 개수
                                                        //eCount : e의 개수
                                                        //lCount : l의 개수
                                                        //oCount : o의 개수
        
        //입력받은 문자열에 속한 h,e,l,o 의 개수를 구한다.
        for(int i = 0 ; i<input.length(); i++){
            if(input.at(i)=='h'){
                hCount++;
            }
            else if(input.at(i)=='e'){
                eCount++;
            }
            else if(input.at(i)=='l'){
                lCount++;
            }
            else if(input.at(i)=='o'){
                oCount++;
            }
        }
        
        
        //h, e, o, l/2 의 갯수 중 가장 작은 수를 출력한다.
        Answer=hCount;
        
        if(Answer > eCount)
            Answer=eCount;
        
        if(Answer > oCount)
            Answer=oCount;
        
        if(Answer > (lCount/2))
            Answer=(lCount/2);
        
        
        // Print the answer to standard output(screen).
        cout << "Case #" << test_case+1 << endl;
        cout << Answer << endl;
    }
    
    return 0;//Your program should return 0 on normal termination.
}
