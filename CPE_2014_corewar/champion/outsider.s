.name           "king of kk"
.comment        "beware of the outsider"

start:
	        sti          r1, %:loop, %1
		ld           %0, r5
		live         %42
		fork	%:loop
		fork	%:start

loop:
	        live            %42
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
		st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3 ,300
		 live            %42
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
		 live            %426584
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        st                      r3, 300
	        zjmp            %:loop
