//hello world program
#include <stdio.h>
#include <stdlib.h>
char *names[10] = {
    "Alice",
    "Bob",
    "Carol",
    "Dave",
    "Eve",
    "Frank",
    "Grace",
    "Heidi",
    "Ivan",
    "Judy",
};

void hello(char *name);
char* sayHello();

//function that returns system time in seconds
int get_time()
{
    return time(NULL);
}

int main()
{
    //call sayHello function a thouseand times and count how many times each name is printed
    srand(get_time());
    int count[10] = {0};
    int max = 0;
    for (int i = 0; i < 1000; i++)
    {
        char *name = sayHello();
        for (int j = 0; j < 10; j++)
        {
            if (name == names[j])
            {
                count[j]++;
                if (count[j] > max)
                {
                    max = count[j];
                }   

            }
        }
    }
    //print the results
    for (int i = 0; i < 10; i++)
    {
        printf("%s: %d\n", names[i], count[i]);
    }
    //print who is the luckiest
    printf("The luckiest is: ");
    for (int i = 0; i < 10; i++)
    {
        if (count[i] == max)
        {
            printf("%s ", names[i]);
        }
    }
    printf("\n");

    return 0;
}

char* sayHello()
{
    
    char *name = names[rand() % 10];
    //hello(name);
    return name;
}



///function that takes a name as param and prints hello name
void hello(char *name)
{
    printf("Hello %s!\n", name);
}
