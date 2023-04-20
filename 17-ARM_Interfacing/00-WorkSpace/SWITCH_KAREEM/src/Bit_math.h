/*
 * Bit_math.h
 *
 *  Created on: 18 Feb 2023
 *      Author: HP
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(REG,Bit_NO)     (REG) |= (1<<(Bit_NO))
#define CLR_BIT(REG,Bit_NO)     (REG) &= ~(1<<(Bit_NO))
#define TGL_BIT(REG,Bit_NO)     (REG) ^= (1<<Bit_NO)
#define GET_BIT(REG,Bit_NO)     (REG >> Bit_NO) & 0x01



#define SET_HIGH_NIB(Reg)     Reg|(-1<<(8*sizeof(Reg)/2))
#define CLR_HIGH_NIB(Reg)     Reg&(~(-1<<(8*sizeof(Reg)/2)))
#define GET_HIGH_NIB(Reg)     Reg&(-1<<(8*sizeof(Reg)/2)))>>(8*sizeof(Reg)/2)
#define TGL_HIGH_NIB(Reg)     Reg^(-1<<(8*sizeof(Reg)/2))



#define SET_LOW_NIB(Reg)      Reg|(~(-1<<(8*sizeof(Reg)/2)))
#define CLR_LOW_NIB(Reg)      Reg&(-1<<(8*sizeof(Reg)/2))
#define GET_LOW_NIB(Reg)      Reg&(~(-1<<(8*sizeof(Reg)/2)))
#define TGL_LOW_NIB(Reg)      Reg^(~(-1<<(8*sizeof(Reg)/2)))

#define ASSIGN_REG (Reg,Value)         (Reg&0)| Value
#define ASSIGN_HIGH_NIB (Reg,Value)    (Reg&0)| (Value<<(8*sizeof(Reg)/2))



#define RSHFT_REG(REG,NO)       ((REG)>>(NO))
#define LSHFT_REG(REG,NO)       ((REG)<<(NO))

#define CRSHFT_REG(REG,NO)      (REG) = (REG >> NO) | (REG << (8*sizeof(REG) - NO))
#define CLSHFT_REG(REG,NO)      (REG) = (REG << NO) | (REG >> (8*sizeof(REG) - NO))


#endif /* BIT_MATH_H_ */
