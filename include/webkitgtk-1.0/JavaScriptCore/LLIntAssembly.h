// offlineasm input hash: 5a3f0decf34e3a617c5bbb9b7a5a18ba64073bee 1be671a36f809dca51f79750837392514ed8b121 e808d0d74e9672a29c679b568ed471391363cce4
#if OFFLINE_ASM_JSVALUE64 && !OFFLINE_ASM_BIG_ENDIAN && !OFFLINE_ASM_ASSERT_ENABLED && !OFFLINE_ASM_ARMv7 && !OFFLINE_ASM_X86 && OFFLINE_ASM_X86_64 && !OFFLINE_ASM_EXECUTION_TRACING && OFFLINE_ASM_JIT_ENABLED && OFFLINE_ASM_VALUE_PROFILER && !OFFLINE_ASM_ALWAYS_ALLOCATE_SLOW
OFFLINE_ASM_BEGIN

OFFLINE_ASM_GLOBAL_LABEL(llint_begin)
    "\tmovl %eax, 3148725999\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:113
    "\txorq %rax, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:114
    "\tcall *%rax\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:115

OFFLINE_ASM_GLOBAL_LABEL(llint_program_prologue)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq %rcx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:213
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:196
    "\taddl $5, 2800(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:219
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:221
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:222
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:223
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:225

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:196

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__continue)
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:234
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:235
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_eval_prologue)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq %rcx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:213
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:196
    "\taddl $5, 2800(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:219
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_0_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:221
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:222
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_0_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:223
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:225

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:196

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__continue)
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:234
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:235
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_function_for_call_prologue)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq %rcx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:213
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:184
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:185
    "\tmovq 160(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:186
    "\taddl $5, 2800(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:219
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_1_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:221
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:222
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_1_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:223
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:225

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:184
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:185
    "\tmovq 160(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:186

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:200
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:234
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:235

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForCallBegin)
    "\tmovl 64(%rdx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:253
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:255
    "\ttestq %rax, %rax\n"
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 1048(%rdx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:256
    "\timulq $40, %rax, %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:257
    "\tnegq %rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:258
    "\tsalq $3, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:259
    "\taddq %rcx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:260

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileLoop)
    "\tmovq -48(%r13, %rax, 1), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:263
    "\tsubq $40, %rbx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:264
    "\tmovq %rcx, 24(%rbx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:265
    "\taddq $8, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:273
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileDone)
    "\tmovl 48(%rdx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\tmovq 80(%rdx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\tmovq 10568(%rcx), %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:280
    "\tsall $3, %eax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:281
    "\taddq %r13, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:282
    "\tcmpq %rax, 24(%rcx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:283
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_register_file_check) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__stackHeightOK)
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_function_for_construct_prologue)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq %rcx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:213
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:190
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq 168(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:192
    "\taddl $5, 2800(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:219
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_2_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:221
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:222
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:223
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:225

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:190
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq 168(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:192

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:200
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:234
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:235

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForConstructBegin)
    "\tmovl 64(%rdx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\taddq $-1, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:253
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:255
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 1048(%rdx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:256
    "\timulq $40, %rax, %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:257
    "\tnegq %rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:258
    "\tsalq $3, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:259
    "\taddq %rcx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:260

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileLoop)
    "\tmovq -56(%r13, %rax, 1), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:263
    "\tsubq $40, %rbx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:264
    "\tmovq %rcx, 64(%rbx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:265
    "\taddq $8, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:273
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileDone)
    "\tmovl 48(%rdx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\tmovq 80(%rdx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\tmovq 10568(%rcx), %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:280
    "\tsall $3, %eax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:281
    "\taddq %r13, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:282
    "\tcmpq %rax, 24(%rcx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:283
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_register_file_check) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__stackHeightOK)
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_function_for_call_arity_check)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq %rcx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:213
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:184
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:185
    "\tmovq 160(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:186
    "\taddl $5, 2800(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:219
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_3_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:221
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:222
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_3_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:223
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:225

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:184
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:185
    "\tmovq 160(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:186

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:200
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:234
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:235
    "\tmovl -48(%r13), %eax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tcmpl 64(%rdx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\ttestl %eax, %eax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:168
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__continue) "\n"
    "\tmovq 112(%rsp), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:169
    "\tmovq 10664(%rdx), %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjmp *10672(%rdx)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:171

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:176
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:177

OFFLINE_ASM_GLOBAL_LABEL(llint_function_for_construct_arity_check)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq %rcx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:213
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:190
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq 168(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:192
    "\taddl $5, 2800(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:219
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_4_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:221
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:222
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:223
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:225

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:190
    "\tmovq 24(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq 168(%rdx), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:192

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:200
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:234
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:235
    "\tmovl -48(%r13), %eax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tcmpl 64(%rdx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\ttestl %eax, %eax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:168
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__continue) "\n"
    "\tmovq 112(%rsp), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:169
    "\tmovq 10664(%rdx), %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjmp *10672(%rdx)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:171

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\tmovq 88(%rdx), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\txorq %rsi, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:176
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:177

