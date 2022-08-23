from time import sleep
from colorama import init, Fore, Back, Style

init(convert=True)
c = "T  H  Ế  B  Ì  N  H "
for t in "Hello cđ muốn cái chai vô đầu tao":
    print(t, end="")
    sleep(0.1)
print()
for T in "NAY CÓ MÓN QUÀ ĐẶC BIỆT MUỐN CHO MÀY NÈ CĐ":
    print(T, end="")
    sleep(0.1)
print()
for j in range(0, 15):
    s = ""
    for i in range(0, 17):
        if j == 6:
            s += " *  *  *  *  *  T  H  Ế  B  Ì  N  H  *  *  *  *  *"
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
for t in "Sinh nhật vui vẻ nha, tao thật vui mừng vì thế giới này đã trả nợ được cho mày thêm một năm nữa":
    print(t, end="")
    sleep(0.1)
print()
for t in "Chúc mày mọi thứ tốt nhất, chúc mày kiếm được bồ để tết có người dẫn đi chơi nè, với lại bỏ cái thói bố láo lại, hỡi gặp tao là muốn cái chai lên đầu tao à, tao hiền như gì mà mày lại ăn hiếp tao :)))":
    print(t, end="")
    sleep(0.1)
