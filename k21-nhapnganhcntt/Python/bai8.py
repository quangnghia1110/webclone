import tkinter.ttk as ttk
from tkinter import LEFT, messagebox as msg
import tkinter as tk
from tkinter.constants import BOTH, BOTTOM, HORIZONTAL, RIGHT, S, VERTICAL, W, X, Y, YES
from turtle import left
from PIL import ImageTk, Image
from tkinter import PhotoImage, Scrollbar, filedialog
class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("21110559 - Bai 8")
        self.geometry('515x430')
        self.fileName =''
        style=ttk.Style()
        style.theme_use('clam')
        self.menu = tk.Menu(self, tearoff=0)
        self.menu.add_command(label="Open", command = self.openImage)
        self.menu.add_command(label="Clear", command = self.clear_image_click)
        self.menu.add_command(label="Exit", command = self.exit_click)

        self.btn_file = ttk.Button(self, text ='File')
        self.canvas = tk.Canvas(self, width=540, height=520, bg = 'white')

        self.frame = tk.Frame(self.canvas)
        
        self.canvas.create_window((0, 0), window=self.frame, anchor=tk.NW)

        self.btn_file.bind("<Button-1>", self.show_popup)
        groupDisplayInfoImage = tk.LabelFrame(self, borderwidth=0, bd=0, highlightthickness=0)
        groupDisplayInfoImage.pack( expand=YES, fill=tk.X)
        self.btn_file.place(x = 0, y =0)
        self.labelSize = tk.Label(groupDisplayInfoImage, text="Size", pady=10, padx=8)
        self.labelSize.pack(side=RIGHT)
        self.labelFileName = tk.Label(groupDisplayInfoImage ,text="File name", padx=10, pady=10)
        self.labelFileName.pack(side= LEFT, fill= 'both')

        self.imageFrame = tk.Canvas(self, borderwidth=0, width=500, height=300)
        self.imageFrame.pack(expand=YES, fill=BOTH)
        self.imageFrame.bind('<Configure>', self.resize)

        self.rowconfigure(0, weight=1)
        self.columnconfigure(0, weight=1)
        self.bind("<Configure>", self.resize)
        self.update_idletasks()
        self.minsize(self.winfo_width(), self.winfo_height())
        

    def resize(self,event):
       self.image = Image.open(self.fileName)
       self.imageSize = self.image.resize( Image.ANTIALIAS)
       self.imageDisplay = ImageTk.PhotoImage(self.imageSize)
       self.imageFrame.itemconfig(self.imagetk, image=self.imageDisplay)
    
    def openFileName(self):
        self.fileName = filedialog.askopenfilename(title='image need')
    def openImage(self):
        self.openFileName()
        self.image = Image.open(self.fileName)
        width, hieght = self.image.size
        realSize = "{} x {}".format(width,hieght)
        self.labelSize['text'] = realSize
        self.imageSize = self.image.resize((500, 300), Image.ANTIALIAS)
        self.imageDisplay = ImageTk.PhotoImage(self.imageSize)
        self.imagetk = self.imageFrame.create_image(0,0, image=self.imageDisplay, anchor=tk.NW, tags='image')
        self.labelFileName['text'] = self.fileName


    def show_popup(self, event):
        self.menu.post(event.x_root, event.y_root)

    def clear_image_click(self):
        self.canvas.delete("all")

    def exit_click(self):
        answer = msg.askquestion('Question','Do you want to exit ?')
        if answer == 'Yes':
            self.destroy()

if __name__ == "__main__":
    app = App()
    app.mainloop()