OFFLINE_ASM_GLOBAL_LABEL(llint_op_enter)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:185
    "\tmovl 52(%rcx), %ecx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:186
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:187
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opEnterDone) "\n"
    "\tmovq $10, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:188

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterLoop)
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:190
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:191
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:192
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opEnterLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterDone)
    "\taddq $1, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_create_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:199
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:200
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateActivationDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_activation) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateActivationDone)
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_init_lazy_reg)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:208
    "\tmovq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:209
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_create_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:215
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:216
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateArgumentsDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateArgumentsDone)
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_create_this)
    "\tmovq -32(%r13), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:224
    "\tmovq 40(%rax), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:225
    "\ttestq %rcx, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:226
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq 80(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\tmovq 1632(%rdx), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:310
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tmovq %rbx, 1632(%rdx)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tmovq 10624(%rdx), %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tmovq %rbx, 0(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:319
    "\tmovq %rcx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\tmovq $0, 16(%rax)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:228
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:229
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_this) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_convert_this)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:239
    "\tmovq 0(%r13, %rax, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:240
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:241
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opConvertThisSlow) "\n"
    "\tmovq 8(%rax), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:242
    "\tcmpb $13, 16(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:243
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opConvertThisSlow) "\n"
    "\tmovq 16(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:244
    "\tmovq %rax, 24(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opConvertThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_convert_this) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_new_object)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:255
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:256
    "\tmovq 760(%rax), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:257
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq 80(%rcx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\tmovq 1632(%rcx), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:310
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewObjectSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tmovq %rbx, 1632(%rcx)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tmovq 10624(%rcx), %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tmovq %rbx, 0(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:319
    "\tmovq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\tmovq $0, 16(%rax)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:259
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:260
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewObjectSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_object) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_mov)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:270
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:271
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:273
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_not)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:279
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:280
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__done)
    "\txorq $6, %rcx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:282
    "\ttestq $-2, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:283
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNotSlow) "\n"
    "\txorq $7, %rcx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:284
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:285
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNotSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_not) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_eq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:295
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:296
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:297
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:312
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:301
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:302
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_eq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_neq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:295
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:296
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:297
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:318
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:301
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:302
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_neq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_eq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:323
    "\tmovq 0(%r13, %rax, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:324
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:325
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__immediate) "\n"
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:326
    "\ttestb $1, 17(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:327
    "\tsetnz %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:328

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:330
    "\tcmpq $2, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:331
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:338
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:339
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:340
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_neq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:323
    "\tmovq 0(%r13, %rax, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:324
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:325
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__immediate) "\n"
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:326
    "\ttestb $1, 17(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:327
    "\tsetnz %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:328

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:330
    "\tcmpq $2, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:331
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:347
    "\txorq $7, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:348
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:349
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_stricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:355
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:356
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:359
    "\torq %rdx, %rcx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:360
    "\ttestq %r15, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:361
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:362
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:363
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:365
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:366
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:381
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:369
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:370
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:371
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_stricteq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_nstricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:355
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:356
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:359
    "\torq %rdx, %rcx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:360
    "\ttestq %r15, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:361
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:362
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:363
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:365
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:366
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:387
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:369
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:370
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:371
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_nstricteq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_pre_inc)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:393
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:394
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:395
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\taddl $1, %edx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:408
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:397
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:398
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pre_inc) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_pre_dec)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:393
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:394
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:395
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\tsubl $1, %edx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:414
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:397
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:398
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pre_dec) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_post_inc)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:420
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:421
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:422
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:423
    "\tje " LOCAL_LABEL_STRING(_offlineasm_postOp__done) "\n"
    "\tcmpq %r14, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:424
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_postOp__slow) "\n"
    "\tmovq %rcx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:425
    "\taddl $1, %ebx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:440
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_postOp__slow) "\n"
    "\torq %r14, %rbx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:427
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:428
    "\tmovq %rbx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:429

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_postOp__done)
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_postOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_post_inc) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_post_dec)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:420
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:421
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:422
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:423
    "\tje " LOCAL_LABEL_STRING(_offlineasm_12_postOp__done) "\n"
    "\tcmpq %r14, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:424
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_12_postOp__slow) "\n"
    "\tmovq %rcx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:425
    "\tsubl $1, %ebx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:446
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_12_postOp__slow) "\n"
    "\torq %r14, %rbx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:427
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:428
    "\tmovq %rbx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:429

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_postOp__done)
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_postOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_post_dec) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_to_jsnumber)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:452
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:453
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:455
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opToJsnumberIsImmediate) "\n"
    "\ttestq %r14, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:456
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opToJsnumberSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToJsnumberIsImmediate)
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:458
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToJsnumberSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_to_jsnumber) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_negate)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:468
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:469
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:471
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opNegateNotInt) "\n"
    "\ttestl $2147483647, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:472
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tnegl %ecx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:473
    "\torq %r14, %rcx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:474
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:475
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateNotInt)
    "\ttestq %r14, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:478
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tmovq $9223372036854775808, %r11\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:479
    "\txorq %r11, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:479
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:480
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_negate) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_add)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:489
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:490
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:493
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:494
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\taddl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:550
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:501
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:502
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:503
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:504
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:505
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:506

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:508

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:511
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:512
    "\taddsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:514
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:523
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:525
    "\taddsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_add) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_mul)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:489
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:490
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:493
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:494
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\tmovq %rax, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\timull %edx, %ebx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\ttestl %ebx, %ebx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:562
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done) "\n"
    "\tcmpl $0, %edx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:563
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpl $0, %eax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done)
    "\torq %r14, %rbx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:566
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:567
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:501
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:502
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:503
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:504
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:505
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:506

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:508

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:511
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:512
    "\tmulsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:569
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:514
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:523
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:525
    "\tmulsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:569
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_mul) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_sub)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:489
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:490
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:493
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:494
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\tsubl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:576
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:501
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:502
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:503
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:504
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:505
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:506

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:508

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:511
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:512
    "\tsubsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:577
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:514
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:523
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:525
    "\tsubsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:577
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_sub) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_div)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:489
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:490
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:493
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:494
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\ttestl %edx, %edx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:586
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpl $-1, %edx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:587
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1) "\n"
    "\tcmpl $-2147483648, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:588
    "\tje " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1)
    "\ttestl %eax, %eax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:590
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK) "\n"
    "\tcmpl $0, %edx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:591
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK)
    "\tmovq %rdx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:593
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:594
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:595
    "\tcdq\n"
    "\tidivl %ebx\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:596
    "\ttestl %edx, %edx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:597
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:598
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:599
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:501
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:502
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:503
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:504
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:505
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:506

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:508

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:511
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:512
    "\tdivsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:601
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:514
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:523
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:525
    "\tdivsd %xmm1, %xmm0\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:601
    "\tmovd %xmm0, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tsubq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_div) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_lshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:608
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:626
    "\tsall %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_lshift) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_rshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:608
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:634
    "\tsarl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_26_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_rshift) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_urshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:608
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:643
    "\tshrl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\tcmpl $0, %eax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:644
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_28_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_urshift) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_bitand)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:608
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tandl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:653
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_30_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitand) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_bitxor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:608
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\txorl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:661
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_32_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitxor) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_bitor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:608
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\torl %edx, %eax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:669
    "\torq %r14, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_34_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitor) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_check_has_instance)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:676
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\tmovq 8(%rax), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:678
    "\ttestb $2, 17(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:679
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCheckHasInstanceSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_check_has_instance) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_instanceof)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:691
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_36_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_36_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_36_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_36_loadConstantOrVariable__done)
    "\tmovq 8(%rax), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:693
    "\ttestb $8, 17(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:694
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:697
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:698
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq 8(%rdx), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:700
    "\tcmpb $13, 16(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:701
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:702
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__38_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__38_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__38_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__38_loadConstantOrVariable__done)
    "\ttestq %r15, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq $1, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:706

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofLoop)
    "\tmovq 8(%rcx), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:708
    "\tmovq 32(%rcx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:709
    "\tcmpq %rdx, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:710
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opInstanceofDone) "\n"
    "\ttestq %r15, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:711
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofLoop) "\n"
    "\txorq %rax, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:713

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofDone)
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:715
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:716
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_instanceof) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_is_undefined)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:726
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:727
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:729
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opIsUndefinedCell) "\n"
    "\tcmpq $10, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:730
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:731
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:732
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsUndefinedCell)
    "\tmovq 8(%rax), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:735
    "\ttestb $1, 17(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:736
    "\tsetnz %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:737
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:738
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_is_boolean)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:744
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:745
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:747
    "\ttestq $-2, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:748
    "\tsetz %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:749
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:750
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_is_number)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:756
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:757
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__done)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:759
    "\tsetnz %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:760
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:761
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_is_string)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:767
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:768
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:770
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opIsStringNotCell) "\n"
    "\tmovq 8(%rax), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:771
    "\tcmpb $5, 16(%rax)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:772
    "\tsete %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:773
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:774
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsStringNotCell)
    "\tmovq $6, 0(%r13, %rcx, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:777
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve_global)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:806
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:807
    "\tmovq 8(%rax), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:808
    "\tcmpq 24(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:809
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opResolveGlobalSlow) "\n"
    "\tmovslq 32(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:810
    "\tcmpl $5, %edx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:789
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_resolveGlobal__loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 16(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:790
    "\tnegl %edx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:791
    "\tmovslq %edx, %rdx\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:792
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_resolveGlobal__loadPropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:793

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveGlobal__loadPropertyAtVariableOffset__isInline)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveGlobal__loadPropertyAtVariableOffset__ready) // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:795
    "\tmovq 24(%rax, %rdx, 8), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:797
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:812
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:813
    "\tmovq 40(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:814
    "\tmovq %rcx, 24(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $6, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opResolveGlobalSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_global) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $6, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve_global_dynamic)
    "\tmovq 112(%rsp), %rbx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:863
    "\tmovq 4344(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:864
    "\tmovq -24(%r13), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:833
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:836
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__done) "\n"
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:838
    "\tcmpl $2, 112(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:839
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getScope__loop) "\n"
    "\tcmpb $0, 108(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:840
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__loop) "\n"
    "\tmovslq 104(%rdx), %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:842
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:845
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__noActivation) "\n"
    "\tmovq 32(%rax), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:868
    "\tcmpq %rbx, 8(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:869
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opResolveGlobalDynamicSuperSlow) "\n"
    "\tmovq 24(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:847

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__noActivation)
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:849
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:851
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__loop)
    "\tmovq 32(%rax), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:868
    "\tcmpq %rbx, 8(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:869
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opResolveGlobalDynamicSuperSlow) "\n"
    "\tmovq 24(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:854
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:855
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:856
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__done)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:806
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:807
    "\tmovq 8(%rax), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:808
    "\tcmpq 24(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:809
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opResolveGlobalDynamicSlow) "\n"
    "\tmovslq 32(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:810
    "\tcmpl $5, %edx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:789
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_resolveGlobal__42_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 16(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:790
    "\tnegl %edx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:791
    "\tmovslq %edx, %rdx\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:792
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_resolveGlobal__42_loadPropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:793

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveGlobal__42_loadPropertyAtVariableOffset__isInline)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveGlobal__42_loadPropertyAtVariableOffset__ready) // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:795
    "\tmovq 24(%rax, %rdx, 8), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:797
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:812
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:813
    "\tmovq 48(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:814
    "\tmovq %rcx, 24(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $7, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opResolveGlobalDynamicSuperSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_for_resolve_global_dynamic) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $7, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opResolveGlobalDynamicSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_global_dynamic) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $7, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_scoped_var)
    "\tmovq -24(%r13), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:833
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:836
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_42_getScope__done) "\n"
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:838
    "\tcmpl $2, 112(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:839
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_42_getScope__loop) "\n"
    "\tcmpb $0, 108(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:840
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_42_getScope__loop) "\n"
    "\tmovslq 104(%rdx), %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:842
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:845
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_42_getScope__noActivation) "\n"
    "\tmovq 24(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:847

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_getScope__noActivation)
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:849
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:851
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_42_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_getScope__loop)
    "\tmovq 24(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:854
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:855
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:856
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_42_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_getScope__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:890
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:891
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:892
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:893
    "\tmovq 0(%rax, %rcx, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:894
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:895
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:896
    "\tmovq %rbx, 24(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_scoped_var)
    "\tmovq -24(%r13), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:833
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:836
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_43_getScope__done) "\n"
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:838
    "\tcmpl $2, 112(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:839
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_43_getScope__loop) "\n"
    "\tcmpb $0, 108(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:840
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_43_getScope__loop) "\n"
    "\tmovslq 104(%rdx), %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:842
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:845
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_43_getScope__noActivation) "\n"
    "\tmovq 24(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:847

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_getScope__noActivation)
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:849
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:851
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_43_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_getScope__loop)
    "\tmovq 24(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:854
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:855
    "\ttestl %ecx, %ecx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:856
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_43_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_getScope__done)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:904
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_43_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_43_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rbx, %rdx, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_loadConstantOrVariable__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:906
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:908
    "\tmovq 32(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:909
    "\tmovq %rbx, 0(%rax, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:910
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_global_var)
    "\tmovq 16(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:916
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:917
    "\tmovq 0(%rax), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:918
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:919
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:920
    "\tmovq %rdx, 24(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_global_var_watchable)
    "\tmovq 16(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:916
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:917
    "\tmovq 0(%rax), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:918
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:919
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:920
    "\tmovq %rdx, 24(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_global_var)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:935
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:936
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_44_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_44_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_44_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_44_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:939
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_global_var_check)
    "\tmovq 24(%r10, %rsi, 8), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:945
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:946
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:947
    "\tcmpb $0, 0(%rcx)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:948
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutGlobalVarCheckSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_45_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_45_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_45_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_45_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:951
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutGlobalVarCheckSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_global_var_check) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:965
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:966
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__46_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__46_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__46_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__46_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:968
    "\tcmpq %rdx, 8(%rbx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:973
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:974
    "\tmovq 0(%rbx, %rcx, 1), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:975
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:976
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:977
    "\tmovq %rax, 24(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_out_of_line)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:965
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:966
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__47_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__47_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__47_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__47_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_47_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:968
    "\tmovq 16(%rbx), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:496
    "\tcmpq %rdx, 8(%rbx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:973
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_47_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:974
    "\tmovq 0(%rax, %rcx, 1), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:975
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:976
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:977
    "\tmovq %rbx, 24(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_47_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_arguments_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:997
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:998
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:999
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentsLengthSlow) "\n"
    "\tmovl -48(%r13), %ecx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1000
    "\tsubl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1001
    "\torq %r14, %rcx\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1002
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1003
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentsLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_arguments_length) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1013
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1014
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1016
    "\tcmpq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1021
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1022
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rax, %rdx, 1)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1025
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1013
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1014
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__50_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__50_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__50_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__50_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1016
    "\tmovq 16(%rax), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:496
    "\tcmpq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1021
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1022
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__51_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__51_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__51_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__51_loadConstantOrVariable__done)
    "\tmovq %rax, 0(%rbx, %rdx, 1)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1025
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_transition_direct)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1044
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1045
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1047
    "\tcmpq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1048
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1050
    "\tleaq (%rdx, %rax), %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1055
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1058
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1059
    "\tmovq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1060
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_transition_direct_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1044
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1045
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1047
    "\tcmpq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1048
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1050
    "\tmovq 16(%rax), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:496
    "\taddq %rdx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1055
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1058
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1059
    "\tmovq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1060
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_transition_normal)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1044
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1045
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1047
    "\tcmpq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1048
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1070
    "\tmovq 16(%rbx), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1072
    "\tcmpq $2, 32(%rdx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1074
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__loop)
    "\tmovq 32(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1076
    "\tmovq 8(%rdx), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1077
    "\tcmpq 0(%rbx), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1078
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1079
    "\tcmpq $2, 32(%rdx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1080
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1050
    "\tleaq (%rdx, %rax), %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1055
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1058
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1059
    "\tmovq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1060
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_transition_normal_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1044
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1045
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__58_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__58_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__58_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__58_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1047
    "\tcmpq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1048
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1070
    "\tmovq 16(%rbx), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1072
    "\tcmpq $2, 32(%rdx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1074
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__58_additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__58_additionalChecks__loop)
    "\tmovq 32(%rdx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1076
    "\tmovq 8(%rdx), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1077
    "\tcmpq 0(%rbx), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1078
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1079
    "\tcmpq $2, 32(%rdx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1080
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__58_additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__58_additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1050
    "\tmovq 16(%rax), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:496
    "\taddq %rdx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1055
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__59_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__59_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__59_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__59_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1058
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1059
    "\tmovq %rdx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1060
    "\taddq $9, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1102
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1103
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__60_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__60_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__60_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__60_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq %edx, %rdx\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1106
    "\tmovq 8(%rax), %rbx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1107
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1108
    "\tmovq %rbx, 8(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1110
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1112
    "\tmovq 80(%rcx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1113
    "\tmovq 10616(%rcx), %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1114
    "\tcmpq %rcx, 72(%rbx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1115
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovq 32(%rax), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1116
    "\tcmpl 24(%rax), %edx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1117
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1118
    "\tmovq 24(%rbx, %rdx, 8), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1119
    "\ttestq %rcx, %rcx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1120
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1121
    "\tmovq 40(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1122
    "\tmovq %rcx, 24(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $6, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $6, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_argument_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1135
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1137
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__62_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__62_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__62_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__62_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\taddl $1, %ecx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1139
    "\tmovl -48(%r13), %edx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1140
    "\tcmpl %edx, %ecx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1141
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tnegl %ecx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1142
    "\tmovslq %ecx, %rcx\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1144
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1145
    "\tmovq -56(%r13, %rcx, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1146
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1147
    "\tmovq %rax, 24(%rdx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $6, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_argument_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $6, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1158
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_63_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_63_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_63_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_63_loadConstantOrVariable__done)
    "\tmovslq 32(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1160
    "\tcmpq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1162
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1163
    "\tmovslq 40(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1164
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1167
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1168
    "\tcmpq 16(%rdx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1169
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 48(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1170
    "\tmovl 0(%r13, %rbx, 8), %ebx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1171
    "\tsubl $1, %ebx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1172
    "\tcmpl 32(%rdx), %ebx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1173
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\taddl 40(%rdx), %ebx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1174
    "\tcmpl $5, %ebx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:789
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_64_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 16(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:790
    "\tnegl %ebx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:791
    "\tmovslq %ebx, %rbx\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:792
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_64_loadPropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:793

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_64_loadPropertyAtVariableOffset__isInline)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_64_loadPropertyAtVariableOffset__ready) // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:795
    "\tmovq 24(%rax, %rbx, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:797
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1176
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1177
    "\taddq $7, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_pname) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $7, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_val)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1187
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__65_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__65_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__65_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__65_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:145
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1189
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__66_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__66_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__66_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__66_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovslq %ecx, %rcx\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1191
    "\tmovq 8(%rdx), %rbx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1192
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1193
    "\tmovq %rbx, 8(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1195
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1197
    "\tmovq 80(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1198
    "\tmovq 10616(%rax), %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1199
    "\tcmpq %rax, 72(%rbx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1200
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tcmpl 24(%rdx), %ecx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1201
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 32(%rdx), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1202
    "\tcmpq $0, 24(%rax, %rcx, 8)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1203
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opPutByValEmpty) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValStoreResult)
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1205
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_67_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_67_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_loadConstantOrVariable__done)
    "\tmovq %rdx, 24(%rax, %rcx, 8)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1208
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValEmpty)
    "\taddl $1, 4(%rax)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1212
    "\tcmpl 0(%rax), %ecx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1213
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValStoreResult) "\n"
    "\tleal 1(%ecx), %edx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1214
    "\tmovl %edx, 0(%rax)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1215
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opPutByValStoreResult) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1216

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1224

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jmp)
    "\taddl 8(%r10, %rsi, 8), %esi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jeq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1248
    "\tmovq 0(%r13, %rax, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1250
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1251
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNull__immediate) "\n"
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1252
    "\ttestb $1, 17(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1268
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__target)
    "\taddq 16(%r10, %rsi, 8), %rsi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__immediate)
    "\tandq $-9, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1260
    "\tcmpq $2, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1269
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jneq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1248
    "\tmovq 0(%r13, %rax, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1250
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1251
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_67_equalNull__immediate) "\n"
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1252
    "\ttestb $1, 17(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1275
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_67_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_equalNull__target)
    "\taddq 16(%r10, %rsi, 8), %rsi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_equalNull__immediate)
    "\tandq $-9, %rax\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1260
    "\tcmpq $2, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1276
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_67_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jneq_ptr)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1281
    "\tmovq 16(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1282
    "\tcmpq 0(%r13, %rax, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1283
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opJneqPtrTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opJneqPtrTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

