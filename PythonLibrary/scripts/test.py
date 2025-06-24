import sys
def main():
    if len(sys.argv) < 2:
        print("Usage: execute python from filename test.py ")
        return

    name = sys.argv[1]
    print(f"Hello, {name}!")

if __name__ == "__main__":
    main()