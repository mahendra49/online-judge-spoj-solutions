while True:
	try:
		qq=int(input())
		if qq==1:
			print("1")
		else:
			print(2*qq-2)
	except EOFError:
		break