OFFLINE_ASM_GLOBAL_LABEL(llint_op_switch_imm)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1334
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_68_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_68_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovq 2864(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\timull $64, %ebx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1339
    "\tmovq 80(%rcx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1340
    "\taddq %rbx, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1341
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1342
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmNotInt) "\n"
    "\tsubl 24(%rcx), %edx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1343
    "\tcmpl 0(%rcx), %edx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1344
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\tmovq 8(%rcx), %rbx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1345
    "\tmovslq 0(%rbx, %rdx, 4), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1346
    "\ttestl %edx, %edx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1347
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmNotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1351
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_imm) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_switch_char)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1362
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1363
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1365
    "\tmovq 2864(%rcx), %rcx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1366
    "\timull $64, %ebx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1367
    "\tmovq 104(%rcx), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1368
    "\taddq %rbx, %rcx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1369
    "\ttestq %r15, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1370
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 8(%rdx), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1371
    "\tcmpb $5, 16(%rax)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1372
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tcmpl $1, 20(%rdx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1373
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 24(%rdx), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1374
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1375
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchOnRope) "\n"
    "\tmovq 8(%rax), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1376
    "\ttestl $64, 24(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1377
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchChar8Bit) "\n"
    "\tmovzwl 0(%rdx), %eax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1378
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharReady) "\n"    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1379

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchChar8Bit)
    "\tmovzbl 0(%rdx), %eax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1381

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharReady)
    "\tsubl 24(%rcx), %eax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1383
    "\tcmpl 0(%rcx), %eax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1384
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 8(%rcx), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1385
    "\tmovslq 0(%rcx, %rax, 4), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1386
    "\ttestl %edx, %edx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1387
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchOnRope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_char) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_new_func)
    "\tcmpl $0, 24(%r10, %rsi, 8)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1400
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncUnchecked) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1401
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1402
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncDone) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncUnchecked)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncDone)
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_tear_off_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1449
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1450
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1451
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opTearOffActivationCreated) "\n"
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1452
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffActivationNotCreated) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffActivationCreated)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_activation) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffActivationNotCreated)
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_tear_off_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1461
    "\tsubl $1, %eax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1462
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1463
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffArgumentsNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffArgumentsNotCreated)
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_ret)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:164
    "\taddl $10, 2800(%rax)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:165
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1472
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:326
    "\tmovq -40(%r13), %r13\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tret\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329

