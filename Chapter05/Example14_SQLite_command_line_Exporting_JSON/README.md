# Embedded Systems Programming with C++

This is part of the code [repository](https://github.com/PacktPublishing/Embedded-Systems-Programming-with-Cxx) for<br>
**Embedded Systems Programming with C++** by [Packt Publishing](https://www.packtpub.com/)<br>
**Learning from scratch to configure, develop, test and monitor.**

Files related to **Example14** (Exporting SQLite database to JSON through command line)
<br>From **Chapter05** (Manipulating data in a C++ embedded system).

## Files

* `example_input.db`: SQLite input file
* `step01_install_software.sh`: Script to install required software
* `step02_generate_json.sh.`: Script generate a JSON from Device table
* `step03_generate_json_pretty.sh.`: Script generate a formatted JSON from Device table
* `step04_generate_full_json.sh`: Script generate a JSON from all tables
* `step05_generate_full_json_pretty.sh`: Script generate a formatted JSON from all tables
* `.gitignore`: List of files and folders that should be ignored by Git
* `LICENSE`: License file

## Instructions

1. Run `source step01_install_software.sh` to install the required software
2. Run `source step02_generate_json.sh.` to verify if the database is ok
3. Run `source step03_generate_json_pretty.sh.` to list database tables
4. Run `source step04_generate_full_json.sh` to show database schema
5. Run `source step05_generate_full_json_pretty.sh` to show database tables and its contents

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Generate a different SQLite database with the `Example09` and replace the `example_input.db`, then run the scripts again.

Check the software versions in your system by running: `sqlite3 --version`.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
