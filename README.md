_This project has been created as part of the 42 curriculum by oalhasan._

# Minitalk

## Description

**Minitalk** is a communication program implemented in C that establishes a data-exchange channel between a client and a server using strictly UNIX signals.

The goal is to understand Inter-Process Communication (IPC) without using standard methods like pipes or sockets. Instead, the project uses `SIGUSR1` and `SIGUSR2` to transmit data bit-by-bit. The server launches first and waits for signals, while the client takes a string and a Process ID (PID) to send the message.

## Instructions

### Compilation

To compile the project, run the following command in the root of the repository:

    make

This will generate two executables:

- `server`
- `client`

Optional cleaning rules:

- `make clean`: Removes object files (`.o`).
- `make fclean`: Removes object files and the executables.
- `make re`: Recompiles the entire project from scratch.

Usage

1. Start the Server Run the server first. It will print its PID.

./server

Output Example: Server PID: 9876

2. Run the Client Open a new terminal. Run the client using the PID provided by the server and the string you wish to send.

./client <PID> <MESSAGE>

Example:

./client 9876 "Hello, 42 World!"

Notes:

    The server must be running before starting the client.

    If the PID is invalid, the client should exit with an error.

    The server continues running and listening for new messages until manually terminated (Ctrl+C).

Features

    Bitwise Transmission: Breaks down every character into 8 bits and transmits them sequentially.

    Signal Handling: Uses sigaction to catch SIGUSR1 and SIGUSR2.

    Unicode Support: Capable of handling standard ASCII and Unicode characters (depending on terminal support).

    Reliability: Implements synchronization logic to prevent signal loss during transmission.

Technical Choices

    Communication Protocol:

        SIGUSR1 represents a 1 bit.

        SIGUSR2 represents a 0 bit.

    Signal Handling: Used sigaction with sa_siginfo (in the bonus/advanced part) to retrieve the client's PID for acknowledgments.

    Optimization: Adjusted timing (or handshake logic) to ensure the server processes signals correctly without data corruption.

Resources
References

    UNIX Signals - Wikipedia

    man sigaction: For detailed control over signal handling.

    man kill: To understand sending signals to processes.

    man getpid: To retrieve the process ID.

    Bitwise Operators in C

AI Usage

In compliance with the 42 subject guidelines, Artificial Intelligence tools (ChatGPT/Copilot) were used in this project for the following specific tasks:

    Debugging: Assisted in diagnosing signal loss issues caused by the speed mismatch between client and server.

    Logic Explanation: Helped visualize the bit-shifting logic (<<, >>) needed to reconstruct characters from binary signals.

    Code Optimization: Suggested improvements for the Makefile structure and error handling in the client parser.

```

```
