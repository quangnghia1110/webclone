import tkinter as tk
import numpy as np

def giai_thua(n):
    result = 1
    for i in range(2, n+1):
        result = result*i
    return result

def to_hop(L, k):
    result = giai_thua(L)/(giai_thua(k)*giai_thua(L-k))
    return result


class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.flag_ve_diem = True
        self.x = []
        self.y = []

        self.title("Bai Thuc Hanh 16")
        self.geometry('620x620')
        self.cvs_figure = tk.Canvas(self, relief = tk.SUNKEN, bg = 'white', bd = 1,
                               width = 600, height = 600)
        self.cvs_figure.bind("<Button-1>", self.ve_diem)
        self.cvs_figure.bind("<Button-3>", self.ve_bezier)
        self.cvs_figure.bind("<B1-Motion>", self.dieu_chinh_bezier)
        self.cvs_figure.place(x = 5, y = 5)
        self.cvs_figure.update()

    def dieu_chinh_bezier(self, event):
        self.flag_ve_diem = False
        px = event.x
        py = event.y
        L = len(self.x) - 1
        
        for i in range(0, L+1):
            if ((self.x[i]-5) <= px and px <= (self.x[i]+5)) and ((self.y[i]-5) <= py and py <= (self.y[i]+5)):
                self.x[i] = px
                self.y[i] = py
                break
        x = self.x
        y = self.y    
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W = self.cvs_figure.winfo_width() - 1
        H = self.cvs_figure.winfo_height() - 1
        xc = W // 2
        yc = H // 2
        L = len(x) - 1
        for k in range(0, L+1):
            self.cvs_figure.create_rectangle(x[k]-5,y[k]-5,x[k]+5,y[k]+5, 
                                             fill = 'red', outline = 'red')
        n = 100
        dt = 1/n
        data = []
        for i in range(0, n+1):
            t = i*dt
            p = 0
            q = 0
            for k in range(0, L+1):
                p = p + x[k]*to_hop(L,k)*np.power(1-t,L-k)*np.power(t,k)
                q = q + y[k]*to_hop(L,k)*np.power(1-t,L-k)*np.power(t,k)
            data.append(p)
            data.append(q)
        self.cvs_figure.create_line(data)


    def ve_bezier(self, event):
        self.flag_ve_diem = False
        x = self.x
        y = self.y    
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W = self.cvs_figure.winfo_width() - 1
        H = self.cvs_figure.winfo_height() - 1
        xc = W // 2
        yc = H // 2
        L = len(x) - 1
        for k in range(0, L+1):
            self.cvs_figure.create_rectangle(x[k]-5,y[k]-5,x[k]+5,y[k]+5, 
                                             fill = 'red', outline = 'red')
        n = 100
        dt = 1/n
        data = []
        for i in range(0, n+1):
            t = i*dt
            p = 0
            q = 0
            for k in range(0, L+1):
                p = p + x[k]*to_hop(L,k)*np.power(1-t,L-k)*np.power(t,k)
                q = q + y[k]*to_hop(L,k)*np.power(1-t,L-k)*np.power(t,k)
            data.append(p)
            data.append(q)
        self.cvs_figure.create_line(data)

    def ve_diem(self, event):
        x = event.x
        y = event.y
        if self.flag_ve_diem == True:
            self.x.append(x)
            self.y.append(y)
            self.cvs_figure.create_rectangle(x-5,y-5,x+5,y+5, fill = 'red', outline = 'red')

if __name__ == "__main__":
    app = App()
    app.mainloop()
