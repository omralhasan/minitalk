/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:07:27 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/17 20:05:13 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "./ft_printf/ft_printf.h"

void ack_handler(int sig)
{
    (void)sig;
}
void char_send(int pid, unsigned char c)
{
    int bit;

    bit = 0;

    while (bit < 8)
    {
        if ((c >> bit) & 1)
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);

        bit++;
        usleep(100);
    }
}

int main(int arc, char **argv)
{
    int pid;
    int i;

    i = 0;
    if (arc != 3)
    {
        ft_printf("Usage: %s <PID> <STRING>\n", argv[0]);
        return 1;
    }
    pid = atoi(argv[1]);
    if (pid <= 0)
    {
        ft_printf("Invalid PID: %s\n", argv[1]);
        return 1;
    }
    while (argv[2][i])
    {
        char_send(pid, argv[2][i]);
        i++;
    }
    char_send(pid, '\0');
    return 0;
}
