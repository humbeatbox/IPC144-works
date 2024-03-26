import pyautogui as gui
import time

#pause 5 sec
print('Click the terminal console!!')
time.sleep(5)

with open('tarInput.txt', 'r') as tst:
    time.sleep(1)
    tst = tst.readlines()
    for i in range(0, len(tst), 1):
        print(tst[i])
        gui.typewrite(tst[i])

print('Auto data input completed')