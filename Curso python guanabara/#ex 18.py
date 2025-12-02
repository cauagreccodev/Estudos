#ex 18
import math

ang=float(input('dê um valor em °: '))
seno=math.sin(math.radians(ang))
cos=math.cos(math.radians(ang))
tan=math.tan(math.radians(ang))

print('o valor do seno é de {:.2f}, o valor de cosseno é {:.2f} e a tangente é {:.2f}'.format(seno,cos,tan))