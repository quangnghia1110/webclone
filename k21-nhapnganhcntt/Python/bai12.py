import tkinter as tk

class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("21110559 - bai 12")
        self.geometry("500x500")
        self.khung_hinh = tk.Canvas(self, width=400, height=1000)
        self.khung_hinh.pack(fill=tk.BOTH)
        self.khung_hinh.bind("<Configure>", self.draw_oval)

    def draw_oval(self, event):
        W = self.khung_hinh.winfo_width()-1
        H = self.khung_hinh.winfo_height()-1
        self.khung_hinh.delete('all')
        self.khung_hinh.create_oval(0, 0, W, H, outline = 'white', fill = 'gray')
        self.khung_hinh.update()

if __name__ == "__main__":
    app = App()
    app.mainloop()