
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