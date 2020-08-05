#this is a comment
#no multiline comments


#running a do command:
#do <command> [-arg]


                                                           
#args can be like toggle or specific value eg. do <command> -D<VAR_NAME>=VALUE

VALUE="TEST"

-message(msg):
    

#spcify command: 
-init:
    message "Hello World"
    git clone https::.../
    mkdir ${VALUE}

-clean



-build:
    message "Hello World"
    -mac:
        clang main.c
    -lin:
        gcc main.c
    -:
        clean



