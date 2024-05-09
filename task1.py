class Question:
    def __init__(self, prompt, options, correct_answer):
        self.prompt = prompt
        self.options = options
        self.correct_answer = correct_answer

def run_quiz(questions):
    score = 0
    for question in questions:
        print(question.prompt)
        for i, option in enumerate(question.options):
            print(f"{i+1}. {option}")
        user_answer = input("Enter your choice (1, 2, 3, ...): ")
        if user_answer.lower() == question.correct_answer.lower():
            print("Correct!\n")
            score += 1
        else:
            print("Incorrect!\n")
    print(f"You scored {score}/{len(questions)}")

if __name__ == "__main__":
    question1 = Question(
        "1. What is the capital of Japan?",
        ["A. Tokyo", "B. Kyoto", "C. Osaka"],
        "A"
    )

    question2 = Question(
        "2. Who painted the Mona Lisa?",
        ["A. Michelangelo", "B. Leonardo da Vinci", "C. Vincent van Gogh"],
        "B"
    )

    question3 = Question(
        "3. What is the chemical symbol for water?",
        ["A. H2O", "B. CO2", "C. NaCl"],
        "A"
    )

    questions = [question1, question2, question3]

    run_quiz(questions)
