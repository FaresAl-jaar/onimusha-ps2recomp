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

// Function: sub_003BB460
// Address: 0x3bb460 - 0x3bb528
void sub_003BB460_0x3bb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB460_0x3bb460");
#endif

    switch (ctx->pc) {
        case 0x3bb4b0u: goto label_3bb4b0;
        case 0x3bb4f4u: goto label_3bb4f4;
        default: break;
    }

    ctx->pc = 0x3bb460u;

    // 0x3bb460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bb464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bb470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb474: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x3bb474u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bb478: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BB478u;
    {
        const bool branch_taken_0x3bb478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB478u;
        // 0x3bb47c: 0x8c840860  lw          $a0, 0x860($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb478) {
            ctx->pc = 0x3BB4E0u;
            goto label_3bb4e0;
        }
    }
    ctx->pc = 0x3BB480u;
    // 0x3bb480: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB480u;
    {
        const bool branch_taken_0x3bb480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb480) {
            ctx->pc = 0x3BB490u;
            goto label_3bb490;
        }
    }
    ctx->pc = 0x3BB488u;
    // 0x3bb488: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3BB488u;
    {
        const bool branch_taken_0x3bb488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb488) {
            ctx->pc = 0x3BB518u;
            goto label_3bb518;
        }
    }
    ctx->pc = 0x3BB490u;
label_3bb490:
    // 0x3bb490: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB490u;
    {
        const bool branch_taken_0x3bb490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb490) {
            ctx->pc = 0x3BB4B0u;
            goto label_3bb4b0;
        }
    }
    ctx->pc = 0x3BB498u;
    // 0x3bb498: 0x90830506  lbu         $v1, 0x506($a0)
    ctx->pc = 0x3bb498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1286)));
    // 0x3bb49c: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x3bb49cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3bb4a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB4A0u;
    {
        const bool branch_taken_0x3bb4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb4a0) {
            ctx->pc = 0x3BB4B0u;
            goto label_3bb4b0;
        }
    }
    ctx->pc = 0x3BB4A8u;
    // 0x3bb4a8: 0xc0f1604  jal         func_3C5810
    ctx->pc = 0x3BB4A8u;
    SET_GPR_U32(ctx, 31, 0x3BB4B0u);
    ctx->pc = 0x3C5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5810u, 0x3BB4A8u, 0x3BB4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB4B0u;
label_3bb4b0:
    // 0x3bb4b0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3bb4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb4b4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3bb4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb4b8: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3bb4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3bb4bc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3bb4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb4c0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3bb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3bb4c4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3bb4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb4c8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bb4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bb4cc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3bb4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3bb4d0: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3bb4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bb4d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb4d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BB4D8u;
    {
        const bool branch_taken_0x3bb4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4D8u;
        // 0x3bb4dc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4d8) {
            ctx->pc = 0x3BB518u;
            goto label_3bb518;
        }
    }
    ctx->pc = 0x3BB4E0u;
label_3bb4e0:
    // 0x3bb4e0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3bb4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3bb4e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BB4E4u;
    {
        const bool branch_taken_0x3bb4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4E4u;
        // 0x3bb4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4e4) {
            ctx->pc = 0x3BB518u;
            goto label_3bb518;
        }
    }
    ctx->pc = 0x3BB4ECu;
    // 0x3bb4ec: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BB4ECu;
    SET_GPR_U32(ctx, 31, 0x3BB4F4u);
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BB4ECu, 0x3BB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB4F4u;
label_3bb4f4:
    // 0x3bb4f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB4F4u;
    {
        const bool branch_taken_0x3bb4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4F4u;
        // 0x3bb4f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4f4) {
            ctx->pc = 0x3BB500u;
            goto label_3bb500;
        }
    }
    ctx->pc = 0x3BB4FCu;
    // 0x3bb4fc: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3bb4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
label_3bb500:
    // 0x3bb500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bb500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb504: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3bb504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb508: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3bb508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bb50c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb510: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3bb510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb514: 0x0  nop
    ctx->pc = 0x3bb514u;
    // NOP
label_3bb518:
    // 0x3bb518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb520: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB520u;
        // 0x3bb524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB528u;
}
