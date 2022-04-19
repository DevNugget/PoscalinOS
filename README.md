# Poscalin
PoscalinOS is a passion project, I really wanted to try something different.  
The Operating System at the moment has no extremely useful features. At the moment, all it has got is a print function.  

# I Need Help
I am still very new to OS development, so any contributions or advice would mean a lot.  
If there is anything, my discord is `DevNugget#3221`, https://discord.gg/ZPbMDPQwt7  

# Building and Running the OS
Clone the git repository, and run the command `bash ./setup.sh`. This will install the needed applications. Please do check the file if you are concerned about what is installed.   
Then run the command `bash ./build.sh` to build the OS.  
Then run the command `qemu-system-i386 -kernel Posca/boot/kernel.bin` to boot into the OS using qemu, which should have been installed if you ran the setup file.
