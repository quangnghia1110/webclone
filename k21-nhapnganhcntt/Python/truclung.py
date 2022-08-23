from time import sleep
from colorama import init, Fore, Back, Style

init(convert=True)
c = "N G H Ĩ A"
for t in "Hello MN":
    print(t, end="")
    sleep(0.1)
print()
for T in "Một trò thú vị":
    print(T, end="")
    sleep(0.1)
print()
for j in range(0, 15):
    s = ""
    for i in range(0, 17):
        if j == 6:
            s += " *  *  *  *  *  *  N  G  H  Ĩ  A  *  *  *  *  *  *"
            break
        if (
            i + j < 2
            or i - j > 14
            and j < 2
            or i - j > 4
            and j < 4
            and i + j < 12
            and i < 12
            or j > 6
            and j - i > 6
            or i + j > 22
        ):
            s = s + "   "
        else:
            s = s + " * "
    for l in s:
        if l in c:
            print(Fore.GREEN + l, flush=True, end="")
            sleep(0.02)
        else:
            print(Fore.RED + l, flush=True, end="")
            sleep(0.02)
    print()
for t in "Hết rồi á":
    print(t, end="")
    sleep(0.1)
print()

