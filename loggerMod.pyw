import sys


def decode():
	log=open("logs.txt","a")
	maps=open("mappings.txt","a")
	out=open("outout.txt","a")
	list1=log.readlines()
	list2=maps.readlines()