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

// Function: sub_0029D140
// Address: 0x29d140 - 0x29d1d4
void sub_0029D140_0x29d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D140_0x29d140");
#endif

    switch (ctx->pc) {
        case 0x29d140u: goto label_29d140;
        case 0x29d144u: goto label_29d144;
        case 0x29d148u: goto label_29d148;
        case 0x29d14cu: goto label_29d14c;
        case 0x29d150u: goto label_29d150;
        case 0x29d154u: goto label_29d154;
        case 0x29d158u: goto label_29d158;
        case 0x29d15cu: goto label_29d15c;
        case 0x29d160u: goto label_29d160;
        case 0x29d164u: goto label_29d164;
        case 0x29d168u: goto label_29d168;
        case 0x29d16cu: goto label_29d16c;
        case 0x29d170u: goto label_29d170;
        case 0x29d174u: goto label_29d174;
        case 0x29d178u: goto label_29d178;
        case 0x29d17cu: goto label_29d17c;
        case 0x29d180u: goto label_29d180;
        case 0x29d184u: goto label_29d184;
        case 0x29d188u: goto label_29d188;
        case 0x29d18cu: goto label_29d18c;
        case 0x29d190u: goto label_29d190;
        case 0x29d194u: goto label_29d194;
        case 0x29d198u: goto label_29d198;
        case 0x29d19cu: goto label_29d19c;
        case 0x29d1a0u: goto label_29d1a0;
        case 0x29d1a4u: goto label_29d1a4;
        case 0x29d1a8u: goto label_29d1a8;
        case 0x29d1acu: goto label_29d1ac;
        case 0x29d1b0u: goto label_29d1b0;
        case 0x29d1b4u: goto label_29d1b4;
        case 0x29d1b8u: goto label_29d1b8;
        case 0x29d1bcu: goto label_29d1bc;
        case 0x29d1c0u: goto label_29d1c0;
        case 0x29d1c4u: goto label_29d1c4;
        case 0x29d1c8u: goto label_29d1c8;
        case 0x29d1ccu: goto label_29d1cc;
        case 0x29d1d0u: goto label_29d1d0;
        default: break;
    }

    ctx->pc = 0x29d140u;

label_29d140:
    // 0x29d140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d144:
    // 0x29d144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29d148:
    // 0x29d148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d14c:
    // 0x29d14c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d150:
    // 0x29d150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d154:
    // 0x29d154: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x29d154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29d158:
    // 0x29d158: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29d158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29d15c:
    // 0x29d15c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_29d160:
    if (ctx->pc == 0x29D160u) {
        ctx->pc = 0x29D164u;
        goto label_29d164;
    }
    ctx->pc = 0x29D15Cu;
    {
        const bool branch_taken_0x29d15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d15c) {
            ctx->pc = 0x29D1C0u;
            goto label_29d1c0;
        }
    }
    ctx->pc = 0x29D164u;
label_29d164:
    // 0x29d164: 0x0  nop
    ctx->pc = 0x29d164u;
    // NOP
label_29d168:
    // 0x29d168: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29d16c:
    // 0x29d16c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x29d16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29d170:
    // 0x29d170: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_29d174:
    // 0x29d174: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x29d174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_29d178:
    // 0x29d178: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x29d178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29d17c:
    // 0x29d17c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x29d17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29d180:
    // 0x29d180: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x29d180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
label_29d184:
    // 0x29d184: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29d184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_29d188:
    // 0x29d188: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x29d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_29d18c:
    // 0x29d18c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x29d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_29d190:
    // 0x29d190: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x29d190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_29d194:
    // 0x29d194: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x29d194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_29d198:
    // 0x29d198: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x29d198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
label_29d19c:
    // 0x29d19c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x29d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_29d1a0:
    // 0x29d1a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_29d1a4:
    if (ctx->pc == 0x29D1A4u) {
        ctx->pc = 0x29D1A8u;
        goto label_29d1a8;
    }
    ctx->pc = 0x29D1A0u;
    {
        const bool branch_taken_0x29d1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d1a0) {
            ctx->pc = 0x29D1B0u;
            goto label_29d1b0;
        }
    }
    ctx->pc = 0x29D1A8u;
label_29d1a8:
    // 0x29d1a8: 0x60f809  jalr        $v1
label_29d1ac:
    if (ctx->pc == 0x29D1ACu) {
        ctx->pc = 0x29D1B0u;
        goto label_29d1b0;
    }
    ctx->pc = 0x29D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29D1B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1A8u, 0x29D1B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D1B0u;
label_29d1b0:
    // 0x29d1b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29d1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29d1b4:
    // 0x29d1b4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_29d1b8:
    if (ctx->pc == 0x29D1B8u) {
        ctx->pc = 0x29D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1B4u;
        // 0x29d1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1BCu;
        goto label_29d1bc;
    }
    ctx->pc = 0x29D1B4u;
    {
        const bool branch_taken_0x29d1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1B4u;
        // 0x29d1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1b4) {
            ctx->pc = 0x29D168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d168;
        }
    }
    ctx->pc = 0x29D1BCu;
label_29d1bc:
    // 0x29d1bc: 0x0  nop
    ctx->pc = 0x29d1bcu;
    // NOP
label_29d1c0:
    // 0x29d1c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d1c4:
    // 0x29d1c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d1c8:
    // 0x29d1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d1cc:
    // 0x29d1cc: 0x3e00008  jr          $ra
label_29d1d0:
    if (ctx->pc == 0x29D1D0u) {
        ctx->pc = 0x29D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1CCu;
        // 0x29d1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1D4u;
        goto label_fallthrough_0x29d1cc;
    }
    ctx->pc = 0x29D1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1CCu;
        // 0x29d1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d1cc:
    ctx->pc = 0x29D1D4u;
}
