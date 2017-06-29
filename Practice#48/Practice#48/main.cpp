//
//  main.cpp
//  Practice#48
//  www.codeground.org/practice/practiceProblemView
//
//  Created by 박주연 on 2017. 6. 29..
//  Copyright © 2017년 박주연. All rights reserved.
//

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
        
        int A, B, D;    //A: 태준이가 학교로 가는 거리
                        //B: 태준이가 집으로 가는 거리
                        //D: 학교에서 집까지의 거리
        
        cin >> A >> B >> D;
        
        int time=0;     //태준이가 학교까지 가는데 걸리는 시간
        
        time=(D-A)/(A-B);   //태준이가 왕복하는데 걸린 시간
        
        if((D-A)%(A-B)==0){ //태준이가 학교로 출발하면 학교에 도착하는 경우
            time++;
        }
        else{           //태준이가 한번 왕복 후 학교에 출발하면 학교에 도착하는 경우
            time+=2;
        }

        Answer = time;
        /////////////////////////////////////////////////////////////////////////////////////////////
        
        
        // Print the answer to standard output(screen).
        cout << "Case #" << test_case+1 << endl;
        cout << Answer << endl;
    }
    
    return 0;//Your program should return 0 on normal termination.
}
