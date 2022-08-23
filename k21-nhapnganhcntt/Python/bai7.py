import tkinter as tk
from turtle import color, width
import numpy as np

class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('21110559-Bai 7') 
        self.geometry('430x340')   
        self.vitri = 10000
        self.cvs_detail = tk.Canvas(self, relief = tk.SUNKEN, bg = 'white',  
                    bd = 3, width = 315, height = 315)
        btn_start = tk.Button(self, text = 'Bat dau', bg = 'DodgerBlue3',fg= 'white', width = 8,
                    command = self.start)
        btn_stop = tk.Button(self, text = 'Tam ngung', bg = 'DodgerBlue3',fg= 'white', width = 8,
                    command = self.stop)


        self.cvs_detail.place(x = 5, y = 5)         
        btn_start.place(x = 340, y = 60, height= 50)    
        btn_stop.place(x = 340, y = 200, height= 50)


    def hinh_tron(self):   
        Radius= 150            
        D = 1000                
        alpha = 2*np.pi/D         
        data = []
        xz = (self.cvs_detail.winfo_width()-2) // 2
        yz = (self.cvs_detail.winfo_height()-2) // 2
        for i in range(0, D):
            theta = i*alpha
            x = Radius*np.cos(theta)
            y = Radius*np.sin(theta)
            data.append(xz + x)
            data.append(yz - y)
        self.cvs_detail.create_line(data,fill= "blue", width = 1.5)     

    def start(self):
        self.Okee = True
        while True and self.Okee:
            for i in range(self.vitri, -1, -1):
                if self.Okee == False:
                    self.vitri = i
                    break
                if i % 5 == 0:
                    Radius= 150
                    D = 10000
                    alpha = 2*np.pi/D
                    xz = (self.cvs_detail.winfo_width()-2) // 2
                    yz = (self.cvs_detail.winfo_height()-2) // 2
                    theta = i*alpha
                    x = Radius*np.cos(theta)
                    y = Radius*np.sin(theta)
                    self.cvs_detail.update()
                    self.cvs_detail.delete('all')
                    self.hinh_tron()
                    self.cvs_detail.create_rectangle(x+xz-4, y+yz-4, xz+x+4, y+yz+4, fill = "red", outline = 'white')       
                                                   
    def stop (self):
        self.Okee = False

if __name__ == "__main__":
    app = App()
    app.mainloop()