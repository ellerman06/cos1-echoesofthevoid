# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## [COS119]

- **[ David Eller ]**
- **[ November 1, 2026]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ cls ]: Clear the Screen
- [ cd ]: Print the "Working Directory"
- [ dir ]: List files and folders
- [ dir /a]: List files and folders, including invisible files
- [ dir]: List all files and folders, in human readable form
- [ cd ]: Change directory
- [ cd \ ]: Change directory, go to root directory
- [ CMD ]: Change directory and go to user home directory
- [ cd. . ]: Change directory, go up one folder level
- [ cd. .\. . ]: Change directory, go up two folder levels
- [ cd %USERPROFILE% ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

When I typed "cd" followed by a space and then dragged the Version Control Folder into my Command Prompt, Windows automatically inserted the folder's full path.(Cool!) After pressing Enter key, the terminal changed to the Version Control File. 

## Topic: Version Control & Git

[Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later.]

**1. There are three types of version control.**

[The three types of Version Control are Local, Centralized, and Distributed, and they all work a bit differently. Local stores all file versions on one single computer. simple but does not support collaboration and can be lost if the computer fails. Centralized control uses a single central server that stores all files and version history. Although able to collaborate, if the server goes down, work may be interrupted.  While Distributed control gives every user a complete copy of the repository. Developers can work offline and create commits locally.  ]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [git clone repository-url]: Clone a repository
- [git config --global user.name "Your Name"]: Set up a global user name
- [ git config --global user.email "your@email.com" ]: Set-up a global email address (to match my GitHub account email)
- [ git status ]: Shows the current state of your directory and staging area
- [ git add . ]: Add modified files to the next commit
- [git commit -m "Commit Message"]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git help ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[To connect to GitHub using HTTPS, I copy the repository's HTTP URL from GitHub and use git clone repository-url in Terminal to create a local copy.  ]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  [The purpose of .gitignore file is to tell Git which files and folders should be ignored and not tracked in a repository. Commonly used to ignore temporary files, build flies, log files, system files, and sensitive information, such as configuration files containing passwords or API keys. (hence the name .gitignore)]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [.DS_Store is a macOS system file that stores folder display information, ignoring it in Git is important because it is not part of the project and can create unnecessary changes in the repo.]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [I would add .exe  because executable files are generated when a C++ program is compiled which are not apart of the source code but can be recreated at any time from the .cpp, .h files. This prevents unnecessary changes, and allows Git to focus on the code that developers need to be edit. ]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ Research Summary: What resource(s) did you find most helpful this past week and why?
Using the online class materials and additional websites, I learned how to use terminal commands, understanding the difference types of version control, and the basics of Git commands to manage code. I also learned a lot about the importance of .ignore. Copilot explains things very clearly and a couple of the external websites explained into further detail.   ]

**Terminal Commands**  
[Site Address](https://www.jactechknowledge-y.com/resource-guides/command-prompt-file-commands)

**Three Types of Version Control**  
[Site Address](https://about.gitlab.com/topics/version-control/)

**Git Commands**  
[Site Address](https://git-scm.com/cheat-sheet)

**Connecting to GitHub using Terminal**  
[Site Address]https://copilot.com/

**Using .gitignore and Why it's Important**  
[Site Address](https://www.reddit.com/r/git/comments/f4uacp/the_why_and_what_of_gitignore/)
