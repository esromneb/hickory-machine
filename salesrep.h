
Object Woman "Woman"
with name 'woman' 'sales' 'rep' 'friendly',
description "A Woman is standing behind the desk.  In order to speak with her, type the command:  say hello",
initial "The sales woman's friendly gaze lands at your arcsecond.",
found_in Lobby,
life [;

switch (noun) { 
'hi', 'hello' : "Welcome to Escape the Sandbox.  My name is Jennifer.  When you're ready to leave ask me for instructions";
'instructions', 'help' : "Jennifer explains the game to you:^You're currently using a text adventure video game to explore an escape room.^^

If you are having troubles understading how the interface works, remember that simply typing:^
north^
east^
south^
west^

will move you from room to room

";

'hi', 'hello' : "~Hello, stranger.~";
'door', 'exit', 'lock': "~Hmmm. I can help you to find the key.~";
'enigma' : print "~You solved the Riddle; Congratulations! The key is inside the golden Chest. Watch out, don't try to open the other one !~^"; EnigmaSolved = true; rtrue ;
'solution' : "You must find the answer by yourself."; 
default : print "No answer.^"; rtrue;
}

],
has animate static ;