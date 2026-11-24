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

// Function: sub_002371A0
// Address: 0x2371a0 - 0x237270
void sub_002371A0_0x2371a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002371A0_0x2371a0");
#endif

    switch (ctx->pc) {
        case 0x237208u: goto label_237208;
        case 0x237258u: goto label_237258;
        default: break;
    }

    ctx->pc = 0x2371a0u;

    // 0x2371a0: 0x3c0d004d  lui         $t5, 0x4D
    ctx->pc = 0x2371a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)77 << 16));
    // 0x2371a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2371a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2371a8: 0x8da98038  lw          $t1, -0x7FC8($t5)
    ctx->pc = 0x2371a8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4C8038u));
    // 0x2371ac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2371acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2371b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2371b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2371b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2371b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2371bc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2371bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371c0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2371c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2371c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371c8: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2371C8u;
    {
        const bool branch_taken_0x2371c8 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2371CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371C8u;
        // 0x2371cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371c8) {
            ctx->pc = 0x237238u;
            goto label_237238;
        }
    }
    ctx->pc = 0x2371D0u;
    // 0x2371d0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2371d4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2371d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2371d8: 0x24478034  addiu       $a3, $v0, -0x7FCC
    ctx->pc = 0x2371d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934580));
    // 0x2371dc: 0x24848048  addiu       $a0, $a0, -0x7FB8
    ctx->pc = 0x2371dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934600));
    // 0x2371e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2371e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C8034u));
    // 0x2371e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2371e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2371e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2371e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2371ec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2371ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2371f0: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x2371f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2371f4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2371f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2371f8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2371F8u;
    {
        const bool branch_taken_0x2371f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371F8u;
        // 0x2371fc: 0x8da38038  lw          $v1, -0x7FC8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294934584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371f8) {
            ctx->pc = 0x23723Cu;
            goto label_23723c;
        }
    }
    ctx->pc = 0x237200u;
    // 0x237200: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x237200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237204: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x237204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_237208:
    // 0x237208: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x237208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23720c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23720Cu;
    {
        const bool branch_taken_0x23720c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23720Cu;
        // 0x237210: 0x8da38038  lw          $v1, -0x7FC8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294934584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23720c) {
            ctx->pc = 0x23723Cu;
            goto label_23723c;
        }
    }
    ctx->pc = 0x237214u;
    // 0x237214: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x237218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x237218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23721c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x23721cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x237220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237224: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x237224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x237228: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x237228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23722c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x23722cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237230: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x237230u;
    {
        const bool branch_taken_0x237230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237230) {
            ctx->pc = 0x237234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237230u;
            // 0x237234: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237208;
        }
    }
    ctx->pc = 0x237238u;
label_237238:
    // 0x237238: 0x8da38038  lw          $v1, -0x7FC8($t5)
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294934584)));
label_23723c:
    // 0x23723c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23723Cu;
    {
        const bool branch_taken_0x23723c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x237240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23723Cu;
        // 0x237240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23723c) {
            ctx->pc = 0x237260u;
            goto label_237260;
        }
    }
    ctx->pc = 0x237244u;
    // 0x237244: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x237244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237248: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x237248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23724c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x23724cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237250: 0xc08dbf0  jal         func_236FC0
    ctx->pc = 0x237250u;
    SET_GPR_U32(ctx, 31, 0x237258u);
    ctx->pc = 0x237254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237250u;
    // 0x237254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FC0u, 0x237250u, 0x237258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237258u;
label_237258:
    // 0x237258: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x237258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23725c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23725cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237260:
    // 0x237260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237264: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237268: 0x3e00008  jr          $ra
    ctx->pc = 0x237268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237268u;
        // 0x23726c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237270u;
}
