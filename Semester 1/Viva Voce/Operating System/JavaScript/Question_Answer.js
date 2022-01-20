const question_answer =
    [
        {
            question: "Define Operating System?",
            answer: "An Operating System is a program that controls the execution of application programs and acts as an interface between user and Computer Hardware."
        },
        {
            question: "What are the different operating systems? Define each one.",
            answer: `
                <ul>
                    <li><b>Batched operating systems:</b> Batched operating system the user gives their jobs to the operator who convert similar type of job in a batch and executes. This is time consuming but makes the CPU busy all the time i.e. CPU can't be in idle state.</li>
                    <li><b>Distributed operating systems:</b> Distributed systems work in a network. They can share the network resources,communicate with each other.</li>
                    <li><b>Time sharing operating systems:</b>It is a logical extension of the multiprogramming OS where user can interact with the program. The CPU executes multiple jobs by switching among them by providing specific time period to each process.</li>
                    <li><b>Multiprogramming operating systems:</b> Multi-programmed operating systems can execute a number of programs concurrently using job-scheduling.</li>
                    <li><b>Real time operating systems:</b> Real time operating system is a multiprogramming OS where user can interact with the program. The CPU executes multiple jobs by switching among them by providing specific time period to each process.</li>
                </ul>
            `
        },
        {
            question: "What do you mean by Job-pool and Define Job-Scheduling.",
            answer: `
                <ul>
                    <li>
                        <b>Job-Pool</b>: Concept of "job pool" refers to, where jobs are queued to be executed when resources are available. The job pool contains both jobs that are currently executing and jobs that have been scheduled but are not yet being executed.
                    </li>
                    <li>
                        <b>Job-Scheduling</b>:Job scheduling is the process of allocating system resources to many different tasks by an operating system.
                    </li>
                <ul>
            `
        },
        {
            question: "What do You mean by Preemptive and Non-Preemptive Scheduling?",
            answer: "The executing process in preemptive scheduling is interrupted in the middle of execution when higher priority one comes Whereas, the executing process in non-preemptive scheduling is not interrupted in the middle of execution and waits till its execution."
        },
        {
            question: "What Do You Mean by DeadLock? (Very Imp.****)",
            answer: `Deadlock is a situation where the execution of two or more processes is blocked because each process holds some resource and waits for another.
            <br/><br/>
            <b>OR</b>
            <br/><br/>
            Deadlock is a specific situation or condition where two processes are waiting for each other to complete so that they can start. But this situation causes hang for both of them.
            `
        },
        {
            question: "What do you Mean by System Calls and System Boots?",
            answer: `<b>System calls:</b> System calls provide an interface to the services made available by an operating system.
            <br/><br/>
            <b>System Boot:</b> The procedure of starting a computer by loading the kernel is known as System Booting. A small piece of code known as the bootstrap program or bootstrap loader locates the kernel, loads it into main memory, and starts its execution.`
        },
        {
            question: "What do you Mean by boot-strap program?",
            answer: `The bootstrap program is a small piece of code that is loaded into the main memory of a computer. The bootstrap program is responsible for loading the operating system into main memory.`
        },
        {
            question: "What is context switching?",
            answer: `Context switching is the process of switching the context of a process from one process to another.`
        },
        {
            question: "What is a thread?",
            answer: `A thread is a program line under execution. Thread sometimes called a light-weight process, is a basic unit of CPU utilization; it consists of thread id, a program counter, a register set, and a stack.`
        },
        {
            question: "What is a process?",
            answer: `A process is a unit of execution. It is a collection of threads.`
        },
        {
            question: "Explain the first-fit, best-fit, and worst-fit strategies used for memory allocation?",
            answer: `
                <ul>
                    <li>
                        <b>First-fit:</b> The first fit algorithm is a memory allocation algorithm that allocates memory to the process in the first available location.
                    </li>
                    <li>
                        <b>Best-fit:</b> The best fit algorithm is a memory allocation algorithm that allocates memory to the process in the smallest available location.
                    </li>
                    <li>
                        <b>Worst-fit:</b> The worst fit algorithm is a memory allocation algorithm that allocates memory to the process in the largest available location.
                    </li>
                </ul>
            `
        },
        {
            question: "What is a memory management unit?",
            answer: `A memory management unit is a component of a computer system that manages the storage of data.`
        },
        {
            question: "What do you mean By MVT and MFT?",
            answer: `
                <ul>
                    <li>
                        <b>MVT:</b> Memory Virtual Table is a table that contains the virtual address and physical address of the memory.
                    </li>
                    <li>
                        <b>MFT:</b> Memory File Table is a table that contains the virtual address and physical address of the memory.
                    </li>
                </ul>
            `
        },
        {
            question: "What is a memory map?",
            answer: `A memory map is a diagram that shows the physical memory of a computer system.`
        },
        {
            question: "What is a memory block?",
            answer: `A memory block is a contiguous block of memory that is allocated to a process.`
        },
        {
            question: "What is Paging? Define Pages and Frames.",
            answer: `
                <ul>
                    <li>
                        <b>Paging:</b> Paging is used to solve the external fragmentation problem in operating system.Paging is a fixed size partitioning scheme. In paging, secondary memory and main memory are divided into equal fixed size partitions.
                    </li>
                    <li>
                        <b>Pages:</b> The partitions of secondary memory are called as pages.
                    </li>
                    <li>
                        <b>Frames:</b> The partitions of main memory are called as frames.
                    </li>
                </ul>
            `
        },
        {
            question: "What do you mean by Segmentation? Also Define Segments?",
            answer: `
                <ul>
                    <li>
                        <b>Segmentation:</b> Segmentation is a variable size partitioning scheme. In segmentation, secondary memory and main memory are divided into partitions of unequal size. The size of partitions depend on the length of modules.
                    </li>
                    <li>
                        <b>Segments:</b> The partitions of secondary memory are called as segments.
                    </li>
                </ul>
            `
        },
        {
            question: "What Do You Mean By Virtual Memory?",
            answer: `Virtual memory is a memory management technique that allows the execution of processes that are not completely in memory. One major advantage of this scheme is that programs can be larger than physical memory. Virtual memory abstracts main memory into an extremely large, uniform array of storage, separating logical memory as viewed by the user from physical memory.`
        },
        {
            question: "What is the concept of demand paging? What is Page Fault?",
            answer: `
                <ul>
                    <li>
                        <b>Demand paging:</b> Demand paging specifies that if an area of memory is not currently being used, it is swapped to disk to make room for an application's need.
                    </li>
                    <li>
                        <b>Page Fault:</b> A page fault occurs when a program attempts to access a block of memory that is not stored in the physical memory, or RAM.
                    </li>
                </ul>
            `
        },
        {
            question: "hat is the concept of demand paging? What is Page Fault?",
            answer: `
                <ul>
                    <li>
                        <b>Demand paging:</b> Demand paging specifies that if an area of memory is not currently being used, it is swapped to disk to make room for an application's need.
                    </li>
                    <li>
                        <b>Page Fault:</b> A page fault occurs when a program attempts to access a block of memory that is not stored in the physical memory, or RAM.
                    </li>
                </ul>
            `
        },
        {
            question: "What is Cache Memory?",
            answer: `Cache memory is an extremely fast memory type that acts as a buffer between RAM and the  CPU. It holds frequently requested data and instructions so that they are immediately available to the CPU when needed. Cache memory is used to reduce the average time to access data from the Main memory.`
        },
        {
            question: "What is Thrashing?",
            answer: `This high paging activity is called thrashing. A process is thrashing if it is spending more time paging than executing.`
        },
        {
            question: "What is Throughput, Turnaround time, waiting time and Response time?",
            answer: `
                <ul>
                    <li>
                        <b>Throughput:</b> Throughput is the number of processes that complete their execution per time unit.
                    </li>
                    <li>
                        <b>Turnaround time:</b> Turnaround time is the amount of time to execute a particular process.
                    </li>
                    <li>
                        <b>Waiting time:</b> Waiting time is the amount of time a process has been waiting in the ready queue.
                    </li>
                    <li>
                        <b>Response time:</b> amount of time it takes from when a request was submitted until the first response is produced, not output (for time-sharing environment).
                    </li>
                </ul>
            `
        },
        {
            question: "What is a long term scheduler & short term schedulers?",
            answer: `
                <ul>
                    <li>
                        <b>Long term scheduler:</b> Long term schedulers are the job schedulers that select processes from the job queue and load them into memory for execution.
                    </li>
                    <li>
                        <b>Short term scheduler:</b> The short term schedulers are the CPU schedulers that select a process form the ready queue and allocate the CPU to one of them.
                    </li>
                </ul>
            `
        },
        {
            question: "What is Spooling?",
            answer: `Spooling is a process in which data is temporarily gathered to be used and executed by a device, program or the system. It is associated with printing. When different applications send output to the printer at the same time, spooling keeps these all jobs into a disk file and queues them up for printing.`
        },
        {
            question: "What are the Process and States of a Process?",
            answer: `
                <ul>
                    <li>
                        <b>Process:</b> A process is a unit of execution in a computer system.
                    </li>
                    <li>
                        <b>States:</b> The states of a process are:
                        <ul>
                            <li>
                                <b>New:</b> A process is created and added to the ready queue.
                            </li>
                            <li>
                                <b>Ready:</b> A process is waiting to be assigned to the processor.
                            </li>
                            <li>
                                <b>Running:</b> A process is waiting for some event occur.
                            </li>
                            <li>
                                <b>Running:</b> A process instruction is being executed.
                            </li>
                            <li>
                                <b>Blocked:</b> A process is blocked.
                            </li>
                            <li>
                                <b>Terminated:</b> A process has finished execution.
                            </li>
                        </ul>
                    </li>
                </ul>
            `
        }
    ]

export default question_answer;