
#LIST IN PYTHON

#1. Lists are ordered.
#2. Lists can contain any arbitrary objects.
#3. List elements can be accessed by index.
#4. Lists can be nested to arbitrary depth.
#5. Lists are mutable.
#6. Lists are dynamic


def main():
	
	No= int(input("Enter Number of Elements"))
	
	List = [] 
	
	for i in range(0,No):
		ele = input()
		
		List.append(ele)
		
	print(List)
	print(List[0:3])
	print(List[3:])


if __name__=="__main__":
	main()