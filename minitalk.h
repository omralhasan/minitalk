/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:55:38 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/23 19:56:38 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _GNU_SOURCE
# include "./ft_printf/ft_printf.h"
# include "ft_printf/libft/libft.h"
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_server
{
	int		ch;
	int		bit;
}			t_server;

void		handler(int sig, siginfo_t *info, void *context);
void		char_send(int pid, unsigned char ch);
void		ack_handler(int sig);

#endif