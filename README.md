# my-Shell

A POSIX-compliant shell built from scratch in **C** — REPL, command parsing, builtins,
quoting, redirection, pipelines, history, and tab completion.

> Built as part of the [CodeCrafters "Build Your Own Shell"](https://app.codecrafters.io/courses/shell/overview) challenge.

## 🎯 Goal

Understand how a real shell works under the hood by reimplementing one from zero in C:
parsing, process spawning (`fork`/`exec`), file descriptors, job control, and interactive features.

## ✨ Features

- [x] REPL (Read-Eval-Print Loop)
- [x] Prompt and invalid command handling
- [x] `exit`, `echo`, `type`, `pwd`, `cd`
- [x] Executable lookup via `PATH`
- [x] Running external programs
- [ ] Quoting (single, double, backslash)
- [ ] Redirection (`>`, `>>`, `2>`, `2>>`)
- [ ] Tab completion (builtin, executable, filename)
- [ ] Programmable completion
- [ ] Background jobs (`jobs`, `&`)
- [ ] Pipelines (`|`)
- [ ] History (`history`, arrow keys, persistence)
- [ ] Parameter expansion

## 🛠️ Tech Stack

- Language: **C (C11 or C17)**
- Compiler: **gcc** or **clang**
- Build: **Makefile**
- OS: Linux / macOS

## 🚀 Getting Started

```bash
git clone https://github.com/monamijer/my-Shell.git
cd my-Shell
make
./myshell
Example session:

bash
$ ./myshell
$ echo "hello world"
hello world
$ pwd
/home/user/my-Shell
$ ls | wc -l
12
$ exit
📁 Project Structure
text
my-Shell/
├── src/
│   ├── main.c          # entry point + REPL loop
│   ├── parser.c        # tokenization, quoting, expansion
│   ├── builtins.c      # cd, echo, type, pwd, exit, history
│   ├── exec.c          # fork/exec, PATH lookup, process spawning
│   ├── redirect.c      # file descriptors, dup2, redirections
│   ├── pipeline.c      # pipes, multi-command pipelines
│   ├── completion.c    # tab completion (readline)
│   ├── history.c       # history + persistence (~/.myshell_history)
│   └── jobs.c          # background jobs, signals, process groups
├── include/
│   └── shell.h         # shared headers, structs, prototypes
├── tests/
│   └── ...             # unit tests (optional)
├── Makefile
├── .gitignore
└── README.md
🧠 What Im Learning
How the kernel exposes processes (fork, execvp, waitpid)

File descriptor manipulation (dup2, pipe, open, close)

Parsing shell grammar (quotes, escapes, expansions)

Terminal raw mode & readline-style completion

Job control (process groups, signals: SIGINT, SIGTSTP, SIGCHLD)

Memory management in C (no GC — every malloc has a free)

📚 Resources
CodeCrafters — Build Your Own Shell

POSIX Shell Command Language

Bash Reference Manual

GNU Readline Library

Advanced Programming in the UNIX Environment (APUE) — W. Richard Stevens

🗺️ Roadmap
Stage	Status
REPL + prompt	✅
Builtins (exit, echo, type, pwd, cd)	🚧
PATH lookup	⬜
Running programs (fork/exec)	⬜
Quoting (single, double, backslash)	⬜
Redirection (>, >>, 2>, 2>>)	⬜
Completion (builtin, executable, filename)	⬜
Programmable completion	⬜
Background jobs (jobs, &)	⬜
Pipelines (|)	⬜
History + persistence	⬜
Parameter expansion	⬜
🧪 Testing
bash
make test
Or run manually against CodeCrafters' automated tests via git push.

🤝 Contributing
This is a personal learning project, but feedback and suggestions are welcome.
Open an issue or a PR if you spot a bug.

📄 License
MIT
