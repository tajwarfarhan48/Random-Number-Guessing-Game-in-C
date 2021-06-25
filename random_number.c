// A random number guessing game written in C

# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int user_range, user_guess, extra_tries = 4;
    printf("Type the maximum number in the guessing range (the longer the harder): ");
    scanf("%d", &user_range);
    srand(time(NULL));
    int answer = rand() % user_range;
    
    printf("Enter your guess: ");
    scanf("%d", &user_guess);

    while((user_guess != answer) && (extra_tries)){
        
        if(user_guess > answer){
            extra_tries--;
            printf("Your guess is larger than the answer. Tries left: %d \n\n", extra_tries + 1);
        }

        else if(user_guess < answer){
            extra_tries--;
            printf("Your guess is smaller than the answer. Tries left: %d \n\n", extra_tries + 1);
        }

        printf("Enter your guess: ");
        scanf("%d", &user_guess);
    }

    if(user_guess == answer){
        printf("\nThat's correct! The answer is %d.", answer);   
    }
    
    else if(!(extra_tries)){
        printf("\nYou ran out of tries. The answer is %d.", answer);
    }

    return 0;
}
