#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Ball
//  action 1:  the ball moves
ball.moves();
//  action 2: the ball breaks a window
ball.breaksWindow();
//  action 3: the ball enters goal
ball.entersGoal();

//  2) 
//  Noun:  carpenter
//  action 1: the carpenter fix a table
carpenter.fixTable();
//  action 2: the carpenter sets glue
carpenter.setsGlue();
//  action 3: the carpenter put nails
carpenter.putNails();

//  3) 
//  Noun: plugin
//  action 1:  the plugin changes key
plugin.setKey();
//  action 2: the plugin changes tempo
plugin.setTempo();
//  action 3: the plugin changes rhythm
plugin.setRhythm();

//  4)
//  Noun:  TemperatureSensor
//  action 1:  the Temp sensors gets a voltage
tempSensor.getsVoltage();
//  action 2: the Temp sensors reads Temp
tempSensor.readsTemperature();
//  action 3: the temp sensors sends temp
tempSensor.sendsTemp();

//  5)
//  Noun:  Console
//  action 1:  console mix instrument
console.mixInstrument();
//  action 2: console set Volum
console.setVolume();
//  action 3: console set effect
console.setEffect();

//  6)     
//  Noun:   Engineer
//  action 1:  engineer writes a program
engineer.writesProgram();
//  action 2:  engineer deletes a Program
engineer.deletesProgram();
//  action 3: engineer fix code
engineer.fixCode();


//  7)
//  Noun:   rhythm
//  action 1:  rhythm set pattern
rhythm.setPattern();
//  action 2:  rhythm set tempo
rhythm.setTempo():
//  action 3: rhythm set mode
rhythm.setMode();

//  8)
//  Noun:  guitar
//  action 1:  guitat plays riff
guitar.playRiff();
//  action 2:  guitar set armony
guitar.armonize();
//  action 3: guitar set rhythm
guitar.setRhythm():
 
//  9)
//  Noun:   student
//  action 1:  student does howework
student.doesHomework();
//  action 2: student submit homework
student.submitHomework();
//  action 3: student pay fees
student.payFees();

//  10)
//  Noun:  teacher
//  action 1: teacher shares knowledge
teacher.shareKnowledge();
//  action 2: teacher set deadlines
teacher.setDeadLines();
//  action 3:  teacher evaluate assignments
teacher.evaluateAssignments();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
