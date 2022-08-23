import tkinter as tk
from tkinter.ttk import tclobjs_to_py
from tkinter.constants import BOTH, INSIDE, PROJECTING, RIDGE, S, SUNKEN, Y, YES


class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('21110559 - Bai 10')      
        self.radius = tk.DoubleVar()
        self.radius.set(0)

        tk.Label(self, text='Nhap ban kinh', fg ="Black").grid(row=1, column=1, padx=9, pady=10, sticky=tk.W)     
        tk.Entry(self, width=13, textvariable=self.radius).grid(row=1, column=2, padx=9, pady=10, sticky=tk.W)
        tk.Button(self, text='Ve hinh', width=10, command=self.OpenNewWindow, fg= "black",bg="red").grid(row=2, column=2, padx=8, pady=10,)

   
    def OpenNewWindow(self):    
        def quitNewOne():
            newOne.destroy()
        newOne = tk.Toplevel(self)
        DrawWidthSquare = self.Draw()       

        newOne.title('Hinh tron')       
        painter = tk.Canvas(newOne, width=DrawWidthSquare, height=DrawWidthSquare , relief=SUNKEN, borderwidth=2, highlightthickness=0)
        painter.pack(expand=YES, fill=BOTH, pady=8, padx=8)
        painter.create_oval(40, 40, DrawWidthSquare - 40, DrawWidthSquare - 40, fill="green", outline='white') 
        
        tk.Button(newOne, text="Dong", width=10, command=quitNewOne).pack(pady=8, padx=8)


    def Draw(self):
        DrawWidthSquare = self.radius.get() * 2 + 70    
        return DrawWidthSquare


if __name__ == '__main__':
    app = App()
    app.mainloop()