OFFLINE_ASM_GLOBAL_LABEL(llint_op_call_put_result)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1478
    "\tmovq 16(%r10, %rsi, 8), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1479
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1480
    "\tmovq %rax, 24(%rbx)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_ret_object_or_this)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:164
    "\taddl $10, 2800(%rax)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:165
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__70_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__70_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1489
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1491
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1492
    "\tcmpb $13, 16(%rcx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1493
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:326
    "\tmovq -40(%r13), %r13\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tret\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opRetObjectOrThisNotObject)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1497
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:326
    "\tmovq -40(%r13), %r13\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tret\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329

OFFLINE_ASM_GLOBAL_LABEL(llint_op_to_primitive)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1504
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1505
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1507
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveIsImm) "\n"
    "\tmovq 8(%rax), %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1508
    "\tcmpb $5, 16(%rcx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1509
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveSlowCase) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveIsImm)
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1511
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveSlowCase)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_to_primitive) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_next_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1521
    "\tmovslq 32(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1522
    "\tmovl 0(%r13, %rdx, 8), %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1525
    "\tcmpl 0(%r13, %rcx, 8), %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1526
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameEnd) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1527
    "\tmovq 0(%r13, %rcx, 8), %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1529
    "\tmovq 48(%rcx), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1530
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1531
    "\taddl $1, %eax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1532
    "\tmovl %eax, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1533
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1534
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1535
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1536
    "\tmovq 0(%r13, %rbx, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1538
    "\tmovq 8(%rbx), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1539
    "\tcmpq 16(%rcx), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1540
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 24(%rcx), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1541
    "\tmovq 16(%rax), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1542
    "\tcmpq $0, 0(%rax)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1543
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameTarget) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameCheckPrototypeLoop)
    "\tcmpq $2, 32(%rdx)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1545
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 32(%rdx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1546
    "\tmovq 8(%rcx), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1547
    "\tcmpq 0(%rax), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1548
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\taddq $8, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1549
    "\tcmpq $0, 0(%rax)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1550
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameCheckPrototypeLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameTarget)
    "\taddl 48(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameEnd)
    "\taddq $7, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_next_pname) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_catch)
    "\tmovq %rax, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1569
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1570
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1571
    "\tmovq 112(%rsp), %rbx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1572
    "\tmovq 10680(%rbx), %rsi\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1573
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1574
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1575
    "\tmovq 10608(%rbx), %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1576
    "\tmovq $0, 10608(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1577
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1578
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1579
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_end)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:164
    "\taddl $10, 2800(%rax)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:165
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__73_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__73_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1587
    "\tmovq 0(%r13, %rax, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1589
    "\tmovq -16(%r13), %rcx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:326
    "\tmovq -40(%r13), %r13\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\tpush %rcx\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:140
    "\tret\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329

