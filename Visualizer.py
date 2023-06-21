import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from Python_Handler import *
import tkinter as tk
from tkinter import ttk

# plt.style.use('dark_background')


class TrackedArray:
    def __init__(self, arr):
        self.arr = np.copy(arr)
        self.reset()

    def reset(self):
        self.indices = []
        self.values = []
        self.access_type = []
        self.full_copies = []

    def track(self, key, access_type):
        self.indices.append(key)
        self.values.append(self.arr[key])
        self.access_type.append(access_type)
        self.full_copies.append(np.copy(self.arr))

    def GetActivity(self, idx=None):
        if isinstance(idx, type(None)):
            return [(i, op) for (i, op) in zip(self.indices, self.access_type)]
        else:
            return (self.indices[idx], self.access_type[idx])

    def __getitem__(self, key):
        self.track(key, "get")
        return self.arr.__getitem__(key)

    def __setitem__(self, key, value):
        self.arr.__setitem__(key, value)
        self.track(key, "set")

    def __delitem__(self, key):
        self.track(key, "del")
        self.arr.__delitem__(key) # type: ignore

    def __len__(self):
        return self.arr.__len__()

    def __str__(self):
        return self.arr.__str__()

    def __repr__(self):
        return self.arr.__repr__()


sorting_algorithms = [
    "Bubble Sort",
    "Counting Sort",
    "Heap Sort",
    "Quick Sort",
    "Selection Sort",
    "Insertion Sort",
    "Merge Sort",
    "Wave Sort",
    "Hybrid QSort",
    "Shell Sort",
    "Radix Sort",
    "DNF Sort",
]
speed = {"Slow": 15, "Medium": 120, "Fast": 240, "Superfast": 1000}
sorting_algorithm = "None"
FPS = speed["Medium"]
N = 50


def var_gui():
    def set_variables():
        global sorting_algorithm, FPS
        sorting_algorithm = selectalgo.get()
        sp = str(selectfps.get())
        if sp != "":
            FPS = speed[sp]
        print("\n\nSelected Algo:", sorting_algorithm)
        print("Selected Framerate:", FPS, "\n\n")
        window.destroy()  # Close the window

    window = tk.Tk()
    window.title("SortVerse Visualizer")

    window_width = 375
    window_length = 550

    screen_width = window.winfo_screenwidth()
    screen_height = window.winfo_screenheight()
    x = (screen_width - window_width) // 2
    y = (screen_height - window_length) // 2

    window.geometry(f"{window_width}x{window_length}+{x}+{y}")

    style = ttk.Style()
    style.configure("TFrame", background="#f0f0f0")

    style.configure("TLabel", background="#f0f0f0", font=("Arial", 15), padding=10)

    style.configure(
        "TRadiobutton",
        background="#f0f0f0",
        font=("Arial", 12),
        padding=10,
        relief="flat",
    )

    selectalgo = tk.StringVar()
    selectfps = tk.StringVar()

    frame = ttk.Frame(window, style="TFrame", padding=10, borderwidth=20)
    frame.pack()

    label1 = ttk.Label(
        frame, text="Select Algorithm :", style="TLabel", anchor="center"
    )
    label1.grid(row=0, column=0, columnspan=2)

    row = 1
    column = 0

    for algo in sorting_algorithms:
        radio_button = ttk.Radiobutton(
            frame, text=f"{algo}", variable=selectalgo, value=algo, style="TRadiobutton"
        )
        radio_button.grid(row=row, column=column, sticky="w")
        column += 1
        if column == 2:
            column = 0
            row += 1

    # ttk.Label(frame, text=" ", style="TLabel").grid(row=row, column=0)
    # ttk.Label(frame, text=" ", style="TLabel").grid(row=row+1, column=0)

    label2 = ttk.Label(frame, text="Select Speed :", style="TLabel")
    label2.grid(row=row + 2, column=0, columnspan=2)

    row += 3
    column = 0

    for text, value in speed.items():
        radio_button = ttk.Radiobutton(
            frame, text=f"{text}", variable=selectfps, value=text, style="TRadiobutton"
        )
        radio_button.grid(row=row, column=column, sticky="w")
        column += 1
        if column == 2:
            column = 0
            row += 1

    # ttk.Label(frame, text=" ", style="TLabel").grid(row=row, column=0)

    button = ttk.Button(frame, text="Submit", padding=10, command=set_variables)
    button.grid(row=row + 2, column=0, columnspan=2, pady=(20, 0), padx=20)

    window.eval("tk::PlaceWindow . center")
    window.mainloop()


