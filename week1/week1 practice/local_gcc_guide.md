see basically the cs50.dev online version is difficult to use and since i don't have a macos and i am working on windows i need to follow a system of rules to use the "make" command which are as follows 
1.Install msys from msys2.org , then fix oudated security keys by using the follwoing commands in the msys which you need to open once installed 
the commands are - A. pacman-key --init
                B. pacman-key --populate msys2
                C. pacman -Sy msys2-keyring --siglevel TrustAll
                D. pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain 
                after this last command press enter to select all packages when prompted, and type Y to confirm the download
                give these commands one by one and keep checking 
2.After this u need to setup your windows system by the following method Press the Windows Key, type env, and select "Edit the system environment variables".
                A.Click the Environment Variables... button at the bottom right.
                B.In the top section (User variables), highlight the variable named Path and click Edit....
                C.Click New on the right side and paste this exact folder location:
                D.C:\msys64\ucrt64\bin
                E.Click OK on all windows to save. Completely restart VS Code so the changes take effect
3.Then open the terminal navigate to the actual directory in my case used this command to change the directory
cd "Week1\week1 practice" 
The above steps will be enough if you do it once but this step has to be repeated each time by just replacing the file name from hello to something else as per your need 
gcc hello.c -o hello which will autoomatically create a exe file once it is created you can go to terminal and follow next steps , very very important ,use this command everytime for a new file just replace the file name as per need
.\hello will be enough and click enter for the output

THANKYOU 
AUTHOR KARTHIK(IITPATNA)
