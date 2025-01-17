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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       driver
//  action 1:   the driver slows down
driver.slowDown();
//  action 2:   the driver drives
driver.drive();
//  action 3:   the driver stops
driver.stop();


//  2)
//  Noun:       robot
//  action 1:   the robot moves
robot.move();
//  action 2:   the robot talks
robot.talk();
//  action 3:   the robot rotates
robot.rotate();


//  3)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog eats
dog.eat();
//  action 3:   the dog sleeps
dog.sleep();


//  4)
//  Noun:       movie
//  action 1:   the movie begins
movie.begin();
//  action 2:   the movie ends
movie.end();
//  action 3:   the movie pauses
movie.pause();


//  5)          
//  Noun:       boat
//  action 1:   the boat spins
boat.spin();
//  action 2:   the boat sails
boat.sail();
//  action 3:   the boat sinks
boat.sink();


//  6)
//  Noun:       hand
//  action 1:   the hand touches
hand.touch();
//  action 2:   the hand shakes
hand.shake();
//  action 3:   the hand rotates
hand.rotate();


//  7)
//  Noun:       phone
//  action 1:   the phone rings
phone.ring();
//  action 2:   the phone dials
phone.dial();
//  action 3:   the phoe falls
phone.fall();


//  8)
//  Noun:       washing machine
//  action 1:   the washing machine pauses
washingMachine.pause();
//  action 2:   the washing machine stops
washingMachine.stop();
//  action 3:   the washing machine starts centrifuge program
washingMachine.startCentrifuge();


//  9)
//  Noun:       printer
//  action 1:   the printer prints 
printer.print();
//  action 2:   the printer shuts down
printer.shutDown();
//  action 3:   the printer restarts
printer.restart();


//  10)
//  Noun:       program
//  action 1:   the program crashes
program.crash();
//  action 2:   the program runs
program.run();
//  action 3:   the program reloads
program.reload();



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
