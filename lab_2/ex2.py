class A:
    def vvod1(self, a, b , c):
        self.a = a
        self.b = b 
        self.c = c

class B:
    def vvod2(self, x, y):
        self.x = x
        self.y = y

class C(A, B):
    def sum(self):
        s = self.a + self.b + self.c + self.x + self.y
        return s
    def mult(self):
        m = self.a * self.b * self.c * self.x * self.y
        return m

tmp = C()
tmp1 = C()

tmp.vvod1(4, 2, 6,)
tmp.vvod2(3, 6)

tmp1.vvod1(1, 1 ,1)
tmp1.vvod2(2, 9)

print("First:")
print("\tSum:", tmp.sum())
print("\tMult:", tmp.mult())

print("Second:")
print("\tSum:", tmp1.sum())
print("\tMult:", tmp1.mult())



