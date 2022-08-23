import tkinter as tk
class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('Bai Thuc Hanh Mouse')
        self.geometry('405x405')

        self.DIVISION = 5
        self.state = []
        for i in range(0, self.DIVISION):
            line = []
            for j in range(0, self.DIVISION):
                line.append(False)
            self.state.append(line)

        self.cvs_figure = tk.Canvas(self, bg = 'white', relief = tk.SUNKEN, 
                                    bd = 1, width = 400, height = 400)
        self.cxBlock = 396 // self.DIVISION
        self.cyBlock = 396 // self.DIVISION
        dx = 4
        dy = 4
        for i in range(0, self.DIVISION):
            for j in range(0, self.DIVISION):
                self.cvs_figure.create_rectangle(dx + i*self.cxBlock, dy + j*self.cyBlock, 
                                    dx + (i+1)*self.cxBlock, dy + (j+1)*self.cyBlock, 
                                    fill = 'white', outline = 'black', width = 3)

        self.cvs_figure.bind("<Button-1>", self.print_event)
        self.cvs_figure.place(x = 0, y = 0)
        self.cvs_figure.update()

    def print_event(self, event):
        x = event.x // self.cxBlock
        y = event.y // self.cyBlock
        if x < self.DIVISION and y < self.DIVISION:
            self.state[x][y] = not self.state[x][y]
            dx = 4
            dy = 4
            for i in range(0, self.DIVISION):
                for j in range(0, self.DIVISION):
                    self.cvs_figure.create_rectangle(dx + i*self.cxBlock, dy + j*self.cyBlock, 
                                        dx + (i+1)*self.cxBlock, dy + (j+1)*self.cyBlock, 
                                        fill = 'white', outline = 'black', width = 3)
                    if self.state[i][j] == True:
                        self.cvs_figure.create_line(dx + i*self.cxBlock, dy + j*self.cyBlock, 
                                        dx + (i+1)*self.cxBlock, dy + (j+1)*self.cyBlock, 
                                        fill = 'black', width = 3)
                        self.cvs_figure.create_line(dx + (i+1)*self.cxBlock, dy + j*self.cyBlock, 
                                        dx + i*self.cxBlock, dy + (j+1)*self.cyBlock, 
                                        fill = 'black', width = 3)



if __name__ == "__main__":
    app = App()
    app.mainloop()