OFFLINE_ASM_GLOBAL_LABEL(llint_throw_from_slow_path_trampoline)
    "\tmovq 112(%rsp), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1597
    "\tmovq 10664(%rdx), %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1598
    "\tjmp *10672(%rdx)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1599

OFFLINE_ASM_GLOBAL_LABEL(llint_throw_during_call_trampoline)
    "\tpop %rcx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovq 112(%rsp), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1604
    "\tmovq 10664(%rdx), %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1605
    "\tjmp *10672(%rdx)\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1606

OFFLINE_ASM_GLOBAL_LABEL(llint_op_new_array)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_new_array_buffer)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_buffer) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_new_regexp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_regexp) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_less)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_less) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_lesseq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_lesseq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_greater)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_greater) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_greatereq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_greatereq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_mod)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_mod) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_typeof)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_typeof) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_is_object)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_is_object) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_is_function)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_is_function) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_in)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_in) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve_skip)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_skip) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve_base)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_base) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_ensure_property_exists)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_ensure_property_exists) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve_with_base)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_base) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_resolve_with_this)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_this) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_del_by_id)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_del_by_val)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_index)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_index) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_getter_setter)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_getter_setter) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jmp_scopes)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jmp_scopes) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_if_true)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:535

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jtrue)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1231
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__74_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__74_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__74_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__74_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1233
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1234
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:539
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jtrue) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_if_false)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:544

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jfalse)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1231
    "\tcmpq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__75_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__75_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__75_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__75_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1233
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1234
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_75_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:548
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_75_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jfalse) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_if_less)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:553

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__76_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__76_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__76_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__76_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__77_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__77_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__77_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__77_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:557
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:558
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:558
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jless) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jnless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__78_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__78_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__78_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__78_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__79_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__79_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__79_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__79_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_79_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_79_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:565
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_79_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_79_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_79_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_79_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_79_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:566
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_79_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_79_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:566
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_79_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnless) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_if_greater)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:571

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jgreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__80_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__80_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__80_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__80_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__81_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__81_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__81_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__81_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_81_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_81_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:575
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_81_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_81_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_81_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_81_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_81_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:576
    "\tja " LOCAL_LABEL_STRING(_offlineasm_81_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_81_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:576
    "\tja " LOCAL_LABEL_STRING(_offlineasm_81_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreater) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jngreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__82_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__82_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__82_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__82_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__83_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__83_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__83_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__83_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_83_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_83_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:583
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_83_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_83_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_83_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_83_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_83_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_83_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_83_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_83_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:584
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_83_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_83_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_83_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:584
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_83_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_83_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_83_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreater) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_if_lesseq)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:589

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__84_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__84_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__84_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__84_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__85_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__85_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__85_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__85_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_85_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_85_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:593
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_85_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_85_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_85_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_85_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_85_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:594
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_85_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_85_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:594
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_85_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jnlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__86_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__86_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__86_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__86_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__87_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__87_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__87_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__87_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_87_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_87_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_87_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_87_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_87_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_87_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_87_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:602
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_87_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_87_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm0, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:602
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_87_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_if_greatereq)
    "\tnop\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jgreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_89_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_89_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_89_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_89_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_89_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_89_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_89_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_89_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_89_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_89_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:612
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_89_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_89_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_89_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:612
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_89_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_89_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_89_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_jngreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1291
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tcmpq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rax), %rax\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rcx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rdx), %rdx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1296
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_91_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_91_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1303
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_91_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_91_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovd %rax, %xmm0\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:620
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316
    "\ttestq %r14, %rdx\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_91_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tmovd %rdx, %xmm1\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tucomisd %xmm1, %xmm0\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:620
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:42
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:43

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_loop_hint)
    "\tmovq -8(%r13), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:164
    "\taddl $1, 2800(%rax)\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:165
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__91_checkSwitchToJIT__continue) "\n"
    "\tmovl %esi, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:113
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_loop_osr) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:116
    "\ttestq %rax, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:117
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover) "\n"
    "\tjmp *%rax\n"                                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:118

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover)
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:120
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__91_checkSwitchToJIT__continue)
    "\taddq $1, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_switch_string)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_string) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_new_func_exp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func_exp) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_call)
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1411
    "\tmovq -56(%r13, %rbx, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1412
    "\ttestq %r15, %rax\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1413
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_arrayProfileForCall__done) "\n"
    "\tmovq 8(%rax), %rax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1414
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1415
    "\tmovq %rax, 8(%rdx)\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1416

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_arrayProfileForCall__done)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1422
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1423
    "\tmovq 16(%rdx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1424
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__92_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__92_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__92_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__92_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1426
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_doCall__opCallSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1427
    "\taddl $6, %esi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1428
    "\tsall $3, %ebx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1429
    "\taddq %r13, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1430
    "\tmovq 32(%rcx), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1431
    "\tmovq %rcx, -32(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1432
    "\tmovq %rax, -24(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1433
    "\tmovslq -32(%r10, %rsi, 8), %rcx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1434
    "\tmovl %esi, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1435
    "\tmovq %r13, -40(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1436
    "\tmovl %ecx, -48(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1437
    "\tmovq %rbx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1438
    "\tcall *32(%rdx)\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1439
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__opCallSlow)
    "\tleal 6(%esi), %eax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:101
    "\tmovl %eax, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:102
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:105
    "\tcall *%rax\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:157
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

