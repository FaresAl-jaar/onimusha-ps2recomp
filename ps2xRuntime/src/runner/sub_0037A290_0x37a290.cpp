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

// Function: sub_0037A290
// Address: 0x37a290 - 0x37a338
void sub_0037A290_0x37a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A290_0x37a290");
#endif

    switch (ctx->pc) {
        case 0x37a290u: goto label_37a290;
        case 0x37a294u: goto label_37a294;
        case 0x37a298u: goto label_37a298;
        case 0x37a29cu: goto label_37a29c;
        case 0x37a2a0u: goto label_37a2a0;
        case 0x37a2a4u: goto label_37a2a4;
        case 0x37a2a8u: goto label_37a2a8;
        case 0x37a2acu: goto label_37a2ac;
        case 0x37a2b0u: goto label_37a2b0;
        case 0x37a2b4u: goto label_37a2b4;
        case 0x37a2b8u: goto label_37a2b8;
        case 0x37a2bcu: goto label_37a2bc;
        case 0x37a2c0u: goto label_37a2c0;
        case 0x37a2c4u: goto label_37a2c4;
        case 0x37a2c8u: goto label_37a2c8;
        case 0x37a2ccu: goto label_37a2cc;
        case 0x37a2d0u: goto label_37a2d0;
        case 0x37a2d4u: goto label_37a2d4;
        case 0x37a2d8u: goto label_37a2d8;
        case 0x37a2dcu: goto label_37a2dc;
        case 0x37a2e0u: goto label_37a2e0;
        case 0x37a2e4u: goto label_37a2e4;
        case 0x37a2e8u: goto label_37a2e8;
        case 0x37a2ecu: goto label_37a2ec;
        case 0x37a2f0u: goto label_37a2f0;
        case 0x37a2f4u: goto label_37a2f4;
        case 0x37a2f8u: goto label_37a2f8;
        case 0x37a2fcu: goto label_37a2fc;
        case 0x37a300u: goto label_37a300;
        case 0x37a304u: goto label_37a304;
        case 0x37a308u: goto label_37a308;
        case 0x37a30cu: goto label_37a30c;
        case 0x37a310u: goto label_37a310;
        case 0x37a314u: goto label_37a314;
        case 0x37a318u: goto label_37a318;
        case 0x37a31cu: goto label_37a31c;
        case 0x37a320u: goto label_37a320;
        case 0x37a324u: goto label_37a324;
        case 0x37a328u: goto label_37a328;
        case 0x37a32cu: goto label_37a32c;
        case 0x37a330u: goto label_37a330;
        case 0x37a334u: goto label_37a334;
        default: break;
    }

    ctx->pc = 0x37a290u;

label_37a290:
    // 0x37a290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37a294:
    // 0x37a294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37a298:
    // 0x37a298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37a29c:
    // 0x37a29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a2a0:
    // 0x37a2a0: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x37a2a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_37a2a4:
    // 0x37a2a4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
label_37a2a8:
    if (ctx->pc == 0x37A2A8u) {
        ctx->pc = 0x37A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2A4u;
        // 0x37a2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A2ACu;
        goto label_37a2ac;
    }
    ctx->pc = 0x37A2A4u;
    {
        const bool branch_taken_0x37a2a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x37A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2A4u;
        // 0x37a2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2a4) {
            ctx->pc = 0x37A328u;
            goto label_37a328;
        }
    }
    ctx->pc = 0x37A2ACu;
label_37a2ac:
    // 0x37a2ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37a2b0:
    // 0x37a2b0: 0x10c4000f  beq         $a2, $a0, . + 4 + (0xF << 2)
label_37a2b4:
    if (ctx->pc == 0x37A2B4u) {
        ctx->pc = 0x37A2B8u;
        goto label_37a2b8;
    }
    ctx->pc = 0x37A2B0u;
    {
        const bool branch_taken_0x37a2b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a2b0) {
            ctx->pc = 0x37A2F0u;
            goto label_37a2f0;
        }
    }
    ctx->pc = 0x37A2B8u;
label_37a2b8:
    // 0x37a2b8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_37a2bc:
    if (ctx->pc == 0x37A2BCu) {
        ctx->pc = 0x37A2C0u;
        goto label_37a2c0;
    }
    ctx->pc = 0x37A2B8u;
    {
        const bool branch_taken_0x37a2b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a2b8) {
            ctx->pc = 0x37A2C8u;
            goto label_37a2c8;
        }
    }
    ctx->pc = 0x37A2C0u;
label_37a2c0:
    // 0x37a2c0: 0x10000019  b           . + 4 + (0x19 << 2)
label_37a2c4:
    if (ctx->pc == 0x37A2C4u) {
        ctx->pc = 0x37A2C8u;
        goto label_37a2c8;
    }
    ctx->pc = 0x37A2C0u;
    {
        const bool branch_taken_0x37a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a2c0) {
            ctx->pc = 0x37A328u;
            goto label_37a328;
        }
    }
    ctx->pc = 0x37A2C8u;
label_37a2c8:
    // 0x37a2c8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x37a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_37a2cc:
    // 0x37a2cc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x37a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_37a2d0:
    // 0x37a2d0: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x37a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_37a2d4:
    // 0x37a2d4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x37a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_37a2d8:
    // 0x37a2d8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x37a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_37a2dc:
    // 0x37a2dc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x37a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_37a2e0:
    // 0x37a2e0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37a2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_37a2e4:
    // 0x37a2e4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x37a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_37a2e8:
    // 0x37a2e8: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x37a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_37a2ec:
    // 0x37a2ec: 0x0  nop
    ctx->pc = 0x37a2ecu;
    // NOP
label_37a2f0:
    // 0x37a2f0: 0x96040824  lhu         $a0, 0x824($s0)
    ctx->pc = 0x37a2f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
label_37a2f4:
    // 0x37a2f4: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x37a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_37a2f8:
    // 0x37a2f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37a2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_37a2fc:
    // 0x37a2fc: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_37a300:
    if (ctx->pc == 0x37A300u) {
        ctx->pc = 0x37A304u;
        goto label_37a304;
    }
    ctx->pc = 0x37A2FCu;
    {
        const bool branch_taken_0x37a2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37a2fc) {
            ctx->pc = 0x37A328u;
            goto label_37a328;
        }
    }
    ctx->pc = 0x37A304u;
label_37a304:
    // 0x37a304: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x37a304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_37a308:
    // 0x37a308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37a30c:
    // 0x37a30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a310:
    // 0x37a310: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x37a310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_37a314:
    // 0x37a314: 0x320f809  jalr        $t9
label_37a318:
    if (ctx->pc == 0x37A318u) {
        ctx->pc = 0x37A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A314u;
        // 0x37a318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A31Cu;
        goto label_37a31c;
    }
    ctx->pc = 0x37A314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A31Cu);
        ctx->pc = 0x37A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A314u;
        // 0x37a318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A314u, 0x37A31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A31Cu;
label_37a31c:
    // 0x37a31c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37a320:
    // 0x37a320: 0xa6030786  sh          $v1, 0x786($s0)
    ctx->pc = 0x37a320u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
label_37a324:
    // 0x37a324: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37a324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37a328:
    // 0x37a328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37a32c:
    // 0x37a32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a330:
    // 0x37a330: 0x3e00008  jr          $ra
label_37a334:
    if (ctx->pc == 0x37A334u) {
        ctx->pc = 0x37A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A330u;
        // 0x37a334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A338u;
        goto label_fallthrough_0x37a330;
    }
    ctx->pc = 0x37A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A330u;
        // 0x37a334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37a330:
    ctx->pc = 0x37A338u;
}
