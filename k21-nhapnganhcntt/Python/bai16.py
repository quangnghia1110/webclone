import tkinter as tk
import numpy as np

class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("21110559 - Bai 16")  
        self.geometry("330x250")   
        self.height = tk.IntVar()
        self.pullbar = tk.Scale(self,cursor='shuttle', length = 300, orient=tk.HORIZONTAL, showvalue=False,       
                                variable=self.height, command=self.pullbar_command ,bg= "blue" )   
        self.figure = tk.Canvas(self, bd = 3, height = 200, width = 300,relief = tk.SUNKEN) 
        
        self.figure.place(x = 10, y = 30)
        self.pullbar.place(x = 10, y = 10)

    def DrawGraphs(self, height):
        height = int(height)
        Width = self.figure.winfo_width()-1
        Height = self.figure.winfo_height()-1
        a = np.arange(0, Width, 5)   
        a1 = a * (11* np.pi) / Width     
        b = -height * np.sin(a1) + Height/2

        Temp = []
        for i in range (0, len(a)):
            Temp += [a[i], b[i]]
        self.figure.delete('all')
        self.figure.create_line(Temp, fill = "black")        
        self.figure.update()

    def pullbar_command(self, height):
        height = self.height.get()
        self.DrawGraphs(height)

if __name__ == "__main__":
    app = App()
    app.mainloop()