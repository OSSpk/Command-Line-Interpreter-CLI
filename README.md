# 🔲 Command Line Interpreter - CLI

<a href="https://github.com/harismuneer"><img alt="views" title="Github views" src="https://komarev.com/ghpvc/?username=harismuneer&style=flat-square" width="125"/></a>
[![Open Source Love svg1](https://badges.frapsoft.com/os/v1/open-source.svg?v=103)](#)
[![GitHub Forks](https://img.shields.io/github/forks/harismuneer/Command-Line-Interpreter-CLI.svg?style=social&label=Fork&maxAge=2592000)](https://www.github.com/harismuneer/Command-Line-Interpreter-CLI/fork)
[![GitHub Issues](https://img.shields.io/github/issues/harismuneer/Command-Line-Interpreter-CLI.svg?style=flat&label=Issues&maxAge=2592000)](https://www.github.com/harismuneer/Command-Line-Interpreter-CLI/issues)
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat&label=Contributions&colorA=red&colorB=black	)](#)


A Command Line Interpreter made in C++ which supports commands like quit, remove, rename, rmdir, echo, out, zip, unzip.

## Problem Statement

Making our own Command Line Interpreter
In this problem you have to develop a small-scale command line interpreter. Your CLI should support the following commands:

1. **quit**: Exit your CLI

2. **remove file_name**:  removes the given file name. (Hint: Use remove C/C++’s built-in function  remove() ).

3. **rename old_name new_name**: rename the given file/folder. (Hint: Use C/C++’s built-in function rename() ).

4. **rmdir directory_name**: remove directory.  Assume that the directory is always empty. You do not have to handle the deletion of a directory that is not empty.

5. **echo “data” optional_file_name**: Whatever data is given in the quotation marks is written to the given file. If the file name is not given, the data in string is simply printed on the screen.

6. **out -l file_name_1 file_name2 file_name_3**: The contents of given files are printed one by one on the screen. When the contents of one file are printed, user is asked to press some key to continue. User must enter at least 1 file name. (If the user has specified -l, then the file contents are printed line by line, and the user is asked to press some key to continue after each line.)

7. **zip destination file_name**: zips the given file/folder. (Hint: Use system() function. system(“tar cvf “+ destination+”  “+ file_name) ).

8. **unzip file_name**: unzips the given  zipped file. Use system() in this case, too.

You can only use system() in zip/unzip command. You must not use it for any other command.

## How to Run

Download the Code folder and using Ubuntu Bash or Windows or Linux Terminal, change current working directory to the Code folder.
Then on the terminal, type

```
./cli.out
```


<hr>


## Author
You can get in touch with me on my LinkedIn Profile: [![LinkedIn Link](https://img.shields.io/badge/Connect-harismuneer-blue.svg?logo=linkedin&longCache=true&style=social&label=Follow)](https://www.linkedin.com/in/harismuneer)

You can also follow my GitHub Profile to stay updated about my latest projects: [![GitHub Follow](https://img.shields.io/badge/Connect-harismuneer-blue.svg?logo=Github&longCache=true&style=social&label=Follow)](https://github.com/harismuneer)

If you liked the repo then kindly support it by giving it a star ⭐ and share in your circles so more people can benefit from the effort.

## Contributions Welcome
[![GitHub Issues](https://img.shields.io/github/issues/harismuneer/Command-Line-Interpreter-CLI.svg?style=flat&label=Issues&maxAge=2592000)](https://www.github.com/harismuneer/Command-Line-Interpreter-CLI/issues)

If you find any bugs, have suggestions, or face issues:

- Open an Issue in the Issues Tab to discuss them.
- Submit a Pull Request to propose fixes or improvements.
- Review Pull Requests from other contributors to help maintain the project's quality and progress.

This project thrives on community collaboration! Members are encouraged to take the initiative, support one another, and actively engage in all aspects of the project. Whether it’s debugging, fixing issues, or brainstorming new ideas, your contributions are what keep this project moving forward.

With modern AI tools like ChatGPT, solving challenges and contributing effectively is easier than ever. Let’s work together to make this project the best it can be! 🚀

## License
[![MIT](https://img.shields.io/cocoapods/l/AFNetworking.svg?style=style&label=License&maxAge=2592000)](../master/LICENSE)

Copyright (c) 2018-present, harismuneer                                                        

<!-- PROFILE_INTRO_START -->
<!-- PROFILE_INTRO_END -->
