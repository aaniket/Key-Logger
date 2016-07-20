import sys
#Read write mode is a I guess
def check(stroke):
	mp=open("mappings.txt","r")		#From mappings to keys
	fanswer=""
	content=mp.readline()
	while(len(content)!=0):
		value=""
		answer=""
		for i in range(7,len(content)):
			if content[i]>='0' and content[i]<='9':
				value+=content[i]
			elif content[i]!=' ' and content[i]!='=':
				answer+=content[i]

		if value==stroke:
			fanswer+=answer
			mp.close()
			return fanswer
		content=mp.readline()
	return fanswer
	mp.close()

def decode():
	#Still showkey is ran from outside try running it from within the code
	fp=open("log.txt","r")			#Read from showkey output
	op=open("output.txt","w")		#Output log
	output=""
	
	content=fp.readline()
	while len(content) !=0 :
		fanswer=""
		stroke=""
		for i in content:
			if i>='0' and i<='9':
				stroke+=i
		res=""
		res=check(stroke)
		print("Stroke-->"+stroke)
		fanswer+=res
		print("Key-->"+fanswer)
		content=fp.readline()
		content=fp.readline()
		op.write(fanswer)
	fp.close()
	op.close()

decode()