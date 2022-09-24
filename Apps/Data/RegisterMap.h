/******************************************************************************/
/* ADAS1000 SPI �Ĵ�����ַӳ�� 					        					  */
/******************************************************************************/
#define	ADAS1000_NOP			0x00	/* ������ */
#define	ADAS1000_ECGCTL			0x01	/* ECG ���üĴ��� */
#define	ADAS1000_LOFFCTL		0x02	/* ����������ƼĴ���  */
#define	ADAS1000_RESPCTL		0x03	/* �������ƼĴ��� */
#define	ADAS1000_PACECTL		0x04	/* �𲫿��ƼĴ��� */
#define	ADAS1000_CMREFCTL		0x05	/* ��ģ���ο������ο��ƼĴ��� */
#define	ADAS1000_GPIOCTL		0x06	/* GPIO ���ƼĴ��� */
#define	ADAS1000_PACEAMPTH		0x07	/* �𲫷�����ֵ���ƼĴ��� */
#define	ADAS1000_TESTTONE		0x08	/* ���������� */
#define	ADAS1000_CALDAC			0x09	/* DACУ׼ */
#define	ADAS1000_FRMCTL			0x0A	/* ֡���ƼĴ��� */
#define	ADAS1000_FILTCTL		0x0B	/* �˲������ƼĴ��� */
#define	ADAS1000_LOFFUTH		0x0C	/* ��������������ֵ���� */
#define	ADAS1000_LOFFLTH		0x0D	/* ��������������ֵ���� */
#define	ADAS1000_PACEEDGETH		0x0E	/* �𲫱�����ֵ */
#define	ADAS1000_PACELVLTH		0x0F	/* �𲫵�ƽ��ֵ */
#define	ADAS1000_LADATA			0x11	/* LA����I���� */
#define	ADAS1000_LLDATA			0x12	/* LL����II���� */
#define	ADAS1000_RADATA			0x13	/* RA����III���� */
#define	ADAS1000_V1DATA			0x14	/* V1��V1'���� */
#define	ADAS1000_V2DATA			0x15	/* V2��V2'���� */
#define	ADAS1000_PACEDATA		0x1A	/* �����ݻ�״̬�Ĵ��� */
#define	ADAS1000_RESPMAG		0x1B	/* ������������ */
#define	ADAS1000_RESPPH			0x1C	/* ������λ���� */
#define	ADAS1000_LOFF			0x1D	/* ��������״̬ */
#define	ADAS1000_DCLEADSOFF		0x1E	/* ֱ����������Ĵ��� */
#define ADAS1000_OPSTAT         0x1F    /* ����״̬�Ĵ��� */
#define	ADAS1000_EXTENDSW		0x20	/* ����������չ���� */
#define	ADAS1000_CALLA			0x21	/* �û�����У׼LA */
#define	ADAS1000_CALLL			0x22	/* �û�����У׼LL */
#define	ADAS1000_CALRA			0x23	/* �û�����У׼RA */
#define	ADAS1000_CALV1			0x24	/* �û�����У׼V1 */
#define	ADAS1000_CALV2			0x25	/* �û�����У׼V2 */
#define	ADAS1000_LOAMLA			0x31	/* LA����������� */
#define	ADAS1000_LOAMLL			0x32	/* LL����������� */
#define	ADAS1000_LOAMRA			0x33	/* RA����������� */
#define	ADAS1000_LOAMV1			0x34	/* V1����������� */
#define	ADAS1000_LOAMV2			0x35	/* V2����������� */
#define	ADAS1000_PACE1_DATA		0x3A	/* ��1��Ⱥͷ��� */
#define	ADAS1000_PACE2_DATA		0x3B	/* ��2��Ⱥͷ��� */
#define	ADAS1000_PACE3_DATA		0x3C	/* ��3��Ⱥͷ��� */
#define	ADAS1000_FRAMES			0x40	/* ֡��ͷ */
#define	ADAS1000_CRC			0x41	/* CRC�Ĵ��� */

/******************************************************************************/
/* ECG ���üĴ��� 				        									  */
/******************************************************************************/
#define ADAS1000_ECGCTL_LAEN		(1ul << 23)	/* 	ECG ͨ��LAʹ��, �ض�ͨ����Դ, �����Ϊ 
													����̬ : 1 = ʹ��, 0 = �ض� */
                                                    
#define ADAS1000_ECGCTL_LLEN		(1ul << 22)	/* 	ECG ͨ��LLʹ��, �ض�ͨ����Դ, �����Ϊ 
													����̬ : 1 = ʹ��, 0 = �ض� */
                                                    
#define ADAS1000_ECGCTL_RAEN		(1ul << 21)	/* 	ECG ͨ��RAʹ��, �ض�ͨ����Դ, �����Ϊ 
													����̬ : 1 = ʹ��, 0 = �ض� */
                                                    
#define ADAS1000_ECGCTL_V1EN		(1ul << 20)	/* 	ECG ͨ��V1ʹ��, �ض�ͨ����Դ, �����Ϊ 
													����̬ : 1 = ʹ��, 0 = �ض� */
                                                    
#define ADAS1000_ECGCTL_V2EN		(1ul << 19)	/* 	ECG ͨ��V2ʹ��, �ض�ͨ����Դ, �����Ϊ 
													����̬ : 1 = ʹ��, 0 = �ض� */
                                                    
#define ADAS1000_ECGCTL_CHCONFIG	(1ul << 10)	/* 	��λ��1��ѡ����ģ��ǰ������: 
														0 = �������룬�������ֵ���ģʽ��缫ģʽ, 
														1 = ������룬����ģ�⵼��ģʽ */
                                                        
#define ADAS1000_ECGCTL_GAIN 		(1ul << 8)	/* 	ǰ�÷Ŵ����Ϳ�����˲�����������: 
														00 = GAIN 0 = x1.4, 01 = GAIN 1 = x2.1, 
														10 = GAIN 2 = x2.8, 11 = GAIN 3 = x4.2 */
                                                        
#define ADAS1000_ECGCTL_VREFBUF 	(1ul << 7)	/* 	VREF ������ʹ��:   0 = �ض�, 1 = ʹ�� (ʹ���ڲ�VREFʱ 
													��λ����ʹ��) */
                                                    
#define ADAS1000_ECGCTL_CLKEXT		(1ul << 6)	/* 	ʹ���ⲿʱ�����룬����ʹ�þ��������ģʽ�£�
													������Ϊ�ӻ��������Զ����ã��ӻ�����
													������ʱ��:  
														0 = ʹ�þ���, 1 = ʹ���ⲿʱ��Դ. */
                                                        
#define ADAS1000_ECGCTL_MASTER		(1ul << 5)	/* 	�����ģʽ�¡���λ�������������� (SYNC_GANG�������� 
													Ϊ���). ��ͨ��ģʽ�� (GANG = 0), ���Դ�λ:  
														0 = �ӻ�, 1 = ����  */
                                                        
