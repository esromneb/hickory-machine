#Docker
installed on mac using version Version 17.06.2-ce-mac27


http://inform-fiction.org/inform63/index.html


http://ifwiki.org/index.php/Combat_(Inform_6_example)

http://ifwiki.org/index.php/Elevator_and_stairs_(Inform_6_example)

example from: http://www.instructables.com/id/How-to-create-an-Interactive-Fiction-Game-like-Zor/



# examples
# best one by far
http://www.firthworks.com/roger/informfaq/dd.html

http://ifwiki.org/index.php/Category:Inform_6_tutorials

http://www.ifwiki.org/index.php/Attributes_in_Inform_6

http://www.firthworks.com/roger/informfaq/ww.html
http://www.firthworks.com/roger/informfaq/ll.html
http://www.firthworks.com/roger/informfaq/oo.html
http://www.firthworks.com/roger/informfaq/ii.html


# Docker on mac notes:

Docker will wipe any changes on shutdown ALWAYS, so you need to save after apt-get installing tools etc


   docker ps
   docker commit 6ca78ac yourname:commitname


Day to day launch:
    docker run -it -v ~/hickory-machine:/hickory ben:compilerin bash




To see images

   docker images


To start a basic ubuntu

To start your last save
   docker run -it yourname:commitname bash

