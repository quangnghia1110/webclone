import tkinter as tk
from tkinter import filedialog
from tkinter.ttk import *
from tkinter import ttk
from pytube import YouTube
class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('Youtube Download')
        self.geometry('480x115')
        self.resizable(False, False)
        self.configure(bg='white')
        self.link=tk.StringVar()
    
        lbl_url= tk.Label(self,text='Youtube url',bg='white')
        lbl_download=tk.Label(self,text='Download Type',bg='white')
        self.ent_nhapa=tk.Entry(self,justify=tk.LEFT,width=55,relief = tk.SOLID,textvariable=self.link)
        ent_nhapb=tk.Entry(self,justify=tk.LEFT,width=30,relief = tk.SOLID)
        btn_brower=tk.Button(self,width=8,text='Brower',command=self.btn_brower_click)
        btn_download=tk.Button(self,width=62,text='Download',command=self.btn_download_click)
        btn_xoa =tk.Button(self, text='Xoá',width=8,command = self.btn_xoa_click)
       
        lbl_url.place(x=20,y=10)
        lbl_download.place(x=20,y=40)
        self.ent_nhapa.place(x=130,y=10)
        ent_nhapb.place(x=130,y=40)
        btn_brower.place(x=397,y=38)
        btn_download.place(x=20,y=70)
        btn_xoa.place(x=320,y=38)

        options=["High Quality Video","Low Quality Video"]
        self.cbb_type = ttk.Combobox(self,value=options,width=27)
        self.cbb_type.current(0)
        self.cbb_type.place(x=130,y=40)
    direct = ""
    def btn_brower_click(self):
        global direct
        direct = filedialog.askdirectory()
        self.ent_nhapa.set(direct)
        if len(direct)==0:
            msb_path = messagebox.showwarning('warning','please insert path')
        else:
            pass

    def btn_download_click(self):
        url = YouTube(str(self.link.get()))
        video = url.streams.first().download()
    def btn_xoa_click(self):
        self.ent_nhapa.delete(0, tk.END)
    
if __name__ == "__main__":
    app = App()
    app.mainloop()
