class C:
    def __init__(self):
        self.abc = self.A()
        self.xy = self.B()
    
    class A:
        def vvod1(self):
            self.a = int(input("a: "))
            self.b = int(input("b: "))
            self.c = int(input("c: "))
              
    class B:
        def vvod2(self, x, y):
            self.x = x
            self.y = y
            
    def sum(self):
        s = self.abc.a + self.abc.b + self.abc.c + self.xy.x + self.xy.y
        return s
    
    # def mult(self):
    #     m = self.abc.a * self.abc.b * self.abc.c * self.xy.x * self.xy.y
    #     return m

tmp = C()
# tmp1 = C()

tmp.A.vvod1(4, 2, 6,)
# tmp.B.vvod2(3, 6)

# tmp1.vvod1(1, 1 ,1)
# tmp1.vvod2(2, 9)

print("First:")
print("\tSum:", tmp.sum())
# print("\tMult:", tmp.mult())

# print("Second:")
# print("\tSum:", tmp1.sum())
# print("\tMult:", tmp1.mult())