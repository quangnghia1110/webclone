import tkinter as tk
 
root = tk.Tk()
image = tk.PhotoImage(file="vv.jbg")
label = tk.Label(image=image)
label.pack()
root.mainloop()