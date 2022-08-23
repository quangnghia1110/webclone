import tkinter as tk
import numpy as np
class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('21110559 - Bai 14')
        self.geometry('695x615')
        self.resizable(False,False)
        self.cvs_figure=tk.Canvas(self, relief= tk.SUNKEN,bg='white',bd=1,width=600,height=600)
        btn_tron=tk.Button(self,text='Tròn',width=8,command=self.btn_tron_click)
        btn_sin=tk.Button(self,text='Sin',width=8,command=self.btn_sin_click)
        btn_parabol=tk.Button(self,text='Parabol',width=8,command=self.btn_parabol_click)
        btn_polygon=tk.Button(self,text='Đa giác',width=8,command=self.btn_polygon_click)
        btn_limacon=tk.Button(self,text='Limacon',width=8,command=self.btn_limacon_click)
        btn_cardioid=tk.Button(self,text='Cardioid',width=8,command=self.btn_cardioid_click)
        btn_3la=tk.Button(self,text='3Leaves',width=8,command=self.btn_3la_click)
        btn_bezier=tk.Button(self,text='Bezier',width=8,command=self.btn_bezier_click)
        self.cvs_figure.place(x=5,y=5)
        btn_tron.place(x=620,y=6)
        btn_sin.place(x=620,y=36)
        btn_parabol.place(x=620,y=66)
        btn_polygon.place(x=620,y=96)
        btn_limacon.place(x=620,y=126)
        btn_cardioid.place(x=620,y=156)
        btn_3la.place(x=620,y=186)
        btn_bezier.place(x=620,y=216)
    
    def btn_tron_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-4
        H=self.cvs_figure.winfo_height()-4
        xc=W//2
        yc=H//2
        r=100
        n=50
        dx=2*r/n
        m=n//2
        data =[]
        for i in range (-m,m+1):
            x=i*dx
            y=np.sqrt(r**2-x**2)
            data.append(xc+x)
            data.append(yc-y)
        for i in range (m-1,-m-1,-1):
            x=i*dx
            y=-np.sqrt(r**2-x**2)
            data.append(xc+x)
            data.append(yc-y)
        self.cvs_figure.create_line(data)
    def btn_sin_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-4
        H=self.cvs_figure.winfo_height()-4
        n=50
        dx=10*2*np.pi/n
        data=[]
        for i in range(0,n+1):
            x=i*dx
            y=np.sin(x)
            p=W*x/(10*2*np.pi)
            q=(H-4)*(1-y)/2 + 4

            data.append(p)
            data.append(q)
        self.cvs_figure.create_line(data)
    def btn_parabol_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-4
        H=self.cvs_figure.winfo_height()-4
        n=50
        dx=4/n
        m=n//2
        data=[]
        for i in range(-m,m+1):
            x=i*dx
            y=x**2
            p=W*(x+4)/8
            q=H*(4-y)/8
            data.append(p)
            data.append(q)
        self.cvs_figure.create_line(data)
    def btn_love_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-4
        H=self.cvs_figure.winfo_height()-4
        n=50
        dx=4/n
        m=n//2
        data=[]
        for i in range(-m,m+1):
            x=i*dx
            y=x**2
            p=W*(x+4)/8
            q=H*(4-y)/8
            data.append(p)
            data.append(q)
        self.cvs_figure.create_line(data)
    def btn_polygon_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-1
        H=self.cvs_figure.winfo_height()-1
        xc=W//2
        yc=H//2
        n=10
        dtheta=2*np.pi/n
        theta=[]
        for i in range(0,n+1):
            theta.append(dtheta*i)
        data=[]
        r=100
        for i  in range(0,n+1):
            x=r*np.cos(theta[i])
            y=r*np.sin(theta[i])
            data.append(xc+x)
            data.append(yc-y)
        self.cvs_figure.create_line(data)
    def btn_limacon_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-1
        H=self.cvs_figure.winfo_height()-1
        xc=W//2
        yc=H//2
        n=50
        dtheta=2*np.pi/n
        theta=[]
        for i in range(0,n+1):
            theta.append(dtheta*i)
        data=[]
        a=100
        b=50
        for i  in range(0,n+1):
            r=a*np.cos(theta[i])+b
            x=r*np.cos(theta[i])
            y=r*np.sin(theta[i])
            data.append(xc+x)
            data.append(yc-y)
        self.cvs_figure.create_line(data)
    def btn_cardioid_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-1
        H=self.cvs_figure.winfo_height()-1
        xc=W//2
        yc=H//2
        n=50
        dtheta = 2*np.pi/n
        theta=[]
        for i in range(0,n+1):
            theta.append(i*dtheta)
        data=[]
        a=100
        b=100
        for i in range(0,n+1):
            r=a*np.cos(theta[i])+b

            x=r*np.cos(theta[i])
            y=r*np.sin(theta[i])
            data.append(xc+x)
            data.append(yc-y)
        self.cvs_figure.create_line(data)
    def btn_3la_click(self):
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-1
        H=self.cvs_figure.winfo_height()-1
        xc=W//2
        yc=H//2
        n=50
        dtheta=2*np.pi/n
        theta=[]
        for i in range(0,n+1):
            theta.append(dtheta*i)
        data=[]
        a=100
        for i  in range(0,n+1):
            r=a*np.cos(3*theta[i])
            x=r*np.cos(theta[i])
            y=r*np.sin(theta[i])
            data.append(xc+x)
            data.append(yc-y)
        self.cvs_figure.create_line(data)
    def btn_bezier_click(self):
        def giai_thua(n):
            result=1
            for i in range (2,n+1):
                result=result*i
            return result
        def to_hop(L,K):
            result=giai_thua(L)/(giai_thua(K)*giai_thua(L-K))
            return result
        x=[100,200,300,400,500]
        y=[400,250,200,250,400]
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-4
        H=self.cvs_figure.winfo_height()-4
        xc=W//2
        yc=H//2
        L=len(x)-1
        for K in range(0,L+1):
            self.cvs_figure.create_rectangle(x[K]-5,y[K]-5,x[K]+5,y[K]+5,fill='red',outline='red')
        n=100
        dt=1/n
        data=[]
        for i in range (0,n+1):
            t=i*dt
            p=0
            q=0
            for K in range (0,L+1):
                p=p+x[K]*to_hop(L,K)*np.power(1-t,L-K)*np.power(t,K)
                q=q+y[K]*to_hop(L,K)*np.power(1-t,L-K)*np.power(t,K)
            data.append(p)
            data.append(q)
        self.cvs_figure.create_line(data)
    def open_file_PLY(self):
        f=open('cube.ply','r')
        data=f.readlines()
        f.close()
        s=data[2][:-1]
        s=s.split()
        n_vertex=int(s[2])
        s=data[6][:-1]
        s=s.split()
        n_face=int(s[2])
        k=9
        for n in range(9,9+n_vertex):
            s=data[n][:-1]
            s=s.split()
            temp=[]
            x=float(s[0])
            y=float(s[1])
            z=float(s[2])
            temp.append(x)
            temp.append(y)
            temp.append(z)
            self.vertex.append(temp)
        for n in range(9+n_vertex,9+n_vertex+n_face):
            s=data[n][:-1]
            s=s.split()
            temp=[]
            for item in s:
                temp.append(int(item))
            self.face.append(temp)
    def btn_draw_ply_click(self):
        self.open_file_PLY()
        self.cvs_figure.delete('all')
        self.cvs_figure.update()
        W=self.cvs_figure.winfo_width()-1
        H=self.cvs_figure.winfo_height()-1
        xc=W//2
        yc=H//2
        n_face=len(self.face)
        L1=0.5
        phi=np.pi/4
        scale=150
        for n in range (0,n_face):
            k=self.face[n][0]
            temp=[]
            for i in range (1,k+1):
                x=self.vertex[self.face[n][i]][0]*scale
                y=self.vertex[self.face[n][i]][1]*scale
                z=self.vertex[self.face[n][i]][2]*scale
                xp=x-z*L1*np.cos(phi)
                yp=y-z*L1*np.sin(phi)
                temp.append(xc+xp)
                temp.append(yc-yp)
            x=self.vertex[self.face[n][1]][0]*scale
            y=self.vertex[self.face[n][1]][1]*scale
            z=self.vertex[self.face[n][1]][2]*scale
            xp=x-z*L1*np.cos(phi)
            yp=y-z*L1*np.sin(phi)
            temp.append(xc+xp)
            temp.append(yc-yp)
            self.cvs_figure.create_line(temp)
    
if __name__ == "__main__":
    app = App()
    app.mainloop()