#define ADAS1000_ECGCTL_GANG		(1ul << 4)	/* 	ʹ�����ģʽ. ��λ��1�ἤ��CLK_IO��SYNC_GANG: 
														0 = ��ͨ��ģʽ,  1 = ���ģʽ */
                                                        
#define ADAS1000_ECGCTL_HP			(1ul << 3)	/* 	ѡ�������͹������ܡ���λ����ADC����Ƶ�ʣ�Ҳ��Ӱ����� 
													�ز�Ƶ��.��������ֲ�: 
														0 = 1MSPS - �͹���,  1 = 2 MSPS �����ܣ������� */
                                                        
#define ADAS1000_ECGCTL_CNVEN		(1ul << 2)	/* 	ת��ʹ�ܣ���λ��1��ʹ��ADCת�����˲���: 
														0 = �ض�, 1 = ʹ�� */
                                                        
#define ADAS1000_ECGCTL_PWREN		(1ul << 1)	/* 	��Դʹ�ܣ�ͨ������λ��0���ض�����. ����ģ��ʱ�Ӷ��ضϣ� 
													�ⲿʱ�ӽ��á��ض�������ֻҪδ�ж�DVDD���Ĵ����Ͳ��ᶪʧ:  
														0 = �ض�,  1 = ��Դʹ�� */
                                                        
#define ADAS1000_ECGCTL_SWRST		(1ul << 0)	/* 	�����λ����λ��1�����мĴ����ظ�Ĭ��ֵ. 
													��λ�Զ���0.�����λҪ����һ��NOP��������ɸ�λ�� 
													0 = ��,  1 = ���� */

/******************************************************************************/
/* ����������ƼĴ��� 		        										  */
/******************************************************************************/
#define ADAS1000_LOFFCTL_LAPH 		(1ul << 23)	/* 	��������LA������λ: 0 = ͬ��, 1 = 180����� */

#define ADAS1000_LOFFCTL_LLPH 		(1ul << 22)	/* 	��������LL������λ: 0 = ͬ��, 1 = 180����� */

#define ADAS1000_LOFFCTL_RAPH		(1ul << 21)	/* 	��������RA������λ: 0 = ͬ��, 1 = 180����� */

#define ADAS1000_LOFFCTL_V1PH		(1ul << 20)	/* 	��������V1������λ: 0 = ͬ��, 1 = 180����� */

#define ADAS1000_LOFFCTL_V2PH		(1ul << 19)	/* 	��������V2������λ: 0 = ͬ��, 1 = 180����� */

#define ADAS1000_LOFFCTL_CEPH		(1ul << 18)	/* 	��������������λ: 0 = ͬ��, 1 = 180����� */

#define ADAS1000_LOFFCTL_LAACLOEN	(1ul << 17)	/* 	LA�缫��������������ʹ�ܣ� 
													0 = ���ý�������������, 1 = ʹ�ܽ������������� */
                                                        
#define ADAS1000_LOFFCTL_LLACLOEN	(1ul << 16)	/*	LL�缫��������������ʹ�ܣ� 
													0 = ���ý�������������, 1 = ʹ�ܽ������������� */
                                                        
#define ADAS1000_LOFFCTL_RAACLOEN	(1ul << 15)	/* 	RA�缫��������������ʹ�ܣ� 
													0 = ���ý�������������, 1 = ʹ�ܽ������������� */
                                                        
#define ADAS1000_LOFFCTL_V1ACLOEN	(1ul << 14)	/* 	V1�缫��������������ʹ�ܣ� 
													0 = ���ý�������������, 1 = ʹ�ܽ������������� */
                                                        
#define ADAS1000_LOFFCTL_V2ACLOEN	(1ul << 13)	/* 	V2�缫��������������ʹ�ܣ� 
													0 = ���ý�������������, 1 = ʹ�ܽ������������� */
                                                        
#define ADAS1000_LOFFCTL_CEACLOEN	(1ul << 12)	/* 	CE�缫��������������ʹ�ܣ� 
													0 = ���ý�������������, 1 = ʹ�ܽ������������� */
                                                        
#define ADAS1000_LOFFCTL_ACCURREN	(1ul << 7)	/* �����������������ֵ (��ACSEL = 1). 
														00 = 12.5nA rms, 01  =  25nA rms, 
														10  =  50nA rms, 11  =  100nA rms */
                                                        
#define ADAS1000_LOFFCTL_DCCURRENT	(1ul << 2)	/* 	ֱ���������������ֵ (��ACSEL = 0) 
														000 = 0nA, 001  =  10nA, 010  =  20nA, 011  =  30nA, 
														100  =  40nA, 101  =  50nA, 110  =  60nA, 111  =  70nA */
                                                        
#define ADAS1000_LOFFCTL_ACSEL 		(1ul << 1)	/* 	ѡ��ֱ����������������. ��� LOFFEN = 0, ��λΪ�޹�λ. 
                                                    ��� LOFFEN = 1��
                                                    ��λ 0 = ʹ��ֱ������������. 
													(��������������ͨ��λ17-12ʹ��), 
													1  = ����ֱ������������. ��������������ʹ�� 
													(��CE������е缫). */
                                                    
#define ADAS1000_LOFFCTL_LOFFEN		(1ul << 0)	/* 	ʹ�ܵ��������⹦��: 
														0 = ���õ���������, 1 = ʹ�ܵ��������� */

/******************************************************************************/
/* �������ƼĴ��� 							                				  */
/******************************************************************************/
#define ADAS1000_RESPCTL_RESPEXTSYNC	(1ul << 15)	/* 	��λ��1������DAC��MSB�����GPIO3
														0 = GPIO3��������, 1 = MSB�����GPIO3 */
                                                        
#define ADAS1000_RESPCTL_RESPEXTAMP		(1ul << 14)	/* 	ʹ���ⲿ�����Ǳ�Ŵ���
                                                        0 = ���ã� 1 = ʹ��*/
                                                        
#define ADAS1000_RESPCTL_RESPOUT		(1ul << 13)	/* 	�ⲿ�����������,��RESPCAP=1ʱ���Զ�ѡ��RESP_RA
                                                        0 = RESPDAC _LL, 1 = RESPDAC_LA */
                                                        
#define ADAS1000_RESPCTL_RESPCAP		(1ul << 12)	/* 	ѡ�����������Դ. 
															0 = ʹ���ڲ�����, 1 = ʹ���ⲿ���� */
                                                            
#define ADAS1000_RESPCTL_RESPGAIN		(1ul << 8)	/* 	�����Ǳ�Ŵ������� (10��ʱ����): 
															0000 = x1 ������, 0001 = x2 ������, 0010 = x3 ������, 
															... 
															1000 = x9 ������, 1001 = x10 ������, 11xx = x10 ������ */
                                                            
#define ADAS1000_RESPCTL_RESPEXTSEL 	(1ul << 7)	/* 	ѡ���ⲿ����·������RESPSELѡ���ⲿ·��ʱ����
                                                        EXT_RESP_RA�Զ�ʹ��
                                                     0 = EXT_RESP_LL, 1 = EXT_RESP _LA */
                                                     
