import keyboard

def hello_world():
    print("Hello, World!")

keyboard.add_hotkey('enter', hello_world) # 註冊 Enter 鍵的熱鍵事件

try:
    keyboard.wait('esc') # 等待 Esc 鍵按下
except:
    pass

keyboard.remove_hotkey(hello_world) # 移除熱鍵事件
