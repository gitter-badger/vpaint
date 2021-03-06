#  ABOUT VPAINT

- Contact: Boris Dalstein <dalboris@gmail.com>
- Website: http://www.vpaint.org

VPaint is an experimental vector graphics editor based on the
Vector Animation Complex technology. It allows you to create
resolution-independent illustrations and animations using 
innovative techniques.

# KNOWN ISSUES

## General

- VPaint 1.5 is considered a BETA version. It may crash unexpectedly, so it is recommended to save often. The most unstable features or still in development are marked with the text [Beta] in the menus.

## Mac OS X

- On Mac OS X 10.10 Yosemite and above, maximizing the window is poorly supported. If you want to exit maximizing, hide the toolbar and action bar with "View > Toolbar" and "View > Action Bar" so you can access the minimize button again.

- If you have a retina display, then the pointer drawn by VPaint is not at the same location as your mouse cursor. It doesn't prevent using VPaint but it is quite inconvenient. See [#22](https://github.com/dalboris/vpaint/issues/22) for details.

#  LICENSE

VPaint is licensed under the MIT License. It depends on third-party libraries licensed under different license terms (primarily, LGPL, MPL, and BSD; see COPYING for details), but they are all compatible with the MIT. 

This means that you are free to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of VPaint, either for non-commercial or commercial purposes. Whether you are an individual or a company, you should be able to use the code (and binaries) of VPaint for free, in whatever way you like, without any requirements on your part. 

If you are interested to know why I have chosen the MIT and not the GPL, I explain it [here](https://github.com/dalboris/vpaint/wiki/Why-the-MIT-license%3F).

# HOW TO CONTRIBUTE

The easiest way, and arguably the most helpful way to contribute is simply to spread the word about VPaint! Share it on Facebook, tweet about it, or write a blog post about it. Also, the documentation is still very limited, so if you figure out by yourself how to use a feature which is poorly documented, a good way to contribute is to document it [here](https://github.com/dalboris/vpaint/wiki/Documentation).

If you are a developer and want to contribute code, this is great! I'd be happy to collaborate with you. Though, there is one requirement you must comply with:

I will only merge pull requests of code that you license under the MIT. This means that for each source file that you modify or create, you *must add your copyright line* ("Copyright (C) Year Firstname Lastname \<optional@email.com\>") just *after existing copyright lines if any*, and just *before the MIT license notice*. If you don't do that, I am legally not allowed to use your contribution, nor anyone that wants to use the code of VPaint. There are a few other legal ways to achieve the same results (contributor license agreements, copyright assignments, dedication to the public domain, etc.), but this one is by far the simplest so let's not overcomplicate things.

A few guidelines for effective contributions of code:

1. Please do not contribute code refactoring, this is counterproductive and I won't merge it. The code of VPaint does require refactoring, but now is not a good time. I will do it myself, in a year or two, overriding whatever you would have done anyway.

2. If you want to implement a new feature, please discuss it first (by opening a new feature request or replying to an existing one) before you start implementing. This makes sure that we are on the same page, improves the design of the feature by brainstorming it together, and make sure that you do not lost time implementing something which I do not agree with and would reject. Discussing features with me before implementing them ensures that VPaint follows a consistent direction, and do not become an unintuitive mess of unconsistent features. 

3. If you want to fix a bug, feel free to go ahead without prior approval and submit a pull request. I might suggest a few modifications or ask clarifications before merging, but be confident that I will merge if it does fix a bug.


# HOW TO COMPILE

## Linux

(tested on Kubuntu 15.04 64bit)

1. Install GCC 4.8 or higher. On Ubuntu, you can do this with:
     sudo apt-get install build-essential
2. Install GLU for development. On Ubuntu, you can do this with:
     sudo apt-get install libglu1-mesa-dev
3. Download and install Qt 5.4 Community from http://www.qt.io/
4. Open VPaint.pro with Qt Creator
5. Specify GCC 4.8+ as your compiler
6. Build > Run


## Mac OS X

(tested on Mac OS X Yosemite 10.10.4, running on a MacBook Pro 15-inch Early 2008)

- Note 1: VPaint will -NOT- compile with clang or GCC 4.2 (provided by default on Mac OS X).

- Note 2: There are bugs in Qt 5.1 to 5.4 with Yosemite, hence Qt 5.5+ is recommended.

1. Install XCode
2. Install GCC 4.8 via homebrew, following these instructions:
     http://www-scf.usc.edu/~csci104/20142/installation/gccmac.html
3. Download and install Qt 5.5 Community from http://www.qt.io/
4. Create a new Qt mkspec for GCC 4.8 following these instructions:
    a. Go to the folder /Users/<username>/Qt/5.5/clang_64/mkspecs
    b. Duplicate the folder macx-g++42 and rename the copy macx-g++48
    c. In the folder macx-g++48, edit the file qmake.conf by setting these two values:
        QMAKE_CC  = gcc-4.8
        QMAKE_CXX = g++-4.8
5. Open Qt Creator
6. Go to Qt Creator > Preferences > Build and Run > Compiler > Add > GCC
    Name: G++ 4.8
    Compiler path: /usr/local/bin/g++-4.8
7. Go to Qt Creator > Preferences > Build and Run > Kit > Add
    Name: Desktop Qt 5.5.0 G++ 4.8
    Compiler: G++ 4.8
    Qt mkspec: macx-g++48
8. Open VPaint.pro
9. Build > Run


## Windows

(tested on Windows 7 64bit)

- Note 1: In order to support more users, it is recommended to compile as 32bit code, as
          the resultant executables can run on both 32bit and 64bit versions of Windows.

- Note 2: Windows XP and lower are not supported.

- Note 3: VPaint will -NOT- compile with MinGW 4.8 (either 32bit and 64bit)
        or Visual Studio 2010 or lower.

1. Make sure that Visual Studio 2012 or higher is installed on your system
2. Download and install Qt 5.4 Community from http://www.qt.io/.  Make
   sure to use the OpenGL version (not ANGLE), and that it corresponds to
   the version of Visual Studio you have.
3. Open VPaint.pro with Qt Creator
4. Specify MSVC as your compiler
5. Build > Run