#define ADAS1000_RESPCTL_RESPSEL		(1ul << 5)	/* 	���ú�����������: 
														00 = I����, 01 = II����, 
														10 = III����, 11 = �ⲿ����·�� */
                                                        
#define ADAS1000_RESPCTL_RESPAMP 		(1ul << 3)	/* 	���ú�������������:  
															00 = /8, 01  = /4, 
															10  = /2, 11  = /1 */
                                                            
#define ADAS1000_RESPCTL_RESPFREQ		(1ul << 1)	/* 	���ú����迹����Ƶ��: 
															00 = 56kHz, 01 = 54kHz, 10 = 52kHz, 11 = 50kHz */
                                                            
#define ADAS1000_RESPCTL_RESPEN			(1ul << 0)	/* 	����ʹ��: 
															0 = �ض�, 1  = ʹ�� */

#define ADAS1000_RESPCTL_RESPGAIN_MASK	(0x0000000Ful << 8)														
#define ADAS1000_RESPCTL_RESPSEL_MASK	(0x00000003ul << 5)														
															
/******************************************************************************/
/* �𲫼����ƼĴ���             											  */
/******************************************************************************/
#define ADAS1000_PACECTL_PACEFILTW		(1ul << 11)	/* 	�𲫿���˲���: 
															0 = �˲�������, 1 = �˲���ʹ�� */
                                                            
#define ADAS1000_PACECTL_PACETFILT2		(1ul << 10)	/* 	����֤�˲��� 2: 
															0 = ����, 1 = ʹ�� */
                                                            
#define ADAS1000_PACECTL_PACETFILT1		(1ul << 9)	/* 	����֤�˲��� 1 : 
															0 = ����, 1 = ʹ�� */
                                                            
#define ADAS1000_PACECTL_PACE3SEL 		(1ul << 7)	/* 	�����𲫼����3���ĵ���: 
															00 = ����I, 01 = ����II, 10 = ����III, 11 = ����aVF */
                                                            
#define ADAS1000_PACECTL_PACE2SEL 		(1ul << 5)	/* 	�����𲫼����2���ĵ���: 
															00 = ����I, 01 = ����II, 10 = ����III, 11 = ����aVF */
                                                            
#define ADAS1000_PACECTL_PACE1SEL 		(1ul << 3)	/* 	�����𲫼����1���ĵ���: 
															00 = ����I, 01 = ����II, 10 = ����III, 11 = ����aVF */
                                                            
#define ADAS1000_PACECTL_PACE3EN		(1ul << 2)	/* 	ʹ���𲫼����3: 
															0 = ����, 1  = ʹ�� */
                                                            
#define ADAS1000_PACECTL_PACE2EN		(1ul << 1)	/* 	ʹ���𲫼����2: 
															0 = ����, 1  = ʹ�� */
                                                            
#define ADAS1000_PACECTL_PACE1EN		(1ul << 0)	/* 	ʹ���𲫼����1: 
															0 = ����, 1  = ʹ�� */

#define ADAS1000_PACECTL_PACE3SEL_MASK	(0x00000003ul << 7)
#define ADAS1000_PACECTL_PACE2SEL_MASK	(0x00000003ul << 5)
#define ADAS1000_PACECTL_PACE1SEL_MASK	(0x00000003ul << 3)
															
/******************************************************************************/
/* ��ģ���ο��������������ƼĴ��� 	                        				  */
/******************************************************************************/
#define ADAS1000_CMREFCTL_LACM		(1ul << 23)	/*	��ģ�缫ѡ��*/
#define ADAS1000_CMREFCTL_LLCM		(1ul << 22)	/*	5���缫�����������������ģ�ź�VCM */
#define ADAS1000_CMREFCTL_RACM		(1ul << 21)	/*	��EXTCM = 1������£����Դ�5λ */
#define ADAS1000_CMREFCTL_V1CM		(1ul << 20)	/*	��ģ�ź�����ѡ�缫��ƽ��ֵ��ѡ�񵥸��缫ʱ����ģ�ź��Ǹõ缫�ĵ�ƽ*/
#define ADAS1000_CMREFCTL_V2CM		(1ul << 19)	/*	��5λȫ��Ϊ0�����ã�ʱ����ģ�ź����ڲ�REF����*/
												/*		0 = �����빲ģ�ź� */
												/*		1 = ���빲ģ�ź� */
                                                
                                                
#define ADAS1000_CMREFCTL_LARLD		(1ul << 14)	/*	RLD ��ͽ�����
														0 = ��������ͽ�����
														1 = ������ͽ����� */
                                                        
#define ADAS1000_CMREFCTL_LLRLD		(1ul << 13)	/*	RLD ��ͽ�����
														0 = ��������ͽ�����
														1 = ������ͽ����� */
                                                        
#define ADAS1000_CMREFCTL_RARLD		(1ul << 12)	/*	RLD ��ͽ�����
														0 = ��������ͽ�����
														1 = ������ͽ����� */
                                                        
#define ADAS1000_CMREFCTL_V1RLD		(1ul << 11)	/*	RLD ��ͽ�����
														0 = ��������ͽ�����
														1 = ������ͽ����� */
                                                        
#define ADAS1000_CMREFCTL_V2RLD		(1ul << 10)	/*	RLD ��ͽ�����
														0 = ��������ͽ�����
														1 = ������ͽ����� */
                                                        
#define ADAS1000_CMREFCTL_CERLD		(1ul << 9)	/*	RLD ��ͽ�����
														0 = ��������ͽ�����
														1 = ������ͽ����� */
                                                        
#define ADAS1000_CMREFCTL_CEREFEN	(1ul << 8)	/*	�����缫��CE���ο�
                                                    0 = ���ù����缫
                                                    1 = ʹ�ܹ����缫*/
                                                        
#define ADAS1000_CMREFCTL_RLDSEL	(1ul << 4)	/*	ѡ��ο������ĵ缫
														0000 = RLD_OUT, 0001 = LA, 0010 = LL,
														0011 = RA, 0100 = V1, 0101 = V2,
														0110 to 1111 = ���� */
                                                        
#define ADAS1000_CMREFCTL_DRVCM		(1ul << 3)	/*	��ģ�������1ʱ����ģ�ź�ͨ����ģ�������
													���ʹ���ⲿ��ģ����λ��������  
														0 = �������ģ
														1   = �����ģ */
                                                        
#define ADAS1000_CMREFCTL_EXTCM		(1ul << 2)	/*	ѡ��ģ��Դ 
													(���ģʽ��ʹ��)
														0 = �ڲ���ģ
														1 = �ⲿ��ģ */
                                                        
#define ADAS1000_CMREFCTL_RLD_EN	(1ul << 1)	/*	ʹ��RLD�ο��缫
														0 = ����
														1  = ʹ�� */
                                                        
