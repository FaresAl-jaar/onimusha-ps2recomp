#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226768
// Address: 0x226768 - 0x2267bc
void sub_00226768_0x226768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226768_0x226768");
#endif

    switch (ctx->pc) {
        case 0x22678cu: goto label_22678c;
        case 0x226798u: goto label_226798;
        default: break;
    }

    ctx->pc = 0x226768u;

    // 0x226768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22676c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x226770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22677c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226784: 0xc07cdf4  jal         func_1F37D0
    ctx->pc = 0x226784u;
    SET_GPR_U32(ctx, 31, 0x22678Cu);
    ctx->pc = 0x226788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226784u;
    // 0x226788: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F37D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F37D0u, 0x226784u, 0x22678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22678Cu;
label_22678c:
    // 0x22678c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226790: 0xc089902  jal         func_226408
    ctx->pc = 0x226790u;
    SET_GPR_U32(ctx, 31, 0x226798u);
    ctx->pc = 0x226794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226790u;
    // 0x226794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226408u, 0x226790u, 0x226798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226798u;
label_226798:
    // 0x226798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22679c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22679cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267a0: 0x103042  srl         $a2, $s0, 1
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2267a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2267a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2267a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2267a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2267acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2267b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2267b4: 0x8089960  j           func_226580
    ctx->pc = 0x2267B4u;
    ctx->pc = 0x2267B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267B4u;
    // 0x2267b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    sub_00226580_0x226580(rdram, ctx, runtime); return;
    ctx->pc = 0x2267BCu;
}
