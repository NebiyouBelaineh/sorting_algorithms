<a name="readme-top"></a>

<!--
!!! IMPORTANT !!!
This README is an example of how you could professionally present your codebase. 
Writing documentation is a crucial part of your work as a professional software developer and cannot be ignored. 

You should modify this file to match your project and remove sections that don't apply.

REQUIRED SECTIONS:
- Table of Contents
- About the Project
  - Built With
  - Live Demo
- Getting Started
- Authors
- Future Features
- Contributing
- Show your support
- Acknowledgements
- License

OPTIONAL SECTIONS:
- FAQ

After you're finished please remove all the comments and instructions!

For more information on the importance of a professional README for your repositories: https://github.com/microverseinc/curriculum-transversal-skills/blob/main/documentation/articles/readme_best_practices.md
-->

<div align="center">
  <!-- You are encouraged to replace this logo with your own! Otherwise you can also remove it. -->
  <img src="alx_logo.png" alt="logo" width="140"  height="auto" />
  <br/>

  <h3><b>ALX Software Engineering - Holberton School</b></h3>

</div>

<!-- TABLE OF CONTENTS -->

# 📗 Table of Contents

- [📖 About the Project](#about-project)
  <!-- - [🛠 Built With](#built-with)
    - [Tech Stack](#tech-stack) -->
    - [Key Features](#key-features)
  - [🚀 Demo](#demo)
- [💻 Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Setup](#setup)
  - [Data-Structure](#data-structure)
  <!-- - [Install](#install) -->
  - [Usage](#usage)
  <!-- - [Run tests](#run-tests)
  - [Deployment](#deployment) -->
- [👥 Authors](#authors)
- [🔭 Future Features](#future-features)
- [🫱🏾‍🫲🏽 Contributing](#contributing)
- [⭐️ Show your support](#support)
- [🙏🏽 Acknowledgements](#acknowledgements)
<!-- - [❓ FAQ (OPTIONAL)](#faq) -->
- [📝 License](#license)

<!-- PROJECT DESCRIPTION -->

# 📖 Sorting Algorithms <a name="about-project"></a>

Sorting Algorithms is a project done under the instruction of ALX Software Engineering as part of the Foundations Sprint.

<!-- ## 🛠 Built With <a name="built-with"></a>

### Tech Stack <a name="tech-stack"></a>

> Describe the tech stack and include only the relevant sections that apply to your project.

<details>
  <summary>Client</summary>
  <ul>
    <li><a href="https://reactjs.org/">React.js</a></li>
  </ul>
</details>

<details>
  <summary>Server</summary>
  <ul>
    <li><a href="https://expressjs.com/">Express.js</a></li>
  </ul>
</details>

<details>
<summary>Database</summary>
  <ul>
    <li><a href="https://www.postgresql.org/">PostgreSQL</a></li>
  </ul>
</details> -->

<!-- Features -->

### Key Features <a name="key-features"></a>

The following sorting algorithms are supported.

- Bubble Sort - `0-main.c `
- Insertion Sort - `1-main.c` 
- Selection Sort - `2-main.c` 
- Quick Sort([Lomuto partition ](https://www.geeksforgeeks.org/hoares-vs-lomuto-partition-scheme-quicksort/)) - `3-main.c` 
- Shell Sort([Knuth Sequence](https://en.wikipedia.org/wiki/Shellsort/)) - `100-main.c`
- Cocktail Sort - `101-main.c`
- Counting Sort - `102-main.c`
- Merge Sort - `103-main.c`
- Heap Sort - `104-main.c`
- Radix Sort - `105-main.c`
- Bitonic Sort - `106-main.c` 
- Quick Sort([Hoare Partition](https://www.geeksforgeeks.org/hoares-vs-lomuto-partition-scheme-quicksort/)) - `107-main.c`


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- LIVE DEMO -->

## 🚀 Demo <a name="demo"></a>


- Here are some examples on the sorting algorithms:
    - Bubble sort:
    ```
    $ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
    $ ./bubble
    19, 48, 99, 71, 13, 52, 96, 73, 86, 7

    19, 48, 71, 99, 13, 52, 96, 73, 86, 7
    19, 48, 71, 13, 99, 52, 96, 73, 86, 7
    19, 48, 71, 13, 52, 99, 96, 73, 86, 7
    19, 48, 71, 13, 52, 96, 99, 73, 86, 7
    19, 48, 71, 13, 52, 96, 73, 99, 86, 7
    19, 48, 71, 13, 52, 96, 73, 86, 99, 7
    19, 48, 71, 13, 52, 96, 73, 86, 7, 99
    19, 48, 13, 71, 52, 96, 73, 86, 7, 99
    19, 48, 13, 52, 71, 96, 73, 86, 7, 99
    19, 48, 13, 52, 71, 73, 96, 86, 7, 99
    19, 48, 13, 52, 71, 73, 86, 96, 7, 99
    19, 48, 13, 52, 71, 73, 86, 7, 96, 99
    19, 13, 48, 52, 71, 73, 86, 7, 96, 99
    19, 13, 48, 52, 71, 73, 7, 86, 96, 99
    13, 19, 48, 52, 71, 73, 7, 86, 96, 99
    13, 19, 48, 52, 71, 7, 73, 86, 96, 99
    13, 19, 48, 52, 7, 71, 73, 86, 96, 99
    13, 19, 48, 7, 52, 71, 73, 86, 96, 99
    13, 19, 7, 48, 52, 71, 73, 86, 96, 99
    13, 7, 19, 48, 52, 71, 73, 86, 96, 99
    7, 13, 19, 48, 52, 71, 73, 86, 96, 99

    7, 13, 19, 48, 52, 71, 73, 86, 96, 99
    $ 
    ```
    - Insertion sort:
    ```
    $ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
    $ ./insertion
    19, 48, 99, 71, 13, 52, 96, 73, 86, 7

    19, 48, 71, 99, 13, 52, 96, 73, 86, 7
    19, 48, 71, 13, 99, 52, 96, 73, 86, 7
    19, 48, 13, 71, 99, 52, 96, 73, 86, 7
    19, 13, 48, 71, 99, 52, 96, 73, 86, 7
    13, 19, 48, 71, 99, 52, 96, 73, 86, 7
    13, 19, 48, 71, 52, 99, 96, 73, 86, 7
    13, 19, 48, 52, 71, 99, 96, 73, 86, 7
    13, 19, 48, 52, 71, 96, 99, 73, 86, 7
    13, 19, 48, 52, 71, 96, 73, 99, 86, 7
    13, 19, 48, 52, 71, 73, 96, 99, 86, 7
    13, 19, 48, 52, 71, 73, 96, 86, 99, 7
    13, 19, 48, 52, 71, 73, 86, 96, 99, 7
    13, 19, 48, 52, 71, 73, 86, 96, 7, 99
    13, 19, 48, 52, 71, 73, 86, 7, 96, 99
    13, 19, 48, 52, 71, 73, 7, 86, 96, 99
    13, 19, 48, 52, 71, 7, 73, 86, 96, 99
    13, 19, 48, 52, 7, 71, 73, 86, 96, 99
    13, 19, 48, 7, 52, 71, 73, 86, 96, 99
    13, 19, 7, 48, 52, 71, 73, 86, 96, 99
    13, 7, 19, 48, 52, 71, 73, 86, 96, 99
    7, 13, 19, 48, 52, 71, 73, 86, 96, 99

    7, 13, 19, 48, 52, 71, 73, 86, 96, 99
    $
    ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->

## 💻 Getting Started <a name="getting-started"></a>

### Prerequisites

To get started with this project, you need to have the following installed on your system:

- GCC compiler
- Git

<!--
Example command:

```sh
 gem install rails
```
 -->

### Setup

Clone this repository to your local machine using the following command:
```git clone https://github.com/NebiyouBelaineh/sorting_algorithms.git```

#### Data Structure
- The following doubly linked list is used in the project:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

<!--
Example commands:

```sh
  cd my-folder
  git clone git@github.com:myaccount/my-project.git
```
--->
<!-- 
### Install

Install this project with: -->

<!--
Example command:

```sh
  cd my-project
  gem install
```
--->

### Usage

To run the project, execute the following command:

1. Navigate to the executables direcotry of the project.
2. You can run the executables as `./heap` for heap sort.
3. If you would like to change the data, you can go to the the `main.c` functions in the `test_functions/` directory. All main functions contain an array of unsorted numbers. You can change the numbers in the array to sort an array of numbers you desire.
3. Move the main function you would like to test to the root directory and compile the source code using the following command:
```gcc -Wall -Werror -Wextra -pedantic *.c -o sort```. The corresponding `main.c` file for the sorting algorithm is listed in the [Key Featuers](#key-features) section.
4. Run the executable using the following command: ```./sort```
5. You will need to remove the `main.c` file for testing a different sorting algorithm.

<!--
Example command:

```sh
  rails server
```
--->

<!-- ### Run tests

To run tests, run the following command: -->

<!--
Example command:

```sh
  bin/rails test test/models/article_test.rb
```
--->

<!-- ### Deployment

You can deploy this project using: -->

<!--
Example:

```sh

```
 -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- AUTHORS -->

## 👥 Authors <a name="authors"></a>

<!-- > Mention all of the collaborators of this project. -->
👤 [NebiyouBelaineh](https://github.com/NebiyouBelaineh)

- GitHub: [@NebiyouBelaineh](https://github.com/NebiyouBelaineh/)
- Twitter: [@SeifuNebiyou](https://twitter.com/SeifuNebiyou/)
- LinkedIn: [Nebiyou Belaineh](https://www.linkedin.com/in/nebiyou-belaineh-2a683415b/)

<!-- 👤 **Author2**


- GitHub: [@githubhandle](https://github.com/githubhandle)
- Twitter: [@twitterhandle](https://twitter.com/twitterhandle)
- LinkedIn: [LinkedIn](https://linkedin.com/in/linkedinhandle) -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- FUTURE FEATURES -->

## 🔭 Future Features <a name="future-features"></a>

> The following sorting algorithms will be added to the project.

- [Bucket-Sort](https://en.wikipedia.org/wiki/Bucket_sort/)
- [TimSort:](https://en.wikipedia.org/wiki/Timsort/)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTRIBUTING -->

## 🫱🏾‍🫲🏽 Contributing <a name="contributing"></a>

Contributions, issues, and feature requests are welcome!

Feel free to check reach out.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- SUPPORT -->

## ⭐️ Show your support <a name="support"></a>

If you like this project, kindly star this repository for support 🙏🏽

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- ACKNOWLEDGEMENTS -->

## 🙏🏽 Acknowledgments <a name="acknowledgements"></a>

I would like to thank ALX-Africa Software Engineering Program.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- FAQ (optional) -->

<!-- ## ❓ FAQ (OPTIONAL) <a name="faq"></a>

> Add at least 2 questions new developers would ask when they decide to use your project.

- **[Question_1]**

  - [Answer_1]

- **[Question_2]**

  - [Answer_2] -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- LICENSE -->

## 📝 License <a name="license"></a>

This project is [MIT](./MIT.md) licensed.

<p align="right">(<a href="#readme-top">back to top</a>)</p>