#define ADAS1000_CMREFCTL_SHLDEN	(1ul << 0)	/*	ʹ����������
														0 = ����
														1  = ʹ�� */

#define ADAS1000_CMREFCTL_RLDSEL_MASK (0x0000000Ful << 4)
														
/******************************************************************************/
/* GPIO���ƼĴ���         													  */
/******************************************************************************/
#define ADAS1000_GPIOCTL_SPIFW		(1ul << 18)	/*	Ƭѡ����
														0 = Ƭѡ��֡�ڼ���λ
														1 = Ƭѡ�����ڼ���λ */
                                                        
#define ADAS1000_GPIOCTL_SPIEN		(1ul << 16)	/*	�ڶ�SPIʹ�� (��1000��1000-2)
													�ڶ�SPI�ӿ���128khz�����ṩECG���� 
													ռ��GPIO0,1,2����
														0 = ����
														1 = ʹ��.*/
                                                        
#define ADAS1000_GPIOCTL_G3CTL		(1ul << 14)	/*	GPIO3ģʽ
														00 = ����̬, 01 = ����,
														10 = ���, 11 = ��©��� */
                                                        
#define ADAS1000_GPIOCTL_G3OUT		(1ul << 13)	/*	���ģʽ�µ�GPIO״̬
														0  = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G3IN		(1ul << 12)	/*	(ֻ��) ����ģʽ��GPIO3�ĵ�ƽ 
														0 = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G2CTL 		(1ul << 10)	/*	GPIO2ģʽ
														00 = ����̬, 01 = ����,
														10 = ���, 11 = ��©��� */
                                                        
#define ADAS1000_GPIOCTL_G2OUT		(1ul << 9)	/*	���ģʽ��GPIO2�ĵ�ƽ
														0 = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G2IN		(1ul << 8)	/*	(ֻ��) ����ģʽ��GPIO2�ĵ�ƽ
														0 = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G1CTL		(1ul << 6)	/*	GPIO1ģʽ
														00 = ����̬, 01 = ����,
														10 = ���, 11 = ��©��� */
                                                        
#define ADAS1000_GPIOCTL_G1OUT		(1ul << 5)	/*	���ģʽ��GPIO1�ĵ�ƽ
														0 = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G1IN		(1ul << 4)	/*	(ֻ��) ����ģʽ��GPIO1�ĵ�ƽ
														0 = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G0CTL		(1ul << 2)	/*	GPIO0��ģʽ
														00 = ����̬, 01 = ����,
														10 = ���, 11 = ��©��� */
                                                        
#define ADAS1000_GPIOCTL_G0OUT		(1ul << 1)	/*	���ģʽ��GPIO0�ĵ�ƽ.
														0 = �͵�ƽ
														1 = �ߵ�ƽ */
                                                        
#define ADAS1000_GPIOCTL_G0IN		(1ul << 0)	/*	(ֻ��) ����ģʽ��GPIO0�ĵ�ƽ
														0 = �͵�ƽ
														1 = �ߵ�ƽ */

#define ADAS1000_GPIOCTL_G3CTL_MASK	(0x00000003ul << 14)
#define ADAS1000_GPIOCTL_G2CTL_MASK	(0x00000003ul << 10)
#define ADAS1000_GPIOCTL_G1CTL_MASK	(0x00000003ul << 6)
#define ADAS1000_GPIOCTL_G0CTL_MASK	(0x00000003ul << 2)
														
/******************************************************************************/
/* �𲫷�����ֵ�Ĵ���                										  */
/******************************************************************************/
#define ADAS1000_PACEAMPTH_PACE3AMPTH	(1ul << 16)	/*	�𲫷�����ֵ			*/
#define ADAS1000_PACEAMPTH_PACE2AMPTH	(1ul << 8)	/*	��ֵ = N * VREF/GAIN/2^16 	*/
#define ADAS1000_PACEAMPTH_PACE1AMPTH	(1ul << 0)	

#define ADAS1000_PACEAMPTH_PACE3AMPTH_MASK		(0x000000FFul << 16)
#define ADAS1000_PACEAMPTH_PACE2AMPTH_MASK		(0x000000FFul << 8)
#define ADAS1000_PACEAMPTH_PACE1AMPTH_MASK		(0x000000FFul << 0)

/******************************************************************************/
/* �������Ĵ���       														  */
/******************************************************************************/
#define ADAS1000_TESTTONE_TONLA		(1ul << 23)	/*	������ѡ�� */
#define ADAS1000_TESTTONE_TONLL		(1ul << 22)	/* 	0 = 1.3V ��׼��ѹ */
#define ADAS1000_TESTTONE_TONRA		(1ul << 21)	/*	1 = 1mV ���Ҳ��򷽲� */
#define ADAS1000_TESTTONE_TONV1		(1ul << 20)
#define ADAS1000_TESTTONE_TONV2		(1ul << 19)

#define ADAS1000_TESTTONE_TONTYPE	(1ul << 3)	/*	����������
                                                    00 = 10Hz ���Ҳ�
													01 = 150Hz ���Ҳ�
													1x = 1Hz 1mV ���Ҳ� */
                                                    
#define ADAS1000_TESTTONE_TONINT	(1ul << 2)	/*	��������Դ
													0 = �ⲿ����
													1  = �ڲ������� */
                                                    
#define ADAS1000_TESTTONE_TONOUT	(1ul << 1)	/*	���������ʹ��
													0 = �ڲ�������ģʽ�£����ò��������
													1 = �ڲ�������ģʽ�£�CAL_DAC_IO���������. */
                                                    
#define ADAS1000_TESTTONE_TONEN		(1ul << 0)	/*	������ʹ��
													0 = ���ò�����
													1 = ʹ�ܲ����� */

#define ADAS1000_TESTTONE_TONTYPE_MASK (0x00000003ul << 3)
													
/******************************************************************************/
/* У׼DAC�Ĵ���         													  */
/******************************************************************************/
#define ADAS1000_CALDAC_CALCHPEN	(1ul << 13)	/*	У׼ն��ʱ��ʹ��. 
														0 = �ض�
														1  = ʹ��. */
                                                        
#define ADAS1000_CALDAC_CALMODEEN	(1ul << 12)	/*	У׼ģʽʹ��
														0 = ����У׼ģʽ
														1 = ʹ��У׼ģʽ. */
                                                        
#define ADAS1000_CALDAC_CALINT		(1ul << 11)	/*	У׼��Դ
														0 = �ⲿCAL_DAC_IOУ׼. 
														1 = �ڲ�У׼. */
                                                        
#define ADAS1000_CALDAC_CALDACEN	(1ul << 10)	/*	У׼DACʹ��. 
														0 = ����У׼DAC
														1 = ʹ��У׼DAC. */
                                                        
#define ADAS1000_CALDAC_CALDATA		(1ul << 0)	/*	У׼DACֵ 	*/

#define ADAS1000_CALDAC_CALDATA_MASK (0x000003FFul << 0)

