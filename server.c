/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:55:26 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/23 19:34:50 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _POSIX_C_SOURCE 200809L
#include "minitalk.h"

static t_server	g_server;

void	handler(int sig, siginfo_t *info, void *context)
{
	(void)context;
	if (sig == SIGUSR1)
		g_server.ch = g_server.ch | (1 << g_server.bit);
	g_server.bit++;
	if (g_server.bit == 8)
	{
		write(1, &g_server.ch, 1);
		if (g_server.ch == '\0')
			write(1, "\n", 1);
		g_server.ch = 0;
		g_server.bit = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	g_server.bit = 0;
	g_server.ch = 0;
	ft_printf("Server PID: ""%d", getpid());
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
