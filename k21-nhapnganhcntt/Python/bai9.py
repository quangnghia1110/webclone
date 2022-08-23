import tkinter as tk
import tkinter.filedialog as fd
from tkinter import messagebox as msg
class App(tk.Tk):
    def __init__(self):
        super().__init__()
        menu = tk.Menu(self)
        file_menu = tk.Menu(menu, tearoff=0)
        file_menu.add_command(label="Open Image",command=self.open_click)
        file_menu.add_command(label="Clear Image",command=self.clear_click)
        file_menu.add_separator()
        file_menu.add_command(label="Exit",command=self.out_click)
        menu.add_cascade(label="File", menu=file_menu)
        self.config(menu=menu)     
        self.scroll_x = tk.Scrollbar(self, orient=tk.HORIZONTAL)
        self.scroll_y = tk.Scrollbar(self, orient=tk.VERTICAL)
        self.canvas = tk.Canvas(self, width=300, height=100,
        xscrollcommand=self.scroll_x.set,
        yscrollcommand=self.scroll_y.set)
        self.scroll_x.config(command=self.canvas.xview)
        self.scroll_y.config(command=self.canvas.yview)
        self.frame = tk.Frame(self.canvas)
        self.canvas.create_window((0, 0), window=self.frame,
        anchor=tk.NW)
        self.canvas.grid(row=0, column=0, sticky="nswe")
        self.scroll_x.grid(row=1, column=0, sticky="we")
        self.scroll_y.grid(row=0, column=1, sticky="ns")
        self.rowconfigure(0, weight=1)
        self.columnconfigure(0, weight=1)
        self.bind("<Configure>", self.resize)
        self.update_idletasks()
        self.minsize(self.winfo_width(), self.winfo_height())
        self.protocol('WM_DELETE_WINDOW', self.out_click)


    def resize(self, event):
        region = self.canvas.bbox(tk.ALL)
        self.canvas.configure(scrollregion=region)

    def open_click(self):
        filetypes = (("Images", "*.gif *.png"),)
        pic_name = fd.askopenfilename(title="Select Picture", initialdir="/", filetypes=filetypes)
        self.image = tk.PhotoImage(file=pic_name)
        self.lbl_pic = tk.Label(self.frame, bg = 'black',image=self.image)
        self.lbl_pic.grid(row=0, column=0)
        self.canvas.update_idletasks()
        self.frame.update_idletasks()

    def clear_click(self):
        self.lbl_pic.destroy()
        self.lbl_pic=tk.Label(self.frame)
        self.canvas.update()  
    def out_click(self):
        tra_loi = msg.askquestion('Question', 'Ban co muon thoat khong?')
        if tra_loi == 'yes':
            self.destroy()
if __name__ == "__main__":
    app = App()
    app.mainloop()
    


    