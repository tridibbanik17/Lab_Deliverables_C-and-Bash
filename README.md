<div align="center">

<h3 align="center">SFWRENG 2XC3 Lab Deliverables</h3>

  <p align="center">
    Lab deliverables for SFWRENG 2XC3: Development Basics at McMaster University
    <br />
     <a href="https://github.com/tridibbanik17/lab_deliverables_c-and-bash">github.com/tridibbanik17/lab_deliverables_c-and-bash</a>
  </p>
</div>

## Table of Contents

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#key-features">Key Features</a></li>
      </ul>
    </li>
    <li><a href="#architecture">Architecture</a></li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

## About The Project

This repository contains the lab deliverables for SFWRENG 2XC3: Development Basics, a course at McMaster University instructed by Dr. Sam Scott. The labs cover fundamental concepts in C programming and Bash scripting. The deliverables are organized by week, with each week focusing on a specific set of skills and concepts.

### Key Features

- **C Programming Exercises:** Includes exercises on C syntax, program structure, arrays, pointers, string processing, and linked lists.
- **Bash Scripting Exercises:** Includes exercises on Bash scripting, regular expressions, and Linux commands.
- **Makefile Usage:** Demonstrates the use of Makefiles for compiling C programs.
- **Code Coverage:** Demonstrates the use of `gcov` for code coverage analysis.
- **Program Optimization:** Explores techniques for program optimization, such as removing function calls and algorithmic optimization.

## Architecture

The repository is structured into weekly lab directories, each containing C source files, Bash scripts, Makefiles, and text files.

- **C Source Files:** Implement various algorithms and data structures.
- **Bash Scripts:** Automate tasks, manipulate text, and perform system operations.
- **Makefiles:** Simplify the compilation process for C programs.
- **Text Files:** Contain data, instructions, or results for the exercises.

The main technologies used are:

- **C:** A general-purpose programming language used for implementing algorithms and data structures.
- **Bash:** A command-line interpreter used for scripting and automation.
- **Make:** A build automation tool used for managing the compilation process.

## Getting Started

To run the code in this repository, you will need a Linux environment with the following tools installed:

### Prerequisites

- **GCC:** The GNU Compiler Collection for compiling C programs.
  ```sh
  sudo apt-get install gcc
  ```
- **Make:** A build automation tool.
  ```sh
  sudo apt-get install make
  ```
- **Bash:** The Bourne Again Shell. Usually pre-installed on Linux systems.
- **Gcov:** A code coverage analysis tool (optional, for week 6).
  ```sh
  sudo apt-get install gcovr
  ```

### Installation

1.  Clone the repository:
   ```sh
   git clone https://github.com/tridibbanik17/lab_deliverables_c-and-bash.git
   ```
2.  Navigate to the desired week's directory:
   ```sh
   cd tridibbanik17-lab_deliverables_c-and-bash/2XC3-labs/week1
   ```
3.  Compile and run the C programs using Make (if applicable):
   ```sh
   make
   ./program_name
   ```
4.  Execute Bash scripts:
   ```sh
   chmod +x script_name.sh
   ./script_name.sh
   ```

## Acknowledgments

- This README was created using [gitreadme.dev](https://gitreadme.dev) — an AI tool that looks at your entire codebase to instantly generate high-quality README files.



