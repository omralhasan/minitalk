/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:55:38 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/17 19:15:16 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
# define BUFFER_SIZE 2048

typedef struct s_server
{
  int ch;
  int bit;
  char buffer[BUFFER_SIZE];
  int bufeer_index;
} t_server;

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include "./ft_printf/ft_printf.h"

    void handler(int sig);
void char_send(int pid, unsigned char ch);
void ack_handler(int sig);

t_server server;

#endif