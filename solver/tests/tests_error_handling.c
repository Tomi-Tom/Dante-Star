/*
** EPITECH PROJECT, 2021
** TESTS_ERROR_HANDLING_C
** File description:
** unit tests for error_handling
*/

#include "criterion/criterion.h"
#include "my_project.h"

Test (error_handling, simple_test_succes)
{
    char **av = malloc(sizeof(char *) * 3);
    int ac = 3;
    av[1] = "1";
    av[2] = "12";

    cr_assert_eq(error_handling(ac, av), 84);
}

Test (error_handling, simple_test_fail)
{
    char **av = malloc(sizeof(char *) * 2);
    int ac = 2;
    av[1] = "bonjour moi c'est tom";

    cr_assert_eq(error_handling(ac, av), 0);
}

Test (error_handling, simple_test_fail2)
{
    char **av = malloc(sizeof(char *) * 3);
    int ac = 3;
    av[0] = NULL;

    cr_assert_eq(error_handling(ac, av), 84);
}
