flyingbirds
===========

Flying birds Simulation using uC++ and openGL

Before make, make sure you have uC++ installed as well as OpenGL

Installing uC++
===============

sudo cp u++6.0.0.sh /usr/local/bin

cd /usr/local/bin

sudo sh u++-6.0.0.sh 

Installing OpenGL
==================
sudo apt-get install freeglut3-dev

Done tasks
==================
- [ ] Drawing birds
	- [x] Triangle base 1.0 and 2.0 sides
	- [x] Not random direction
	- [ ] Travel max speed
	- [ ] Travel max force
	- [ ] Travel acceleration
 	- [ ] Weights
- [x] Bird class
- [x] Make world 640x640
- [ ] Separate, alineate and cohesionate birds.
- [ ] Apply forces
- [ ] Give a random position to 'em without srand() 
- [ ] Give a random direction to 'em between [0, 2*pi] without srand()

Compiling
==================
make run


