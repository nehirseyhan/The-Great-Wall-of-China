# The Great Wall of China
The wall is initially thin and China strengthens the parts where they get attack. Although, the Great Wall is
not linear, we will assume that it is in the form of a simple line. The defender uses the following strategy to
react to enemy tribes: whenever a part of the wall is attacked by an enemy of height ‘h’, the part of the wall
in that region thinner than ‘h’ is strengthen to the thickness ‘h’. <br />
Tribes attack to the wall frequently. We assume that each enemy army has a width ‘w’
and height ‘h’ and attacks to the wall on some interval which equals to its width. In order to breach, enemies
may continue to attack the wall in different places at different times by moving left or right with a constant
speed. Note that, since the wall is tall enough, enemies can’t damage the wall. However, after the attack,
every attacked fragment of the wall that was thinner than ‘h’ is strengthen to a thickness of ‘h’ in order to
repel possible future attacks to the same place. <br />
Each tribe moves left or right at some constant speed but can only attack in some predefined constant
time period. They attack the wall repeatedly with a fixed number of times. Assuming that initially the wall
has a thickness of 1 unit at all places, and given the full description of all the tribes that attack the wall, the
task is to determine the final state of the Great Wall after all tribe attacks are over. <br />
#### The simulation will get the following parameters;<br />
• r: the length of the wall, with 100 ≤ r ≤ 100000,<br />
• k: number of tribes, with 1 ≤ k ≤ 100,<br />
• w i : width of the i th tribe, with 1 ≤ w,<br />
• h : height of the i th tribe, with h ≤ 100, 1<br />
• t : the time of the first attack of the i th tribe, with 1 ≤ t ≤ 1000,<br />
• p : the position of the left most position for the first attack of the i th tribe, with p ≥ 0 (effected part
of the wall will be [p, p + w + 1],<br />
• s : the speed of the i th tribe, with |s| ≤ 1000 where negative values for going left and positive values
for going right,<br />
• a : attack interval of the i th tribe, with a ≥ 1,<br />
• n : number of attacks carried by the i th tribe, with 0 < n ≤ 100.<br />

The output should be a single line output of r + 1 integers separated by single spaces, indicating the
latest thickness values of the Great Wall from position 0 to position r. <br />

### Sample input: <br />
20 <br />
2 <br />
3 4 2 5 1 2 2 <br />
5 2 5 10 -1 3 3 <br />

### Sample output:<br />
1 1 1 1 2 4 4 4 4 4 2 2 2 2 2 1 1 1 1 1 1<br />

### Sample trace:<br />
The first tribe attacks twice at minutes 2 and 4. The first attack hits the wall on positions 5, 6, 7.
Then the tribe moves 2 units to the right in 2 time steps, with 1 unit/time step speed and makes its
second attack at positions 7, 8, 9. After these attacks, the thickness of the Great Wall is strengthen to 4
units at these attacked positions. The second tribe attacks three times at time steps 5, 8, and 11. The
first attack hits the interval [10,14]. The tribe moves left with speed -1 units/time step and the second
attack hits the interval [7,11]. The last attack hits the interval [4,8].
