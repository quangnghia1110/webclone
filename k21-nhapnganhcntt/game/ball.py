import pygame, sys, random
from pygame.locals import *

WINDOWWIDTH = 400
WINDOWHEIGHT = 600
FPS = 60

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)

IMG_BALL = pygame.image.load('img2/ball.png')
IMG_WOOD = pygame.image.load('img2/wood.png')
IMG_BACKGROUND = pygame.image.load('img2/background.png')
IMG_FRAME = pygame.image.load('img2/frame.png')
IMG_THORN = pygame.image.load('img2/thorn.png')
IMG_HEART = pygame.image.load('img2/heart.png')
IMG_BACKBUTTON = pygame.image.load('img2/backButton.png')
IMG_PLAYBUTTON = pygame.image.load('img2/playButton.png')
IMG_REPLAYBUTTON = pygame.image.load('img2/replayButton.png')
IMG_QUITBUTTON = pygame.image.load('img2/quitButton.png')
IMG_HIGHLIGHT = pygame.image.load('img2/highlight.png')
IMG_H_START = pygame.image.load('img2/headingStart.png')
IMG_H_GAMEOVER = pygame.image.load('img2/headingGameover.png')


X_MARGIN = 10
Y_MARGIN = 30
GRAVITY = 0.1

BALL_RADIUS = 10

WOOD_DISTANCE = 120
WOOD_WIDTH = 100
WOOD_HEIGHT = 20

pygame.init()
pygame.display.set_caption('BALL')
FPSCLOCK = pygame.time.Clock()
DISPLAYSURF = pygame.display.set_mode((WINDOWWIDTH, WINDOWHEIGHT))

class Button():
    def __init__(self, x, y, width, height, img):
        self.x = x
        self.y = y
        self.width = width
        self.height = height
        self.choose = False
        self.img = img
    
    def draw(self, mouseXY):
        if self.x <= mouseXY[0] <= self.x + self.width and self.y <= mouseXY[1] <= self.y + self.height:
            self.choose = True
            DISPLAYSURF.blit(self.img, (self.x, self.y))
            DISPLAYSURF.blit(IMG_HIGHLIGHT, (self.x, self.y))
        else:
            self.choose = False
            DISPLAYSURF.blit(self.img, (self.x, self.y))


class Ball():
    def __init__(self, x, y):
        self.x = int(x)
        self.y = int(y)
        self.h_speed = 2
        self.v_speed = 0
        self.press = False
        self.not_move = False
        self.img = IMG_BALL
    
    def update(self, keyright, keyleft):
        self.y += int(self.v_speed + 0.5*GRAVITY)
        self.v_speed += GRAVITY
        if self.not_move == False:
            if self.press == True:
                self.h_speed += 0.4
            if (keyright == True):
                self.x += int(self.h_speed)
                self.press = True
            elif (keyleft == True):
                self.x -= int(self.h_speed)
                self.press = True
            else:
                self.press == False
                self.h_speed = 2
        if self.y + BALL_RADIUS < WINDOWHEIGHT - Y_MARGIN:
            self.not_move = False
        
        if self.x - BALL_RADIUS < X_MARGIN:
            self.x = int(X_MARGIN + BALL_RADIUS)
        if self.x + BALL_RADIUS > WINDOWWIDTH - X_MARGIN:
            self.x = int(WINDOWWIDTH - X_MARGIN - BALL_RADIUS)
    def draw(self):
        DISPLAYSURF.blit(self.img, (int(self.x - BALL_RADIUS), int(self.y - BALL_RADIUS)))

class Woods():
    def __init__(self):
        self.w_list = []
        self.speed = 3
        self.change = False
        for i in range(6):
            x = random.randrange(X_MARGIN, WINDOWWIDTH - X_MARGIN - WOOD_WIDTH, 20)
            y = WINDOWHEIGHT - Y_MARGIN + i*WOOD_DISTANCE
            self.w_list.append([x, y])
        self.img = IMG_WOOD
    
    def update(self):
        self.speed += 0.0002
        for i in range(6):
            self.w_list[i][1] -= int(self.speed)
        if self.w_list[0][1] + WOOD_HEIGHT < 0:
            x = random.randrange(X_MARGIN, WINDOWWIDTH - X_MARGIN - WOOD_WIDTH, 20)
            y = self.w_list[5][1] + WOOD_DISTANCE
            self.w_list.pop(0)
            self.w_list.append([x, y])
            self.change = True
        else:
            self.change = False
    
    def draw(self):
        for i in range(6):
            DISPLAYSURF.blit(self.img, (int(self.w_list[i][0]), int(self.w_list[i][1])))


