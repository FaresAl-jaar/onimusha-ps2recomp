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

// Function: sub_003EE790
// Address: 0x3ee790 - 0x3ee870
void sub_003EE790_0x3ee790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE790_0x3ee790");
#endif

    switch (ctx->pc) {
        case 0x3ee7f0u: goto label_3ee7f0;
        case 0x3ee800u: goto label_3ee800;
        default: break;
    }

    ctx->pc = 0x3ee790u;

    // 0x3ee790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ee794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ee798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ee798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ee79c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ee79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ee7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ee7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee7a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ee7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee7a8: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3EE7A8u;
    {
        const bool branch_taken_0x3ee7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ee7a8) {
            ctx->pc = 0x3EE7E8u;
            goto label_3ee7e8;
        }
    }
    ctx->pc = 0x3EE7B0u;
    // 0x3ee7b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE7B0u;
    {
        const bool branch_taken_0x3ee7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee7b0) {
            ctx->pc = 0x3EE7C0u;
            goto label_3ee7c0;
        }
    }
    ctx->pc = 0x3EE7B8u;
    // 0x3ee7b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3EE7B8u;
    {
        const bool branch_taken_0x3ee7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee7b8) {
            ctx->pc = 0x3EE860u;
            goto label_3ee860;
        }
    }
    ctx->pc = 0x3EE7C0u;
label_3ee7c0:
    // 0x3ee7c0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ee7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee7c4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ee7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee7c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ee7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ee7cc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ee7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee7d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee7d4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ee7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee7d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ee7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ee7dc: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ee7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3ee7e0: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3ee7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee7e4: 0x0  nop
    ctx->pc = 0x3ee7e4u;
    // NOP
label_3ee7e8:
    // 0x3ee7e8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EE7E8u;
    SET_GPR_U32(ctx, 31, 0x3EE7F0u);
    ctx->pc = 0x3EE7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE7E8u;
    // 0x3ee7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EE7E8u, 0x3EE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE7F0u;
label_3ee7f0:
    // 0x3ee7f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE7F0u;
    {
        const bool branch_taken_0x3ee7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7F0u;
        // 0x3ee7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee7f0) {
            ctx->pc = 0x3EE808u;
            goto label_3ee808;
        }
    }
    ctx->pc = 0x3EE7F8u;
    // 0x3ee7f8: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EE7F8u;
    SET_GPR_U32(ctx, 31, 0x3EE800u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EE7F8u, 0x3EE800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE800u;
label_3ee800:
    // 0x3ee800: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3EE800u;
    {
        const bool branch_taken_0x3ee800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee800) {
            ctx->pc = 0x3EE860u;
            goto label_3ee860;
        }
    }
    ctx->pc = 0x3EE808u;
label_3ee808:
    // 0x3ee808: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ee808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ee80c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EE80Cu;
    {
        const bool branch_taken_0x3ee80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee80c) {
            ctx->pc = 0x3EE838u;
            goto label_3ee838;
        }
    }
    ctx->pc = 0x3EE814u;
    // 0x3ee814: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ee814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee818: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ee818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee81c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ee81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ee820: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ee820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee824: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3ee824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ee828: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ee828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ee82c: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3ee82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee830: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3ee830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3ee834: 0x0  nop
    ctx->pc = 0x3ee834u;
    // NOP
label_3ee838:
    // 0x3ee838: 0x86032b34  lh          $v1, 0x2B34($s0)
    ctx->pc = 0x3ee838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11060)));
    // 0x3ee83c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE83Cu;
    {
        const bool branch_taken_0x3ee83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee83c) {
            ctx->pc = 0x3EE850u;
            goto label_3ee850;
        }
    }
    ctx->pc = 0x3EE844u;
    // 0x3ee844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ee844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ee848: 0xa6032b34  sh          $v1, 0x2B34($s0)
    ctx->pc = 0x3ee848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11060), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee84c: 0x0  nop
    ctx->pc = 0x3ee84cu;
    // NOP
label_3ee850:
    // 0x3ee850: 0x86032b34  lh          $v1, 0x2B34($s0)
    ctx->pc = 0x3ee850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11060)));
    // 0x3ee854: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EE854u;
    {
        const bool branch_taken_0x3ee854 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE854u;
        // 0x3ee858: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee854) {
            ctx->pc = 0x3EE860u;
            goto label_3ee860;
        }
    }
    ctx->pc = 0x3EE85Cu;
    // 0x3ee85c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ee85cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ee860:
    // 0x3ee860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ee860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ee864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee868: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE868u;
        // 0x3ee86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE870u;
}
