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

// Function: sub_0024F780
// Address: 0x24f780 - 0x24f7f8
void sub_0024F780_0x24f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F780_0x24f780");
#endif

    switch (ctx->pc) {
        case 0x24f7e0u: goto label_24f7e0;
        default: break;
    }

    ctx->pc = 0x24f780u;

    // 0x24f780: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f784: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f788: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f78c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24f794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24f79c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24f79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f7a0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F7A0u;
    {
        const bool branch_taken_0x24f7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7A0u;
        // 0x24f7a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7a0) {
            ctx->pc = 0x24F7B8u;
            goto label_24f7b8;
        }
    }
    ctx->pc = 0x24F7A8u;
    // 0x24f7a8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f7ac: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f7b0: 0x5860000d  blezl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24F7B0u;
    {
        const bool branch_taken_0x24f7b0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24f7b0) {
            ctx->pc = 0x24F7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F7B0u;
            // 0x24f7b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7E8u;
            goto label_24f7e8;
        }
    }
    ctx->pc = 0x24F7B8u;
label_24f7b8:
    // 0x24f7b8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x24f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x24f7bc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F7BCu;
    {
        const bool branch_taken_0x24f7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f7bc) {
            ctx->pc = 0x24F7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F7BCu;
            // 0x24f7c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7C4u;
            goto label_24f7c4;
        }
    }
    ctx->pc = 0x24F7C4u;
label_24f7c4:
    // 0x24f7c4: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x24f7c4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f7c8: 0x1810  mfhi        $v1
    ctx->pc = 0x24f7c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24f7cc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F7CCu;
    {
        const bool branch_taken_0x24f7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f7cc) {
            ctx->pc = 0x24F7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F7CCu;
            // 0x24f7d0: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7E4u;
            goto label_24f7e4;
        }
    }
    ctx->pc = 0x24F7D4u;
    // 0x24f7d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24f7d8: 0xc08d460  jal         func_235180
    ctx->pc = 0x24F7D8u;
    SET_GPR_U32(ctx, 31, 0x24F7E0u);
    ctx->pc = 0x24F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7D8u;
    // 0x24f7dc: 0x2484e830  addiu       $a0, $a0, -0x17D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24F7D8u, 0x24F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7E0u;
label_24f7e0:
    // 0x24f7e0: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x24f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_24f7e4:
    // 0x24f7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f7e8:
    // 0x24f7e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24f7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24f7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7F0u;
        // 0x24f7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F7F8u;
}
