class student:
    def __init__(self,rno,name):
        self.rno=rno
        self.name=name
    def display(self):
        print(self.name,self.rno)
s1=student('25',"ssd")
s1.display()