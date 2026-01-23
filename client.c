/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:07:27 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/23 19:36:49 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _POSIX_C_SOURCE 200809L
#include "minitalk.h"

static volatile int	g_received = 0;

void	ack_handler(int sig)
{
	(void)sig;
	g_received = 1;
}

void	char_send(int pid, unsigned char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		g_received = 0;
		if ((c >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		while (g_received == 0)
			usleep(50);
	}
}

int	main(int arc, char **argv)
{
	struct sigaction	sa;
	int					pid;
	int					i;

	i = 0;
	if (arc != 3)
	{
		ft_printf("Error: Wrong arguments\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		return (1);
	sa.sa_handler = ack_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	while (argv[2][i])
	{
		char_send(pid, (unsigned char)argv[2][i]);
		i++;
	}
	char_send(pid, '\0');
	return (0);
}
