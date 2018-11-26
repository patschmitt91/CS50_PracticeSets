import cs50

def main():
    print("Please enter your change amount. ", end="")
    changeOnHand = cs50.get_float()
    changeConverted = int(changeOnHand * 100)
    coinCount = 0

    while changeConverted >= 25:
        coinCount += 1
        changeConverted -= 25
    while changeConverted >= 10:
        coinCount += 1
        changeConverted -= 10
    while changeConverted >= 5:
        coinCount += 1
        changeConverted -= 5
    while changeConverted >= 1:
        coinCount += 1
        changeConverted -= 1

    print(f"You will receive {coinCount} coins")
if __name__ == "__main__":
    main()