/******************************************************************************/
/* ֡���ƼĴ���            													  */
/******************************************************************************/
#define ADAS1000_FRMCTL_LEAD_I_LADIS	(1ul << 23)	/*	���ְ������ų�������֡�� */
#define ADAS1000_FRMCTL_LEAD_II_LLDIS	(1ul << 22)	/*	����������䣬�������� */
#define ADAS1000_FRMCTL_LEAD_III_RADIS	(1ul << 21)	/*	Ϊδ����.*/
#define ADAS1000_FRMCTL_V1DIS			(1ul << 20)	/*		0 = ������֡�� */
#define ADAS1000_FRMCTL_V2DIS			(1ul << 19)	/*		1 = �ų���֡ */

#define ADAS1000_FRMCTL_PACEDIS			(1ul << 14)	/*	�𲫼��
															0 = ������֡��
															1 = �ų���֡	*/
                                                            
#define ADAS1000_FRMCTL_RESPMDIS		(1ul << 13)	/*	��������
															0 = ������֡��
															1 = �ų���֡ */
                                                            
#define ADAS1000_FRMCTL_RESPPHDIS		(1ul << 12)	/*	������λ
															0 = ������֡��
															1 = �ų���֡ */
                                                            
#define ADAS1000_FRMCTL_LOFFDIS			(1ul << 11)	/*	����������Ϣ
															0 = ������֡��
															1 = �ų���֡ */
                                                            
#define ADAS1000_FRMCTL_GPIODIS			(1ul << 10)	/*	GPIO�ֽ���
															0 = ������֡��
															1 = �ų���֡	*/
                                                            
#define ADAS1000_FRMCTL_CRCDIS			(1ul << 9)	/*	CRC�ֽ���
															0 = ������֡��
															1 = �ų���֡ */
                                                            
                                                            
#define ADAS1000_FRMCTL_ADIS			(1ul << 7)	/*	�����ͷ��δ�������־�����Զ��ų�����.
															0 = �̶���ʽ
															1 = �Զ��ų� */
                                                            
#define ADAS1000_FRMCTL_RDYRPT			(1ul << 6)	/*	�ظ����������֡��ͷ��ʾ����δ������
														���������֡��ͷ
                                                        ֱ�����ݾ���. 
															0 = ���Ƿ�����֡
															1 = �ظ�������ͷֱ������ */
                                                            
#define ADAS1000_FRMCTL_DATAFMT			(1ul << 4)	/*	������ݸ�ʽ
															0 = ���ֵ�����ʸ����ʽ 
																(��2khz-16khz)
															1  = �缫��ʽ */
                                                            
#define ADAS1000_FRMCTL_SKIP			(1ul << 2)	/*	����ģʽ
															00 = ���ÿһ֡
															01 = ÿ��һ֡���
															1x = ÿ����֡��� */
                                                            
#define ADAS1000_FRMCTL_FRMRATE                 (1ul << 0) /*  �����������
                                                            00 = 2khz
                                                            01 = 16khz
                                                            10 = 128khz��DATAFMT = 1��
                                                            11 = 31.25HZ*/
                                                            
#define ADAS1000_FRMCTL_FRMRATE_2KHZ	0x00		/*	2 kHz */
#define ADAS1000_FRMCTL_FRMRATE_16KHZ	0x01		/*	16 kHz */
#define ADAS1000_FRMCTL_FRMRATE_128KHZ	0x10		/*	128 kHz */
#define ADAS1000_FRMCTL_FRMRATE_31_25HZ	0x11		/*	31.25 Hz */

#define ADAS1000_FRMCTL_WORD_MASK	(ADAS1000_FRMCTL_LEAD_I_LADIS 	| \
									 ADAS1000_FRMCTL_LEAD_II_LLDIS 	| \
									 ADAS1000_FRMCTL_LEAD_III_RADIS | \
									 ADAS1000_FRMCTL_V1DIS 			| \
									 ADAS1000_FRMCTL_V2DIS 			| \
									 ADAS1000_FRMCTL_PACEDIS 		| \
									 ADAS1000_FRMCTL_RESPMDIS 		| \
									 ADAS1000_FRMCTL_RESPPHDIS		| \
									 ADAS1000_FRMCTL_LOFFDIS 		| \
									 ADAS1000_FRMCTL_GPIODIS 		| \
									 ADAS1000_FRMCTL_CRCDIS)
#define ADAS1000_FRMCTL_SKIP_MASK		(0x00000003ul << 2)
#define ADAS1000_FRMCTL_FRMRATE_MASK	(0x00000003ul << 0)

/******************************************************************************/
/* �˲������ƼĴ���      													  */
/******************************************************************************/
#define ADAS1000_FILTCTL_MN2K	(1ul << 5)	/*	SPI��������2khz�ݲ���·
													0 = ��·�ݲ�
													1 = �˲����� */
                                                    
#define ADAS1000_FILTCTL_N2KBP	(1ul << 4)	/*	2khz�ݲ���·
													0 = �ݲ�����
													1 = �ݲ���· */
                                                    
#define ADAS1000_FILTCTL_LPF	(1ul << 2)	/*	��ͨ�˲�������
                                                00 = 40Hz
												01 = 150Hz
												10 = 250 Hz
												11 = 450Hz */

#define ADAS1000_FILTCTL_LPF_MASK	(0x00000003ul << 2)

/******************************************************************************/
/* ��������������ֵ���޼Ĵ���        										  */
/******************************************************************************/
#define ADAS1000_LOFFUTH_ADCOVER	(1ul << 16)	/*	ADC��������ֵ. 
                                                        ��ֵ = ���ֵ - ADCOVER * 2^6
														0000 = max value (����)
														0001 = max_value - 64
														0010 = max_value - 128
														...
														1111: max_value - 960 */
                                                        
#define ADAS1000_LOFFUTH_LOFFUTH	(1ul << 0)	/*	AC Leads off upper Threshold. Leads off will be detected if the DC
													or AC output is = N * 2 * VREF/GAIN/2^16. 0 = 0V */

#define ADAS1000_LOFFUTH_ADCOVER_MASK	(0x0000000Ful << 16)
#define ADAS1000_LOFFUTH_LOFFUTH_MASK	(0x0000FFFFul << 0)

/******************************************************************************/
/* ��������������ֵ���޼Ĵ���        										  */
/******************************************************************************/
#define ADAS1000_LOFFLTH_ADCUNDR	(1ul << 16)	/*	ADCǷ������ֵ. 
													��ֵ = ��Сֵ + ADCUNDR * 2^6
														0000 = ��Сֵ (����)
														0001 = ��Сֵ + 64
														0010 = ��Сֵ + 128
														...
														1111: ��Сֵ + 960 */
                                                        
#define ADAS1000_LOFFLTH_LOFFLTH	(1ul << 0)	/*	AC Leads off lower Threshold. Leads off will be detected if the DC 
													or AC output is = N * 2 * VREF/GAIN/2^16. 0 = 0V */

