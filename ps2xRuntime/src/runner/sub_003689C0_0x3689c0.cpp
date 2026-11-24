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

// Function: sub_003689C0
// Address: 0x3689c0 - 0x368a58
void sub_003689C0_0x3689c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003689C0_0x3689c0");
#endif

    switch (ctx->pc) {
        case 0x3689d4u: goto label_3689d4;
        case 0x3689f0u: goto label_3689f0;
        case 0x368a40u: goto label_368a40;
        default: break;
    }

    ctx->pc = 0x3689c0u;

    // 0x3689c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3689c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3689c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3689c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3689c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3689c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3689cc: 0xc0a639c  jal         func_298E70
    ctx->pc = 0x3689CCu;
    SET_GPR_U32(ctx, 31, 0x3689D4u);
    ctx->pc = 0x3689D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689CCu;
    // 0x3689d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E70u, 0x3689CCu, 0x3689D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689D4u;
label_3689d4:
    // 0x3689d4: 0x92032b25  lbu         $v1, 0x2B25($s0)
    ctx->pc = 0x3689d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x3689d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3689D8u;
    {
        const bool branch_taken_0x3689d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3689d8) {
            ctx->pc = 0x3689E8u;
            goto label_3689e8;
        }
    }
    ctx->pc = 0x3689E0u;
    // 0x3689e0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3689E0u;
    {
        const bool branch_taken_0x3689e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3689e0) {
            ctx->pc = 0x368A48u;
            goto label_368a48;
        }
    }
    ctx->pc = 0x3689E8u;
label_3689e8:
    // 0x3689e8: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x3689E8u;
    SET_GPR_U32(ctx, 31, 0x3689F0u);
    ctx->pc = 0x3689ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689E8u;
    // 0x3689ec: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x3689E8u, 0x3689F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689F0u;
label_3689f0:
    // 0x3689f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3689F0u;
    {
        const bool branch_taken_0x3689f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3689f0) {
            ctx->pc = 0x368A20u;
            goto label_368a20;
        }
    }
    ctx->pc = 0x3689F8u;
    // 0x3689f8: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x3689f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3689fc: 0x96032b26  lhu         $v1, 0x2B26($s0)
    ctx->pc = 0x3689fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11046)));
    // 0x368a00: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368a04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x368A04u;
    {
        const bool branch_taken_0x368a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a04) {
            ctx->pc = 0x368A14u;
            goto label_368a14;
        }
    }
    ctx->pc = 0x368A0Cu;
    // 0x368a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368A0Cu;
    {
        const bool branch_taken_0x368a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A0Cu;
        // 0x368a10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a0c) {
            ctx->pc = 0x368A18u;
            goto label_368a18;
        }
    }
    ctx->pc = 0x368A14u;
label_368a14:
    // 0x368a14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x368a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_368a18:
    // 0x368a18: 0xa6032b26  sh          $v1, 0x2B26($s0)
    ctx->pc = 0x368a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11046), (uint16_t)GPR_U32(ctx, 3));
    // 0x368a1c: 0x0  nop
    ctx->pc = 0x368a1cu;
    // NOP
label_368a20:
    // 0x368a20: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x368a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x368a24: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x368a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368a28: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x368A28u;
    {
        const bool branch_taken_0x368a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A28u;
        // 0x368a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a28) {
            ctx->pc = 0x368A48u;
            goto label_368a48;
        }
    }
    ctx->pc = 0x368A30u;
    // 0x368a30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x368a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x368a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a38: 0xc0a5564  jal         func_295590
    ctx->pc = 0x368A38u;
    SET_GPR_U32(ctx, 31, 0x368A40u);
    ctx->pc = 0x368A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368A38u;
    // 0x368a3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295590u, 0x368A38u, 0x368A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368A40u;
label_368a40:
    // 0x368a40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x368a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368a44: 0xa2032b25  sb          $v1, 0x2B25($s0)
    ctx->pc = 0x368a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 3));
label_368a48:
    // 0x368a48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368a50: 0x3e00008  jr          $ra
    ctx->pc = 0x368A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A50u;
        // 0x368a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368A58u;
}
