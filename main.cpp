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
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog eats
dog.eat();
//  action 3:   the dog chases tail
dog.chasesTail();
//  2)
//  Noun:       tim
//  action 1:   tim frowns
tim.frown();
//  action 2:   tim shakes his head
tim.shakesHead();
//  action 3:   tim cries
tim.cry();
//  3)
//  Noun:       flower
//  action 1:   the flower grows
flower.grow();
//  action 2:   the flower wilts
flower.wilt();
//  action 3:   the flower starts to bloom
flower.startsToBloom();
//  4)
//  Noun:       car
//  action 1:   the car breaks down
car.breaksDown();
//  action 2:   the car leaks petrol
car.leaksPetrol();
//  action 3:   the car rusts
car.rust();
//  5)
//  Noun:       lion
//  action 1:   the lion roars
lion.roar();
//  action 2:   the lion stalks prey
lion.stalksPrey();
//  action 3:   the lion burps loudly
lion.burpsLoudly();
//  6)
//  Noun:       wizard
//  action 1:   the wizard waves his wand
wizard.wavesWand();
//  action 2:   the wizard casts a spell
wizard.castsSpell();
//  action 3:   the wizard curses the village
wizard.cursesVillage();
//  7)
//  Noun:       whale
//  action 1:   the whale buys crypto
whale.buysCrypto();
//  action 2:   the whale sells crypto
whale.sellCrypto();
//  action 3:   the whale crashes market
whale.crashesMarket();
//  8)
//  Noun:       atlantic ocean  
//  action 1:   the atlantic ocean rocks the boat
atlanticOcean.rocksBoat();
//  action 2:   the atlantic ocean creates waves
atlanticOcean.createsWaves();
//  action 3:   the atlantic ocean wrecks ships
atlanticOcean.wrecksShips();
//  9)
//  Noun:       driver
//  action 1:   the driver brakes hard
driver.brakesHard();
//  action 2:   the driver swerves left
driver.swervesLeft();
//  action 3:   the driver deploys ejector seat
driver.deploysEjectorSeat();
//  10)
//  Noun:       student
//  action 1:   the student reads a book
student.readsBook();
//  action 2:   the student writes an essay
student.writesEssay();
//  action 3:   the student gets a job 
student.getsJob();


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