OFFLINE_ASM_GLOBAL_LABEL(llint_op_construct)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1422
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1423
    "\tmovq 16(%rdx), %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1424
    "\tcmpq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__93_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__93_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:129

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__93_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:131
    "\tmovq 2720(%rbx), %rbx\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:132
    "\tsubq $1073741824, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__93_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1426
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_93_doCall__opCallSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1427
    "\taddl $6, %esi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1428
    "\tsall $3, %ebx\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1429
    "\taddq %r13, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1430
    "\tmovq 32(%rcx), %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1431
    "\tmovq %rcx, -32(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1432
    "\tmovq %rax, -24(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1433
    "\tmovslq -32(%r10, %rsi, 8), %rcx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1434
    "\tmovl %esi, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1435
    "\tmovq %r13, -40(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1436
    "\tmovl %ecx, -48(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1437
    "\tmovq %rbx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1438
    "\tcall *32(%rdx)\n"                                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1439
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_doCall__opCallSlow)
    "\tleal 6(%esi), %eax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:101
    "\tmovl %eax, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:102
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:105
    "\tcall *%rax\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:157
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

OFFLINE_ASM_GLOBAL_LABEL(llint_op_call_varargs)
    "\tleal 6(%esi), %eax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:101
    "\tmovl %eax, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:102
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_varargs) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:105
    "\tcall *%rax\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:157
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

