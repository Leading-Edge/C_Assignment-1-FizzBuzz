//
//  main.c
//  Assignment #1: Fizz Buzz
//
//  Created by Yolanda Theophilus on 2016-03-08.
//  Copyright © 2016 Yolanda Theophilus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    for (x = 1; x < 100; x++) {
        if (x%3==00 && x%5==0){
            printf("FizzBuzz\n");
        }
        else if (x%3==0){
            printf("Fizz\n");
        }
        else if (x%5==0){
            printf("Buzz\n");
        }
        else
    
            printf("%d\n", x);
    }
}

