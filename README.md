DigitalClock
============

###Simple Digital Clock Desktop Application.

How to start(need qt4 development environment)
----------------------------------------------
    $ cd DigitalClock
    $ qmake -project
    $ qmake
    $ make
    $ ./DigitalClock &

Howb to finish
--------------
    $ kill `ps x | grep "[Dd]igitalClock" | cut -d ' ' -f 2`