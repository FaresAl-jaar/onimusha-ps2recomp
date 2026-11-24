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

// Function: sub_002370C8
// Address: 0x2370c8 - 0x23719c
void sub_002370C8_0x2370c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002370C8_0x2370c8");
#endif

    switch (ctx->pc) {
        case 0x237130u: goto label_237130;
        case 0x237180u: goto label_237180;
        default: break;
    }

    ctx->pc = 0x2370c8u;

    // 0x2370c8: 0x3c0d004d  lui         $t5, 0x4D
    ctx->pc = 0x2370c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)77 << 16));
    // 0x2370cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2370d0: 0x8da98030  lw          $t1, -0x7FD0($t5)
    ctx->pc = 0x2370d0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4C8030u));
    // 0x2370d4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2370d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2370dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2370dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2370e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2370e4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2370e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370e8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2370e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2370ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370f0: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2370F0u;
    {
        const bool branch_taken_0x2370f0 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2370F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370F0u;
        // 0x2370f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370f0) {
            ctx->pc = 0x237160u;
            goto label_237160;
        }
    }
    ctx->pc = 0x2370F8u;
    // 0x2370f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2370f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2370fc: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x237100: 0x2447802c  addiu       $a3, $v0, -0x7FD4
    ctx->pc = 0x237100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934572));
    // 0x237104: 0x24848048  addiu       $a0, $a0, -0x7FB8
    ctx->pc = 0x237104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934600));
    // 0x237108: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x237108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C802Cu));
    // 0x23710c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23710cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x237110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237114: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x237118: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23711c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x23711cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237120: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x237120u;
    {
        const bool branch_taken_0x237120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x8da38030  lw          $v1, -0x7FD0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294934576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237120) {
            ctx->pc = 0x237164u;
            goto label_237164;
        }
    }
    ctx->pc = 0x237128u;
    // 0x237128: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x237128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23712c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_237130:
    // 0x237130: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x237130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x237134: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237134u;
    {
        const bool branch_taken_0x237134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237134u;
        // 0x237138: 0x8da38030  lw          $v1, -0x7FD0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294934576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237134) {
            ctx->pc = 0x237164u;
            goto label_237164;
        }
    }
    ctx->pc = 0x23713Cu;
    // 0x23713c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x237140: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x237140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x237144: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x237144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x237148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23714c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23714cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x237150: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x237150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x237154: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x237154u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237158: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237158) {
            ctx->pc = 0x23715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237158u;
            // 0x23715c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237130;
        }
    }
    ctx->pc = 0x237160u;
label_237160:
    // 0x237160: 0x8da38030  lw          $v1, -0x7FD0($t5)
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294934576)));
label_237164:
    // 0x237164: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x237164u;
    {
        const bool branch_taken_0x237164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x237168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237164u;
        // 0x237168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237164) {
            ctx->pc = 0x23718Cu;
            goto label_23718c;
        }
    }
    ctx->pc = 0x23716Cu;
    // 0x23716c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x23716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237170: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x237170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237174: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x237174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237178: 0xc08dbf0  jal         func_236FC0
    ctx->pc = 0x237178u;
    SET_GPR_U32(ctx, 31, 0x237180u);
    ctx->pc = 0x23717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237178u;
    // 0x23717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FC0u, 0x237178u, 0x237180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237180u;
label_237180:
    // 0x237180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237184: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x237184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x237188: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23718c:
    // 0x23718c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23718cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237194: 0x3e00008  jr          $ra
    ctx->pc = 0x237194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237194u;
        // 0x237198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23719Cu;
}