OFFLINE_ASM_GLOBAL_LABEL(llint_op_call_eval)
    "\tleal 4(%esi), %eax\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:101
    "\tmovl %eax, -44(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:102
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_eval) "\n"
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:105
    "\tcall *%rax\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:157
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

OFFLINE_ASM_GLOBAL_LABEL(llint_generic_return_point)
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:48
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:50

OFFLINE_ASM_GLOBAL_LABEL(llint_op_strcat)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_strcat) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_method_check)
    "\taddq $1, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_pnames)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_pnames) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLOBAL_LABEL(llint_op_push_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_scope) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_pop_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pop_scope) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $1, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_push_new_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_new_scope) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $4, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_throw)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_throw_reference_error)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw_reference_error) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_profile_will_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_will_call) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_profile_did_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_did_call) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $2, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_op_debug)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_slow_path_debug) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\taddq $5, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:38

OFFLINE_ASM_GLOBAL_LABEL(llint_native_call_trampoline)
    "\tmovq $0, -8(%r13)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1610
    "\tmovq 120(%rsp), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1611
    "\tmovq %r13, 4168(%rax)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1612
    "\tmovq -40(%r13), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovq -24(%rax), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\tmovq %rdx, -24(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1615
    "\tmovq 0(%rsp), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1616
    "\tmovq %rdx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1617
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1618
    "\tsubq $8, %rsp\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1619
    "\tmovq -32(%r13), %rsi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tmovq 24(%rsi), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1621
    "\tmovq %rax, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622
    "\tcall *104(%rdx)\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1623
    "\taddq $8, %rsp\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1624
    "\tmovq 120(%rsp), %rbx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1625
    "\tcmpq $0, 10608(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1626
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1627

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1630
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1631
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1632
    "\tmovq 112(%rsp), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1633
    "\tmovq %r13, 4168(%rax)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1634
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1636