def py_visualizer(FPS, N, sorting_algorithm):
    if sorting_algorithm == "None":
        print("\n\nPlease select an algorithm!\n\n")
        return
    arr = np.round(np.linspace(1, 1000, N, dtype=np.int32), 0)
    # np.random.seed(0)
    np.random.shuffle(arr)
    # print(arr)

    if sorting_algorithm == "DNF Sort":
        for i in range(0, len(arr)):
            if arr[i] < 333:
                arr[i] = 333
            elif arr[i] < 666:
                arr[i] = 666
            else:
                arr[i] = 999

    arr = TrackedArray(arr)
    # print(arr)

    fig, ax = plt.subplots(figsize=(16, 8))
    fig.suptitle('SortVerse Visualizer')
    container = ax.bar(np.arange(0, len(arr), 1), arr, align="edge", width=0.8)  # type: ignore
    ax.set(xlabel="Index", ylabel="Value")
    ax.set_xlim([0, N])  # type: ignore

    if sorting_algorithm == "Bubble Sort":
        py_bubble(arr, len(arr))
    elif sorting_algorithm == "Counting Sort":
        py_visual_cntsrt(arr, len(arr))
    elif sorting_algorithm == "Heap Sort":
        py_heapsrt(arr, len(arr))
    elif sorting_algorithm == "Quick Sort":
        py_QSort(arr, 0, len(arr) - 1)
    elif sorting_algorithm == "Selection Sort":
        py_selectionsrt(arr, len(arr))
    elif sorting_algorithm == "Insertion Sort":
        py_insertionsrt(arr, len(arr))
    elif sorting_algorithm == "Merge Sort":
        py_mrgsrt(arr, 0, len(arr) - 1)
    elif sorting_algorithm == "DNF Sort":
        py_visual_DNFsrt(arr, len(arr))
    elif sorting_algorithm == "Wave Sort":
        py_wavesrt(arr, len(arr))
    elif sorting_algorithm == "Shell Sort":
        py_shellsrt(arr, len(arr))
    elif sorting_algorithm == "Radix Sort":
        py_radixsrt(arr, len(arr))
    elif sorting_algorithm == "Hybrid QSort":
        hy_qsort(arr, 0, len(arr) - 1)

    def update(frame):
        for i, (rectangle, height) in enumerate(
            zip(container.patches, arr.full_copies[frame])
        ):
            rectangle.set_height(height)
            # Highlight the currently working element
            if i == arr.GetActivity(frame)[0]:
                rectangle.set_color("#ff0000")  # Red color for the working element
            else:
                rectangle.set_color(
                    "#1f77b4"
                )  # Blue color for the rest of the elements
        return (*container,)

    ani = animation.FuncAnimation(
        fig,
        update,
        frames=range(len(arr.full_copies)),
        blit=True,
        interval=1000.0 / FPS,
        repeat=False,
    )

    container = ax.bar(np.arange(0, len(arr), 1), align="edge", width=0.8, height=arr) # type: ignore
    plt.title(f'{sorting_algorithm}')
    plt.show()

def main():
    var_gui()
    py_visualizer(FPS, N, sorting_algorithm)

    print('Thank you for using SortVerse!\n')
    print('Made with ❤️  by:')
    print('🏃 [ Kinshuk Goel ]')
    print('💃 [ Palak Dwivedi ]')
    input('\nPress any key to exit...')

#main function
if __name__ == '__main__':
    main()