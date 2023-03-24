def Set_Bit(var,bit):
	var = var | (1<<bit)
	return var

def Clr_Bit(var,bit):
	var = var & ~(1<<bit)
	return var
	
def Toggle_Bit(var,bit):
	var = var ^ (1<<bit)
	return var

def Get_Bit(var,bit):
	var = var & (1<<bit)
	return var
