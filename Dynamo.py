import random

def generate_question():
    operator = random.choice(['+', '-', '*', '/'])
    num1 = random.randint(1, 20)
    num2 = random.randint(1, 20)
    
    if operator == '/' and num1 % num2 != 0:
       
        return generate_question()
    
    question = f"{num1} {operator} {num2}"
    answer = eval(question)
    
    return question, answer

def play_dynamo_game():
    score = 0
    num_questions = 10
    
    print("Welcome to Dynamo Game! Test your math skills.")
    
    for _ in range(num_questions):
        question, answer = generate_question()
        print(f"Question: {question}")
        
        try:
            user_answer = float(input("Your answer: "))
            if user_answer == answer:
                print("Correct!\n")
                score += 1
            else:
                print(f"Wrong! The correct answer is {answer}\n")
        except ValueError:
            print("Invalid input. Please enter a valid number.\n")
    
    print(f"Game over! Your score is {score}/{num_questions}")

if __name__ == "__main__":
    play_dynamo_game()
