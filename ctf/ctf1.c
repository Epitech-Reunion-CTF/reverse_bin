/*
** EPITECH PROJECT, 2023
** ctf
** File description:
** ctf1
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct password_s {
    char *log;
    char *pass_log;
} password_t;

void
set_psswd(password_t **my_struct_psswd)
{
    my_struct_psswd[0]->log = "toto";
    my_struct_psswd[0]->pass_log = "azerty_toto";
    return;
}

int
check_psswd(char *__origine, char *__compare)
{
    if (strcmp(__origine, __compare) == 0) {
        return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}

void
resize_line(char **line)
{
    size_t len = strlen(*line);
    (*line)[len - 1] = '\0';
    return;
}

int
main(int ac, char **av)
{
    char *line_log = NULL;
    char *line_psswd = NULL;
    size_t len = 0;
    ssize_t nread = 0;

    printf("> login : ");
    nread = getline(&line_log, &len, stdin);
    if (nread == -1) {
        exit(EXIT_FAILURE);
    }

    printf("> password : ");
    nread = getline(&line_psswd, &len, stdin);
    if (nread == -1) {
        exit(EXIT_FAILURE);
    }
    password_t *my_struct_psswd = malloc(sizeof(password_t));
    if (my_struct_psswd == NULL) {
        return EXIT_FAILURE;
    }

    resize_line(&line_log);
    resize_line(&line_psswd);
    set_psswd(&my_struct_psswd);
    if (strcmp(line_log, my_struct_psswd->log) == 0) {
        if (check_psswd(line_psswd, my_struct_psswd->pass_log) == 1) {
            printf("Bad password for passwd -> %s\n", line_log);
            return (EXIT_FAILURE);
        }
    } else {
        printf("Bad password for user -> %s\n", line_log);
        return (EXIT_FAILURE);
    }

    return (EXIT_SUCCESS);
}