#ifndef __S5P4418_REG_SYS_H__
#define __S5P4418_REG_SYS_H__

#define S5P4418_SYS_CLKMODEREG0			(0xC0010000 + 0x0000)
#define S5P4418_SYS_CLKMODEREG1			(0xC0010000 + 0x0004)

#define S5P4418_SYS_PLLSETREG0			(0xC0010000 + 0x0008)
#define S5P4418_SYS_PLLSETREG1			(0xC0010000 + 0x000C)
#define S5P4418_SYS_PLLSETREG2			(0xC0010000 + 0x0010)
#define S5P4418_SYS_PLLSETREG3			(0xC0010000 + 0x0014)

#define S5P4418_SYS_CLKDIVREG0			(0xC0010000 + 0x0020)
#define S5P4418_SYS_CLKDIVREG1			(0xC0010000 + 0x0024)
#define S5P4418_SYS_CLKDIVREG2			(0xC0010000 + 0x0028)
#define S5P4418_SYS_CLKDIVREG3			(0xC0010000 + 0x002C)
#define S5P4418_SYS_CLKDIVREG4			(0xC0010000 + 0x0030)

#define S5P4418_SYS_PLLSETREG0_SSCG		(0xC0010000 + 0x0048)
#define S5P4418_SYS_PLLSETREG1_SSCG		(0xC0010000 + 0x004C)
#define S5P4418_SYS_PLLSETREG2_SSCG		(0xC0010000 + 0x0050)
#define S5P4418_SYS_PLLSETREG3_SSCG		(0xC0010000 + 0x0054)

#define S5P4418_SYS_GPIOWAKEUPPRISEENB	(0xC0010000 + 0x0200)
#define S5P4418_SYS_GPIOWAKEUPFALLENB	(0xC0010000 + 0x0204)
#define S5P4418_SYS_GPIORSTENB			(0xC0010000 + 0x0208)
#define S5P4418_SYS_GPIOWKENB			(0xC0010000 + 0x020C)
#define S5P4418_SYS_GPIOINTENB			(0xC0010000 + 0x0210)
#define S5P4418_SYS_GPIOINTPEND			(0xC0010000 + 0x0214)

#define S5P4418_SYS_RESETSTATUS			(0xC0010000 + 0x0218)
#define S5P4418_SYS_INTENABLE			(0xC0010000 + 0x021C)
#define S5P4418_SYS_INTPEND				(0xC0010000 + 0x0220)
#define S5P4418_SYS_PWRCONT				(0xC0010000 + 0x0224)
#define S5P4418_SYS_PWRMODE				(0xC0010000 + 0x0228)
#define S5P4418_SYS_RSTCONFIG			(0xC0010000 + 0x023C)

#endif /* __S5P4418_REG_WDG_H__ */