class Thorn():
    def __init__(self):
        self.x_thorn = None
        self.y_thorn = None
        self.img = IMG_THORN
    
    def update(self, woods):
        if self.y_thorn != None and self.y_thorn < 0:
            self.x_thorn = None
            self.y_thorn = None

        if self.x_thorn == None:
            r = random.randint(1, 3)
            if r != 1:
                x = random.randrange(X_MARGIN, WINDOWWIDTH - X_MARGIN - WOOD_WIDTH, 20)
                if x + WOOD_WIDTH + BALL_RADIUS*2 < woods.w_list[5][0] or x > woods.w_list[5][0] + WOOD_WIDTH + BALL_RADIUS*2:
                    self.x_thorn = x
                    self.y_thorn = woods.w_list[5][1]
        else:
            self.y_thorn -= int(woods.speed)
    def draw(self):
        if self.x_thorn != None:
            DISPLAYSURF.blit(self.img, (int(self.x_thorn), int(self.y_thorn)))
    



def isCollision(ball, woods):
    for i in range(6):
        if ball.y + BALL_RADIUS > woods.w_list[i][1] and ball.y - BALL_RADIUS < woods.w_list[i][1] and ball.x + BALL_RADIUS > woods.w_list[i][0] and ball.x - BALL_RADIUS < woods.w_list[i][0] + WOOD_WIDTH:
            return i
    return -1

class Heart():
    def __init__(self):
        self.heart = 6
        self.free_heart = None
        self.x = None
        self.y = None
        self.img = IMG_HEART
    
    def make_heart(self, woods):
        if self.free_heart == None:
            r = random.randint(0, 5)
            if r == 0:
                self.free_heart = random.randint(6, 15)
        else:
            if woods.change == True:
                self.free_heart -= 1
            if self.free_heart < 0:
                self.free_heart = None


    def update(self, die, ball, woods):
        if die == True:
                self.heart -= 1

        if self.free_heart != None and self.free_heart < 6:
            self.x = (woods.w_list[self.free_heart][0]*2 + WOOD_WIDTH)/2 - 10
            self.y = woods.w_list[self.free_heart][1] - 20
            if ball.x + BALL_RADIUS > self.x and ball.x - BALL_RADIUS < self.x + 20 and ball.y - BALL_RADIUS < self.y + 20 and ball.y + BALL_RADIUS > self.y:
                self.heart += 1
                self.free_heart = None

        if self.heart > 6:
            self.heart = 6
        
    
    def draw_heart(self):
        for i in range(self.heart):
            DISPLAYSURF.blit(self.img, (int(10 + i*30), 575))
    def draw_heart_free(self):
        if self.free_heart != None and self.free_heart < 6:
            DISPLAYSURF.blit(self.img, (int(self.x), int(self.y)))

class Score():
    def __init__(self):
        self.score = 0
    def update(self, speed):
        self.score += speed*0.02
    def draw(self):
        fontObj = pygame.font.SysFont('consolas', 25)
        textSurfaceScore = fontObj.render(str(int(self.score)), True, (0, 0, 0))
        DISPLAYSURF.blit(textSurfaceScore, (int(WINDOWWIDTH/2), int(WINDOWHEIGHT - Y_MARGIN + 5)))

def isDie(ball, thorn):
    if ball.not_move == True:
        return False
    if ball.y - BALL_RADIUS < Y_MARGIN:
        return True
    if ball.y - BALL_RADIUS > WINDOWHEIGHT - Y_MARGIN:
        return True
    if thorn.y_thorn != None:
        if ball.y + BALL_RADIUS > thorn.y_thorn and ball.y - BALL_RADIUS < thorn.y_thorn and ball.x + BALL_RADIUS > thorn.x_thorn and ball.x - BALL_RADIUS < thorn.x_thorn + WOOD_WIDTH:
            return True
    return False

