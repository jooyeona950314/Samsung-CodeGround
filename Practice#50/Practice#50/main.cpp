//
//  main.cpp
//  Practice#50
//  www.codeground.org
//
//  Created by 박주연 on 2017. 7. 2..
//  Copyright © 2017년 박주연. All rights reserved.
//

/*
 문제 해결 : 
 1. 2차원 배열 생성(커피의 종류/가격)
 2. 커피의 종류별로 원하는 사람의 수 * 가격의 합 저장
 3. 법인 카드 지출의 한계치인 K와 비교
 */

/*
 You should use the statndard input/output
 
 in order to receive a score properly.
 
 Do not use file input and output
 
 Please be very careful.
 */

#include <iostream>

using namespace std;

char Answer;

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
        
        int N, M, K;    //N : 근무중인 부서의 총 인원수
                        //M : 커피 종류의 수
                        //K : 법인 카드 지출의 한계치
        
        cin >> N >> M >> K;
        
        int array[2][M];
        
        for(int i = 0 ; i < M; i++){
            array[0][i]=0;
        }
        
        int kind;       //원하는 커피의 종류
        
        //원하는 종류의 커피의 수를 구함
        for(int i = 0 ; i < N ; i++){
            cin >> kind;
            array[0][kind-1]++;
        }
        
        //종류별로 커피의 가격
        for(int i = 0 ; i < M ; i++){
            cin >> array[1][i];
        }
        
        int price=0;    //모든 사원이 원하는 커피를 사기 위해 필요한 돈
        
        for(int i = 0 ; i < M ; i++){
            price+=(array[0][i]*array[1][i]);
        }
        
        //구입 가능 여부 확인
        if(K>=price)
            Answer='Y';
        else
            Answer='N';
        
        /////////////////////////////////////////////////////////////////////////////////////////////
        
        
        // Print the answer to standard output(screen).
        cout << "Case #" << test_case+1 << endl;
        cout << Answer << endl;
    }
    
    return 0;//Your program should return 0 on normal termination.
}