#define ADAS1000_LOFFLTH_ADCUNDR_MASK	(0x0000000Ful << 16)
#define ADAS1000_LOFFLTH_LOFFLTH_MASK	(0x0000FFFFul << 0)

/******************************************************************************/
/* �𲫱�����ֵ�Ĵ���            											  */
/******************************************************************************/
#define ADAS1000_PACEEDGETH_PACE3EDGTH	(1ul << 16)	/*	�𲫱��ش�����ֵ	*/
#define ADAS1000_PACEEDGETH_PACE2EDGTH	(1ul << 8)	/*		0 = PACEAMPTH/2			*/
#define ADAS1000_PACEEDGETH_PACE1EDGTH	(1ul << 0)	/*		1 = VREF/GAIN/2^16		*/
													/*		N = N * VREF/GAIN/2^16	*/

#define ADAS1000_PACEEDGETH_PACE3EDGTH_MASK	(0x000000FFul << 16)
#define ADAS1000_PACEEDGETH_PACE2EDGTH_MASK	(0x000000FFul << 8)
#define ADAS1000_PACEEDGETH_PACE1EDGTH_MASK	(0x000000FFul << 0)													
													
/******************************************************************************/
/* �𲫵�ƽ��ֵ�Ĵ���            											  */
/******************************************************************************/
#define ADAS1000_PACELVLTH_PACE3LVLTH	(1ul << 16)	/*	�𲫵�ƽ��ֵ������һ���з�ֵ.	*/
#define ADAS1000_PACELVLTH_PACE2LVLTH	(1ul << 8)	/*		-1 = 0xFFF = -VREF/GAIN/2^16				*/
#define ADAS1000_PACELVLTH_PACE1LVLTH	(1ul << 0)	/*		 0 = 0x0000 = 0V							*/
													/*		+1 = 0x001 = +VREF/GAIN/2^16				*/
													/*		 N = N * VREF/GAIN/2^16						*/

#define ADAS1000_PACELVLTH_PACE3LVLTH_MASK	(0x000000FFul << 16)
#define ADAS1000_PACELVLTH_PACE2LVLTH_MASK	(0x000000FFul << 8)
#define ADAS1000_PACELVLTH_PACE1LVLTH_MASK	(0x000000FFul << 0)													

/***********************************************************************************/
/* �������ݼĴ���                                                                  */
/***********************************************************************************/
 #define ADAS1000_LADATA_ADDRESS		(1ul << 24)	/* 	0x11 : LA����I
													0x12 : LL����II
													0x13 : RA����III
													0x14 : V1
													0x15 : V2*/
                                                    
#define ADAS1000_LADATA_ECG_DATA	(1ul << 0)	/*	ͨ������ֵ����������루MSB����������������Ϊ��ֵ
                                                    �ڵ缫ģʽ��ģ�⵼��ģʽ�¡����ݽ��Ϊ�޷�������
                                                    �����ֵ�����ʸ��ģʽ�£�ֵΪ�з������Ʋ���������ʽ����Χ��
                                                    �缫��ʽ��2������Ϊ���ܴ�+VREF�ڶ���-VREF�����LSB��С�ӱ�
                                                    
                                                    �缫ģʽ��ģ�⵼��ģʽ��
                                                      ��Сֵ��000....�� = 0v
                                                      ���ֵ��111....�� = VREF/GAIN
                                                        LSB = (2*VREF/GAIN) / (2N-1)
                                                        ECG(��ѹ) = ECG���� * LSB
                                                    ���ֵ���ģʽ��
                                                      ��Сֵ��100....�� = -��VREF/GAIN��
                                                      ���ֵ��011....�� = VREF/GAIN
                                                        LSB = (4 * VREF/GAIN) / (2N - 1)
                                                        ECG(��ѹ) = ECG���� * LSB
													
														���У�N������λ����128khzΪ16λ��2/16khzΪ24λ */

#define ADAS1000_LADATA_ADDRESS_MASK	(0x000000FFul << 24)
#define ADAS1000_LADATA_ECG_DATA_MASK	(0x00FFFFFFul << 0)

/******************************************************************************/
/* �𲫼�����ݡ�״̬�Ĵ���	            									  */
/******************************************************************************/
#define ADAS1000_PACEDATA_ADDRESS			(1ul << 24)	/*	0001 1010 = Pace Detection 	*/

#define ADAS1000_PACEDATA_PACE3_DETECTED	(1ul << 23)	/*	��⵽��3. 
																0 = δ��⵽��
																1 = ��⵽�� */
                                                                
#define ADAS1000_PACEDATA_PACE_CH3_WIDTH	(1ul << 20)	/*	��λ���������log2(���)-1. 
															N: ��� = 2^(N+1) / 128kHz */
                                                            
#define ADAS1000_PACEDATA_PACE_CH3_HEIGHT	(1ul << 16)	/*	��λ���������log2(�߶�)
															N: �߶� = 2^N * VREF / GAIN / 2^16 */
                                                            
#define ADAS1000_PACEDATA_PACE2_DETECTED	(1ul << 15)	/*	������2 
															   0 = δ��⵽��
															   1 = ��⵽��*/
                                                               
#define ADAS1000_PACEDATA_PACE_CH2_WIDTH	(1ul << 12)	/*	��λ���������log2(���)-1. 
															N: ��� = 2^(N+1) / 128kHz */
                                                            
#define ADAS1000_PACEDATA_PACE_CH2_HEIGHT	(1ul << 8)	/*	��λ���������log2(�߶�)
															N: �߶� = 2^N * VREF / GAIN / 2^16 */
                                                            
#define ADAS1000_PACEDATA_PACE1_DETECTED	(1ul << 7)	/*	��⵽��1. 
															   0 = δ��⵽��
															   1 = ��⵽�� */
#define ADAS1000_PACEDATA_PACE_CH1_WIDTH	(1ul << 4)	/*	��λ���������log2(���)-1. 
															N: ��� = 2^(N+1) / 128kHz */
                                                            
#define ADAS1000_PACEDATA_CH1_HEIGHT		(1ul << 0)	/*	��λ���������log2(�߶�)
															N: �߶� = 2^N * VREF / GAIN / 2^16 */

#define ADAS1000_PACEDATA_ADDRESS_MASK			(0x000000FFul << 24)
#define ADAS1000_PACEDATA_PACE_CH3_WIDTH_MASK	(0x00000007ul << 20)
#define ADAS1000_PACEDATA_PACE_CH3_HEIGHT_MASK	(0x0000000Ful << 16)
#define ADAS1000_PACEDATA_PACE_CH2_WIDTH_MASK	(0x00000007ul << 12)
#define ADAS1000_PACEDATA_PACE_CH2_HEIGHT_MASK	(0x0000000Ful << 8)
#define ADAS1000_PACEDATA_PACE_CH1_WIDTH_MASK	(0x00000007ul << 4)
#define ADAS1000_PACEDATA_PACE_CH1_HEIGHT_MASK	(0x0000000Ful << 0)

