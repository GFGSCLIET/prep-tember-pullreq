import tkinter as tk
import backend as be
# Function to perform an action when the submit button is clicked
def submit_action():
    input_text = input_entry.get()
    result =  be.translate(input_text)
    result_text.delete(1.0, tk.END)  # Clear the text area
    if type(result) == list:
        result_text.insert(tk.END, f"{input_text}: ")
        for i in result:
            result_text.insert(tk.END,i)
    else:
        result_text.insert(tk.END, f"I am sorry, {input_text} is not in our database")

# Create the main application window
app = tk.Tk()
app.title("Dictionary GUI")


heading = tk.Label(app, text="Welcome to Dictionary App", font=("Helvetica", 16, "bold"))
heading.pack() 

# Create an input field
input_label = tk.Label(app, text="Enter text:")
input_label.pack()
input_entry = tk.Entry(app)
input_entry.pack()

# Create a submit button
submit_button = tk.Button(app, text="Search", command=submit_action)
submit_button.pack()

# Create a text area to display results
result_text = tk.Text(app, height=10, width=60)
result_text.pack()

# Start the GUI application
app.mainloop()
