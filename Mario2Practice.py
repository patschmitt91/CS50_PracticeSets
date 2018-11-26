import cs50

def main():
    ##Prompt user for input between 0 and 23
    while True:
            print("Please input a number between 0-23. ", end="")
            height = cs50.get_int()
            if height <= 23 and height > 0:
                break

    for rows in range(1, height):
        for spaces in range(1, height - rows):
            print(" ", end="")
        for left_hashes in range(height - rows, height):
            print("#", end="")
        print("  ", end="")
        for right_hashes in range(height - rows, height):
            print("#", end="")

        # Prints newline
        print()

if __name__ == "__main__":
    main()