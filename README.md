*This project has been created as part of the 42 curriculum by oalhasan.*

## Description

**Minitalk** is a UNIX systems programming project that demonstrates inter-process communication (IPC) using UNIX signals. The project consists of a server and client program that communicate by encoding messages into individual bits and transmitting them as signals.

### How It Works

The client encodes each character of a message into 8 bits and sends each bit to the server using two signals:
- `SIGUSR1` represents a bit value of 1
- `SIGUSR2` represents a bit value of 0

The server receives these signals, reconstructs the character, and sends an acknowledgment back to the client. This process repeats for each character until the entire message is transmitted (including the null terminator that signals end of transmission).

**Key Concepts:**
- Signal handling with `sigaction()`
- Bit manipulation for data encoding
- Process-to-process communication via signals
- Synchronization between processes using acknowledgment signals

## Instructions

### Compilation

Compile the project using the provided Makefile:

```bash
make
```

This will create two executables:
- `server` - The server process
- `client` - The client process

To clean object files:
```bash
make clean
```

To remove all compiled files and binaries:
```bash
make fclean
```

To recompile from scratch:
```bash
make re
```

### Running the Server

In one terminal, start the server:

```bash
./server
```

The server will output its process ID (PID). You'll need this PID to run the client.

Example output:
```
Server PID: 12345
```

### Running the Client

In another terminal, run the client with the server's PID and your message:

```bash
./client <server_pid> "your message here"
```

**Example:**
```bash
./client 12345 "Hello, World!"
```

The client will send the message bit by bit, and the server will display it character by character.

## Resources

### Manual Pages
- `man signal` - Overview of signals
- `man sigaction` - Signal action management
- `man kill` - Sending signals to processes
- `man pause` - Suspending process execution

### Documentation
- [Linux man-pages: signal-safety(7)](https://man7.org/linux/man-pages/man7/signal-safety.7.html) - Signal safety considerations
- [POSIX Signals Overview](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/signal.h.html)
- [Bit Manipulation Guide](https://en.wikipedia.org/wiki/Bit_manipulation)

### AI Tools Usage

AI assistance was provided for:
- **Code review and 42 norm compliance**: Checking code against 42 school formatting standards, variable naming conventions, and function complexity limits
- **Debugging signal handling**: Explaining signal safety, volatile keyword usage, and proper signal handler implementation
- **Technical explanations**: Clarifying bit manipulation concepts and inter-process communication mechanisms

*Note: All core implementations and logic were developed independently. AI was used only for code review, standard compliance, and documentation purposes.*