/******************************************************************************/
/* �����������ݼĴ���                    									  */
/******************************************************************************/
#define ADAS1000_RESPMAG_ADDRESS	(1ul << 24)	/*	0001 1011 = Respiration Magnitude */

#define ADAS1000_RESPMAG_MAGNITUDE	(1ul << 0)	/*	�����źŵķ��ȡ�����һ�������ŵ�ֵ. 
                                                    4 * ��VREF / (1.6468 * ��������)�� / ��2^24 - 1��*/

#define ADAS1000_RESPMAG_ADDRESS_MASK	(0x000000FFul << 24)
#define ADAS1000_RESPMAG_MAGNITUDE_MASK	(0x00FFFFFFul << 0)

/******************************************************************************/
/* ������λ���ݼĴ���                										  */
/******************************************************************************/
#define ADAS1000_RESPPH_ADDRESS	(1ul << 24)	/*	0001 1100 = Respiration Phase */

#define ADAS1000_RESPPH_PHASE	(1ul << 0)	/*	�����źŵ���λ.���Խ��Ϊ�����Ż��޷���ֵ��
                                                ���Ϊ�޷��ţ���Χ��0��2pai
                                                ���Ϊ�з��ţ���Χ��-pai��pai
													0x000000 = 0
													0x000001 = 2pi / 2^24
													0x400000 = pi/2
													0x800000 = +pi = -pi 
													0xC00000 = +3pi/2 = -pi/2
													0xFFFFFF = +2pi(1 - 2^(-24)) = -2p / 2^24 */

#define ADAS1000_RESPPH_ADDRESS_MASK	(0x000000FFul << 24)
#define ADAS1000_RESPPH_PHASE_MASK		(0x00FFFFFFul << 0)

/******************************************************************************/
/* ��������״̬�Ĵ���        												  */
/******************************************************************************/
#define ADAS1000_LOFF_ADDRESS				(1ul << 24)	/*	Address bits define the word data 0001 1101 = Leads Off	*/

#define ADAS1000_LOFF_RL_LEADS_OFF_STATUS	(1ul << 23)	/*	�缫����״̬	*/
#define ADAS1000_LOFF_LA_LEADS_OFF_STATUS	(1ul << 22)	/*	���ֱ�������������ʹ�ܣ���Щλ��ӳ��Ӧ�ĵ�������״̬*/
#define ADAS1000_LOFF_LL_LEADS_OFF_STATUS	(1ul << 21)	/*	���AC��DC��ʹ�ܣ������ӳ������������״̬ */
#define ADAS1000_LOFF_RA_LEADS_OFF_STATUS	(1ul << 20)	/*	ֱ��״̬ͨ��DCLEAD-OFF�Ĵ����ṩ */
#define ADAS1000_LOFF_V1_LEADS_OFF_STATUS	(1ul << 19)	/*	CE�缫ֻ��DC������ */
#define ADAS1000_LOFF_V2_LEADS_OFF_STATUS	(1ul << 18)	
#define ADAS1000_LOFF_CELO					(1ul << 13) /*	   0 = �缫���� */
														/*	   1 = �缫���� */
                                                        
#define ADAS1000_LOFF_LAADCOR				(1ul << 12)	/*	ADC�������.*/
#define ADAS1000_LOFF_LLADCOR				(1ul << 11)	/*	��ЩλָʾADC������Χ*/
#define ADAS1000_LOFF_RAADCOR				(1ul << 10)
#define ADAS1000_LOFF_V1ADCOR				(1ul << 9)
#define ADAS1000_LOFF_V2ADCOR				(1ul << 8)

#define ADAS1000_LOFF_ADDRESS_MASK			(0x000000FFul << 24)

/******************************************************************************/
/* ֱ����������Ĵ���     													  */
/******************************************************************************/
#define ADAS1000_DCLEADSOFF_ADDRESS				(1ul << 24)	/*	Address bits define the word data 0001 1110 = DC Leads Off	  */

#define ADAS1000_DCLEADSOFF_RL_INPUT_OVERRANGE	(1ul << 23)	/*	ֱ��������������ڱȽ��� */
#define ADAS1000_DCLEADSOFF_LA_INPUT_OVERRANGE	(1ul << 22)	/*	��һ���̶��ĵ�ƽ���бȽ� */
#define ADAS1000_DCLEADSOFF_LL_INPUT_OVERRANGE	(1ul << 21)	/*	��λָʾ�Ƿ񳬹�ֱ���Ƚ���ֵ��ƽ */
#define ADAS1000_DCLEADSOFF_RA_INPUT_OVERRANGE	(1ul << 20)	/*	   0 = �缫 < ����Χ��ֵ, 2.4 V	 */
#define ADAS1000_DCLEADSOFF_CE_INPUT_OVERRANGE	(1ul << 13)	/*	   1 = �缫 > ����Χ��ֵ, 2.4 V	 */

#define ADAS1000_DCLEADSOFF_RL_INPUT_UNDERRANGE	(1ul << 12)	/*	ֱ��������������ڱȽ��� */
#define ADAS1000_DCLEADSOFF_LA_INPUT_UNDERRANGE	(1ul << 11)	/*	��һ���̶��ĵ�ƽ���бȽ� */
#define ADAS1000_DCLEADSOFF_LL_INPUT_UNDERRANGE	(1ul << 10)	/*	��λָʾ�Ƿ񳬹�ֱ���Ƚ���ֵ��ƽ */
#define ADAS1000_DCLEADSOFF_RA_INPUT_UNDERRANGE	(1ul << 9)	/*		0 = �缫 > Ƿ��Χ��ֵ, 0.2 V */
#define ADAS1000_DCLEADSOFF_CE_INPUT_UNDERRANGE	(1ul << 2)	/*	   	1 = �缫 < Ƿ��Χ��ֵ, 0.2 V */

#define ADAS1000_DCLEADSOFF_ADDRESS_MASK		(0x000000FFul << 24)

/******************************************************************************/
/* ����������չ���ؼĴ���                              						  */
/******************************************************************************/
#define ADAS1000_EXTENDSW_EXTRESP_RA_LA		(1ul << 23)	/* �缫������ⲿ�����缫���뿪��	*/
#define ADAS1000_EXTENDSW_EXTRESP_RA_LL		(1ul << 22)
#define ADAS1000_EXTENDSW_EXTRESP_RA_RA		(1ul << 21)	/*		0 = �Ͽ�	*/
#define ADAS1000_EXTENDSW_EXTRESP_RA_V1		(1ul << 20)	/*		1 = �պ�	*/
#define ADAS1000_EXTENDSW_EXTRESP_RA_V2		(1ul << 19)
#define ADAS1000_EXTENDSW_EXTRESP_LL_LA		(1ul << 18)
#define ADAS1000_EXTENDSW_EXTRESP_LL_LL		(1ul << 17)
#define ADAS1000_EXTENDSW_EXTRESP_LL_RA		(1ul << 16)
#define ADAS1000_EXTENDSW_EXTRESP_LL_V1		(1ul << 15)
#define ADAS1000_EXTENDSW_EXTRESP_LL_V2		(1ul << 14)
#define ADAS1000_EXTENDSW_EXTRESP_LA_LA		(1ul << 13)
#define ADAS1000_EXTENDSW_EXTRESP_LA_LL		(1ul << 12)
#define ADAS1000_EXTENDSW_EXTRESP_LA_RA		(1ul << 11)
#define ADAS1000_EXTENDSW_EXTRESP_LA_V1		(1ul << 10)
#define ADAS1000_EXTENDSW_EXTRESP_LA_V2		(1ul << 9)

