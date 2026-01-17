/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:55:26 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/17 20:04:49 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "./ft_printf/ft_printf.h"
#include <signal.h>


void handler(int sig)
{

    if (sig == SIGUSR1)
        server.ch = server.ch | (1 << server.bit);
    server.bit++;

    if (server.bit == 8)
    {
      server.buffer[server.bufeer_index] = server.ch;
      server.bufeer_index++;

        if ((server.bufeer_index == BUFFER_SIZE )|| server.ch == '\0')
        {
                write(1, server.buffer, server.bufeer_index);

            if(server.ch == '\0')
                write(1 , "\n" ,1);
            server.bufeer_index = 0;
        }
        server.ch = 0;
        server.bit= 0;
    }
}
int main(void)
{
    struct sigaction sa;

    server.bufeer_index = 0;
    server.bit = 0;
    server.ch = 0;
    
    ft_printf("Server PID: ""%d",getpid());
    write(1, "\n", 1);

    sa.sa_handler = handler;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    while (1)
        pause();

    return (0);
}