OFFLINE_ASM_GLOBAL_LABEL(llint_native_construct_trampoline)
    "\tmovq $0, -8(%r13)\n"                                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1610
    "\tmovq 120(%rsp), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1611
    "\tmovq %r13, 4168(%rax)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1612
    "\tmovq -40(%r13), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovq -24(%rax), %rdx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\tmovq %rdx, -24(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1615
    "\tmovq 0(%rsp), %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1616
    "\tmovq %rdx, -16(%r13)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1617
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1618
    "\tsubq $8, %rsp\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1619
    "\tmovq -32(%r13), %rsi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tmovq 24(%rsi), %rdx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1621
    "\tmovq %rax, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622
    "\tcall *112(%rdx)\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1623
    "\taddq $8, %rsp\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1624
    "\tmovq 120(%rsp), %rbx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1625
    "\tcmpq $0, 10608(%rbx)\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1626
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_93_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1627

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:130
    "\tmovl -44(%r13), %esi\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1630
    "\tmovq -8(%r13), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1631
    "\tmovq 88(%r10), %r10\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1632
    "\tmovq 112(%rsp), %rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1633
    "\tmovq %r13, 4168(%rax)\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1634
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:69
    "\tmovq %r10, %rbx\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:70
    "\tmovq %r13, %rdi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:54
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:74
    "\tmovq %rdx, %r13\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:75
    "\tmovq %rbx, %r10\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:76
    "\tsubq %r10, %rsi\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:77
    "\tshrq $3, %rsi\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:78
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1636

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_array_length)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_chain)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_custom_chain)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_custom_proto)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_custom_self)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_generic)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_getter_chain)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_getter_proto)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_getter_self)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_proto)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_by_id_self)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_get_string_length)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_generic)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_replace)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_op_put_by_id_transition)
    "\tint $3\n"                                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:789

OFFLINE_ASM_GLOBAL_LABEL(llint_end)
    "\tmovl %eax, 3148725999\n"                                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:113
    "\txorq %rax, %rax\n"                                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:114
    "\tcall *%rax\n"                                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:115
OFFLINE_ASM_END
#endif
