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

// Function: sub_0031C560
// Address: 0x31c560 - 0x31c5bc
void sub_0031C560_0x31c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C560_0x31c560");
#endif

    switch (ctx->pc) {
        case 0x31c5a8u: goto label_31c5a8;
        default: break;
    }

    ctx->pc = 0x31c560u;

    // 0x31c560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31c564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31c568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c56c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x31c56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c570: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31C570u;
    {
        const bool branch_taken_0x31c570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C570u;
        // 0x31c574: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c570) {
            ctx->pc = 0x31C5A8u;
            goto label_31c5a8;
        }
    }
    ctx->pc = 0x31C578u;
    // 0x31c578: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x31c578u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31c57c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31c580: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x31c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x31c584: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31c588: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x31c588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31c58c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c58cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c590: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x31c590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31c594: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x31c594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x31c598: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x31c598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c59c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x31c59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31c5a0: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31C5A0u;
    SET_GPR_U32(ctx, 31, 0x31C5A8u);
    ctx->pc = 0x31C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5A0u;
    // 0x31c5a4: 0xaf868b38  sw          $a2, -0x74C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31C5A0u, 0x31C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5A8u;
label_31c5a8:
    // 0x31c5a8: 0x26020006  addiu       $v0, $s0, 0x6
    ctx->pc = 0x31c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x31c5ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31c5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5B4u;
        // 0x31c5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C5BCu;
}
