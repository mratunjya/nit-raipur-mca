import question_answer from './Question_Answer.js';

let html_question_answer = question_answer.map((item, index) => {
    return `
    <div class="flex question-answer flex-direction-column">
        <div class="flex flex-direction-column">
            <div class="flex align-items-center">
                <h3>Q${index+1}</h3>
                <h3 class="question m-l-12">${item.question}</h3>
            </div>
            <div class="flex align-items-center m-t-4">
                <h3 class="Ans">Ans</h3>
                <p class="answer m-l-8">${item.answer}</p>
            </div>
        </div>
    </div>
    `
});

export default html_question_answer;