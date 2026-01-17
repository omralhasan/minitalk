/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:55:26 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/17 23:24:47 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "./ft_printf/ft_printf.h"
#include <signal.h>


void handler(int sig , siginfo_t *info , void *context)
{
    (void) context;
    if (sig == SIGUSR1)
        server.ch = server.ch | (1 << server.bit);
    server.bit++;

    if (server.bit == 8)
    {
        write(1 , &server.ch,1);

            if(server.ch == '\0')
                write(1 , "\n" ,1);
        server.ch = 0;
        server.bit= 0;
    }
    kill(info->si_pid, SIGUSR1);
}
int main(void)
{
    struct sigaction sa;

    server.bit = 0;
    server.ch = 0;
    
    ft_printf("Server PID: ""%d",getpid());
    write(1, "\n", 1);

    sa.sa_sigaction = handler;
    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    while (1)
        pause();

    return (0);
}