#define ADAS1000_EXTENDSW_FREE_V1			(1ul << 8)
#define ADAS1000_EXTENDSW_FREE_V2			(1ul << 7)

/******************************************************************************/
/* �û�����У׼�Ĵ���                                						  */
/******************************************************************************/
#define	ADAS1000_CAL_ADDRESS	(1ul << 24)	/*	0x21 : CAL LA
												0x22 : CAL LL
												0x23 : CAL RA
												0x24 : CAL V1
												0x25 : CAL V2 */
                                                
#define	ADAS1000_CAL_USRCAL		(1ul << 23)	/*	У׼ֵѡ��:
													0 = ����У׼
													1 = �û�У׼ */
                                                    
#define	ADAS1000_CAL_CALVALUE	(1ul << 0)	/*	����У׼ֵ. 
												��� = ���� * (1 + GAIN * 2^(-17))
													0x7FF (+2047) = *1.00000011111111111b
													0x001 (+1) 	  = *1.00000000000000001b
													0x000 (0)     = *1.00000000000000000b
													0xFFF (-1)    = *0.11111111111111111b
													0x800 (-2048) = *0.11111100000000000b */

#define	ADAS1000_CAL_ADDRESS_MASK	(0x000000FFul << 24)
#define	ADAS1000_CAL_CALVALUE_MASK	(0x00000FFFul << 0)

/******************************************************************************/
/* ��������������ȼĴ���                              						  */
/******************************************************************************/
#define	ADAS1000_LOAM_ADDRESS	(1ul << 24)	/*	0x31 : LA AC Leads off Magnitude
												0x32 : LL AC Leads off Magnitude
												0x33 : RA AC Leads off Magnitude
												0x34 : V1 AC Leads off Magnitude
												0x35 : V2 AC Leads off Magnitude */
                                                
#define	ADAS1000_LOAM_LOFFAM	(1ul << 0)	/*	����.
													��Сֵ 0x0000 = 0V
													LSB 0x0001= VREF / GAIN / 2^16
													���ֵ 0xFFFF = VREF / GAIN */

#define	ADAS1000_LOAM_ADDRESS_MASK	(0x000000FFul << 24)
#define	ADAS1000_LOAM_LOFFAM_MASK	(0x0000FFFFul << 0)


/******************************************************************************/
/* �𲫿�Ⱥͷ��ȼĴ���                           							  */
/******************************************************************************/
#define	ADAS1000_PACE_DATA_ADDRESS	(1ul << 24)	/*	0x3A : PACE1DATA
													0x3B : PACE2DATA
													0x3C : PACE3DATA */
                                                    
#define	ADAS1000_PACE_DATA_HEIGHT	(1ul << 8)	/*	�𲫸߶ȣ��з������Ʋ���
														0 = 0 
														1 = VREF / GAIN / 2^16
														N = N * VREF / GAIN / 2^16 */
                                                        
#define	ADAS1000_PACE_DATA_WIDTH	(1ul << 0)	/*	�𲫿�ȣ�128khz������
														N:   N / 128kHz   = ���
														12:  12+1 / 128kHz  = 101.56us
														255: 255 / 128kHz = 2.0ms */

#define	ADAS1000_PACE_DATA_ADDRESS_MASK	(0x000000FFul << 24)
#define	ADAS1000_PACE_DATA_HEIGHT_MASK	(0x0000FFFFul << 8)
#define	ADAS1000_PACE_DATA_WIDTH_MASK	(0x000000FFul << 0)

/******************************************************************************/
/* ֡��ͷ�Ĵ���                           									  */
/******************************************************************************/
#define ADAS1000_FRAMES_MARKER					(1ul << 31)	/*	��ͷ��־����1��ʾ��ͷ */

#define ADAS1000_FRAMES_READY_BIT				(1ul << 30)	/*	����λ��ָʾECG�����Ƿ��������ҿɶ�ȡ 
																   0 = ����
																   1 = æ	*/
                                                                   
#define ADAS1000_FRAMES_OVERFLOW				(1ul << 28)	/*	���λ ָʾ���ϴ���������ʧ��֡�� 
																�����������ֵʱ�����򱥺�
																�����λ����0 
																��֡�е�������Ч��������
																ʹ������ģʽʱ(FLMCTL 3:2)
																���λ������־
																�����ʾ���
																	00 = 0 ��ʧ
																	01 = 1 ��ʧ
																	10 = 2 ��ʧ
																	11 = 3 ����ʧ������	*/
                                                                    
#define ADAS1000_FRAMES_FAULT					(1ul << 27)	/*	�����ڲ�����.
																	0 = ��������
																	1 = ����	*/
                                                                    
#define ADAS1000_FRAMES_PACE3_DETECTED			(1ul << 26)	/*	��3
																	0 = ��������
																	1 = ���������	*/
                                                                    
#define ADAS1000_FRAMES_PACE2_DETECTED			(1ul << 25)	/*	��2
																	0 = ��������
																	1 = ���������	*/
                                                                    
#define ADAS1000_FRAMES_PACE1_DETECTED			(1ul << 24)	/*	��1
																	0 = ��������
																	1 = ���������	*/
                                                                    
#define ADAS1000_FRAMES_RESPIRATION				(1ul << 23)	/*	0 = ���µĺ�������
																1 = �������ݸ��� */
                                                                
#define ADAS1000_FRAMES_LEADS_OFF_DETECTED		(1ul << 22)	/*	���DC��AC��ⶼʹ�ܣ����λ��ʾ���н������������
                                                                ֱ����������ġ��򡱽��
                                                                ���ֻʹ��AC����DC����ô��λ��ʾAC��DC���������
                                                                ���򡱽��
                                                                ��������һ�����������������󣬸�λ��1
																	0 = ���е�������
																	1 = һ������ർ������	*/
                                                                    
#define ADAS1000_FRAMES_DC_LEADS_OFF_DETECTED	(1ul << 21)	/*	0 = ���е�������
																1 = һ������ർ������	*/
                                                                
#define ADAS1000_FRAMES_ADC_OUT_OF_RANGE		(1ul << 20)	/*	0 = ADC�ڷ�Χ��
																1 = ADC ��� */

