Windows Installation
---------------------

Installing g++ from msys2.org
------------------------------

1. Download the installer: msys2-x86_64-20220128.exe

2. Run the installer. MSYS2 requires 64 bit Windows 7 or newer.

3. Enter your desired Installation Folder 

4. When done, tick Run MSYS2 now.

5. Update the package database and base packages. Unless your setup file is very recent, it will take two steps. 

First run pacman -Syu

	$ pacman -Syu
	:: Synchronizing package databases...
	 mingw32                        805.0 KiB
	 mingw32.sig                    438.0   B
	 mingw64                        807.9 KiB
	 mingw64.sig                    438.0   B
	 msys                           289.3 KiB
	 msys.sig                       438.0   B
	:: Starting core system upgrade...
	warning: terminate other MSYS2 programs before proceeding
	resolving dependencies...
	looking for conflicting packages...

	Packages (6) bash-5.1.004-1  filesystem-2021.01-1
	             mintty-1~3.4.4-1  msys2-runtime-3.1.7-4
	             pacman-5.2.2-9  pacman-mirrors-20201208-1

	Total Download Size:   11.05 MiB
	Total Installed Size:  53.92 MiB
	Net Upgrade Size:      -1.24 MiB

	:: Proceed with installation? [Y/n]
	:: Retrieving packages...
	 bash-5.1.004-1-x86_64            2.3 MiB
	 filesystem-2021.01-1-any        33.2 KiB
	 mintty-1~3.4.4-1-x86_64        767.2 KiB
	 msys2-runtime-3.1.7-4-x86_64     2.6 MiB
	 pacman-mirrors-20201208-1-any    3.8 KiB
	 pacman-5.2.2-9-x86_64            5.4 MiB
	(6/6) checking keys in keyring       100%
	(6/6) checking package integrity     100%
	(6/6) loading package files          100%
	(6/6) checking for file conflicts    100%
	(6/6) checking available disk space  100%
	:: Processing package changes...
	(1/6) upgrading bash                 100%
	(2/6) upgrading filesystem           100%
	(3/6) upgrading mintty               100%
	(4/6) upgrading msys2-runtime        100%
	(5/6) upgrading pacman-mirrors       100%
	(6/6) upgrading pacman               100%
	:: To complete this update all MSYS2 processes including this terminal will be closed. Confirm to proceed [Y/n]

6. Run "MSYS2 MSYS" from Start menu. Update the rest of the base packages by running pacman -Su

	$ pacman -Su
	:: Starting core system upgrade...
	 there is nothing to do
	:: Starting full system upgrade...
	resolving dependencies...
	looking for conflicting packages...

	Packages (20) base-2020.12-1  bsdtar-3.5.0-1
	              [... more packages listed ...]

	Total Download Size:   12.82 MiB
	Total Installed Size:  44.25 MiB
	Net Upgrade Size:       3.01 MiB

	:: Proceed with installation? [Y/n]
	[... downloading and installation continues ...]

7. Run $ pacman -S --needed base-devel mingw-w64-x86_64-toolchain
to install some tools and the mingw-w64 GCC to start compiling

	$ pacman -S --needed base-devel mingw-w64-x86_64-toolchain
	warning: file-5.39-2 is up to date -- skipping
	[... more warnings ...]
	:: There are 48 members in group base-devel:
	:: Repository msys
	   1) asciidoc  2) autoconf  3) autoconf2.13  4) autogen
	   [... more packages listed ...]

	Enter a selection (default=all):
	:: There are 19 members in group mingw-w64-x86_64-toolchain:
	:: Repository mingw64
	   1) mingw-w64-x86_64-binutils  2) mingw-w64-x86_64-crt-git
	   [... more packages listed ...]

	Enter a selection (default=all):
	resolving dependencies...
	looking for conflicting packages...

	Packages (123) docbook-xml-4.5-2  docbook-xsl-1.79.2-1
	               [... more packages listed ...]
	               m4-1.4.18-2  make-4.3-1  man-db-2.9.3-1
	               mingw-w64-x86_64-binutils-2.35.1-3
	               mingw-w64-x86_64-crt-git-9.0.0.6090.ad98746a-1
	               mingw-w64-x86_64-gcc-10.2.0-6
	               mingw-w64-x86_64-gcc-ada-10.2.0-6
	               mingw-w64-x86_64-gcc-fortran-10.2.0-6
	               mingw-w64-x86_64-gcc-libgfortran-10.2.0-6
	               mingw-w64-x86_64-gcc-libs-10.2.0-6
	               mingw-w64-x86_64-gcc-objc-10.2.0-6
	               mingw-w64-x86_64-gdb-10.1-2
	               mingw-w64-x86_64-gdb-multiarch-10.1-2
	              [... more packages listed ...]

	Total Download Size:    196.15 MiB
	Total Installed Size:  1254.96 MiB

	:: Proceed with installation? [Y/n]
	[... downloading and installation continues ...]