class Scenes():
    def __init__(self):
        self.option = 0
    
    def gameStart(self):
        playButton= Button(WINDOWWIDTH/2 - 100, WINDOWHEIGHT/2, 200, 50, IMG_PLAYBUTTON)
        quitButton = Button(WINDOWWIDTH/2 - 100, WINDOWHEIGHT/2 + 100, 200, 50, IMG_QUITBUTTON)
        mouseXY = [0, 0]
        mouseClicked = False
        while True:
            for event in pygame.event.get():
                if event.type == QUIT or (event.type == KEYUP and event.key == K_ESCAPE):
                    pygame.quit()
                    sys.exit()
                elif event.type == MOUSEMOTION:
                    mouseXY = event.pos
                elif event.type == MOUSEBUTTONUP:
                    mouseXY = event.pos
                    mouseClicked = True

            DISPLAYSURF.blit(IMG_BACKGROUND, (0, 0))
            DISPLAYSURF.blit(IMG_FRAME, (0, 0))
            DISPLAYSURF.blit(IMG_H_START, (50, 150))
            playButton.draw(mouseXY)
            quitButton.draw(mouseXY)
            if mouseClicked == True:
                if playButton.choose == True:
                    self.option = 1
                    break
                elif quitButton.choose == True:
                    pygame.quit()
                    sys.exit()
            pygame.display.update()
            FPSCLOCK.tick(FPS)

    def gamePlay(self, score):
        score.score = 0
        woods = Woods()
        thorn = Thorn()
        ball = Ball(int((woods.w_list[0][0]*2 + WOOD_WIDTH)/2), int((woods.w_list[0][1] - BALL_RADIUS)))
        keyright = False
        keyleft = False
        index_collision = -1
        check_collision = -1
        not_check = -1
        heart = Heart()
        die  = False
        gameOver = False
        while not gameOver:
            for event in pygame.event.get():
                    if event.type == QUIT or (event.type == KEYUP and event.key == K_ESCAPE):
                        pygame.quit()
                        sys.exit()
                    if event.type == KEYDOWN:
                        if event.key == K_RIGHT:
                            keyright = True
                        if event.key == K_LEFT:
                            keyleft = True
                    if event.type == KEYUP:
                        keyright = False
                        keyleft = False
                
            DISPLAYSURF.blit(IMG_BACKGROUND, (0, 0))

                

                

            woods.update()
            ball.update(keyright, keyleft)
            thorn.update(woods)

            index_collision = isCollision(ball, woods)
            if index_collision == -1:
                not_check = check_collision
            else:
                if index_collision != not_check:
                    ball.y = int(woods.w_list[index_collision][1] - BALL_RADIUS)
                    ball.v_speed = 0
                check_collision = index_collision
            if woods.change == True:
                check_collision -= 1
                not_check -= 1

            die = isDie(ball, thorn)
            if die == True:
                ball.y = int(woods.w_list[5][1] - BALL_RADIUS)
                ball.x = int((woods.w_list[5][0]*2 + WOOD_WIDTH)/2)
                ball.not_move = True

            heart.make_heart(woods)
            heart.update(die, ball, woods)
            score.update(ball.v_speed)

            

            woods.draw()
            thorn.draw()
            ball.draw()
            heart.draw_heart_free()
            
            DISPLAYSURF.blit(IMG_FRAME, (0, 0))
            score.draw()
            heart.draw_heart()
            

            if heart.heart <= 0:
                gameOver = True
        

            pygame.display.update()
            FPSCLOCK.tick(FPS)
        self.option = 2
    
    def gameOver(self, score):
        replayButton = Button(WINDOWWIDTH/2 - 100, WINDOWHEIGHT/2, 200, 50, IMG_REPLAYBUTTON)
        backButton = Button(WINDOWWIDTH/2 - 100, WINDOWHEIGHT/2 + 100, 200, 50, IMG_BACKBUTTON)
        mouseXY = [0, 0]
        mouseClicked = False
        while True:
            for event in pygame.event.get():
                if event.type == QUIT or (event.type == KEYUP and event.key == K_ESCAPE):
                    pygame.quit()
                    sys.exit()
                elif event.type == MOUSEMOTION:
                    mouseXY = event.pos
                elif event.type == MOUSEBUTTONUP:
                    mouseXY = event.pos
                    mouseClicked = True

            DISPLAYSURF.blit(IMG_BACKGROUND, (0, 0))
            DISPLAYSURF.blit(IMG_FRAME, (0, 0))
            DISPLAYSURF.blit(IMG_H_GAMEOVER, (50, 150))
            score.draw()
            replayButton.draw(mouseXY)
            backButton.draw(mouseXY)

            if mouseClicked == True:
                if replayButton.choose == True:
                    self.option = 1
                    break
                elif backButton.choose == True:
                    self.option = 0
                    break

            
            pygame.display.update()
            FPSCLOCK.tick(FPS)

def main ():

    
    scene = Scenes()
    score = Score()
    while True:
        if scene.option == 0:
            scene.gameStart()
        elif scene.option == 1:
            scene.gamePlay(score)
        elif scene.option == 2:
            scene.gameOver(score)


if __name__ == "__main__":
    main()