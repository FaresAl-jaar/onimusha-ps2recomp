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

// Function: sub_0036A050
// Address: 0x36a050 - 0x36a100
void sub_0036A050_0x36a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A050_0x36a050");
#endif

    switch (ctx->pc) {
        case 0x36a074u: goto label_36a074;
        case 0x36a0a0u: goto label_36a0a0;
        default: break;
    }

    ctx->pc = 0x36a050u;

    // 0x36a050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36a058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36a05c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a060: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36a060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a068: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36a068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a06c: 0xc0da738  jal         func_369CE0
    ctx->pc = 0x36A06Cu;
    SET_GPR_U32(ctx, 31, 0x36A074u);
    ctx->pc = 0x36A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A06Cu;
    // 0x36a070: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369CE0u, 0x36A06Cu, 0x36A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A074u;
label_36a074:
    // 0x36a074: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36a078: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A078u;
    {
        const bool branch_taken_0x36a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a078) {
            ctx->pc = 0x36A088u;
            goto label_36a088;
        }
    }
    ctx->pc = 0x36A080u;
    // 0x36a080: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x36A080u;
    {
        const bool branch_taken_0x36a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A080u;
        // 0x36a084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a080) {
            ctx->pc = 0x36A0E8u;
            goto label_36a0e8;
        }
    }
    ctx->pc = 0x36A088u;
label_36a088:
    // 0x36a088: 0x92452b28  lbu         $a1, 0x2B28($s2)
    ctx->pc = 0x36a088u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11048)));
    // 0x36a08c: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x36a08cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36a090: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x36A090u;
    {
        const bool branch_taken_0x36a090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A090u;
        // 0x36a094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a090) {
            ctx->pc = 0x36A0E0u;
            goto label_36a0e0;
        }
    }
    ctx->pc = 0x36A098u;
    // 0x36a098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a09c: 0x0  nop
    ctx->pc = 0x36a09cu;
    // NOP
label_36a0a0:
    // 0x36a0a0: 0x2462021  addu        $a0, $s2, $a2
    ctx->pc = 0x36a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x36a0a4: 0x90832b4c  lbu         $v1, 0x2B4C($a0)
    ctx->pc = 0x36a0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11084)));
    // 0x36a0a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A0A8u;
    {
        const bool branch_taken_0x36a0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0A8u;
        // 0x36a0ac: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0a8) {
            ctx->pc = 0x36A0D0u;
            goto label_36a0d0;
        }
    }
    ctx->pc = 0x36A0B0u;
    // 0x36a0b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x36a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x36a0b4: 0xac702b2c  sw          $s0, 0x2B2C($v1)
    ctx->pc = 0x36a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11052), GPR_U32(ctx, 16));
    // 0x36a0b8: 0xac712b3c  sw          $s1, 0x2B3C($v1)
    ctx->pc = 0x36a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11068), GPR_U32(ctx, 17));
    // 0x36a0bc: 0xa0822b4c  sb          $v0, 0x2B4C($a0)
    ctx->pc = 0x36a0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11084), (uint8_t)GPR_U32(ctx, 2));
    // 0x36a0c0: 0x92432b29  lbu         $v1, 0x2B29($s2)
    ctx->pc = 0x36a0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11049)));
    // 0x36a0c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a0c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36A0C8u;
    {
        const bool branch_taken_0x36a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0C8u;
        // 0x36a0cc: 0xa2432b29  sb          $v1, 0x2B29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11049), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0c8) {
            ctx->pc = 0x36A0E8u;
            goto label_36a0e8;
        }
    }
    ctx->pc = 0x36A0D0u;
label_36a0d0:
    // 0x36a0d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36a0d4: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x36a0d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36a0d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x36A0D8u;
    {
        const bool branch_taken_0x36a0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a0d8) {
            ctx->pc = 0x36A0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a0a0;
        }
    }
    ctx->pc = 0x36A0E0u;
label_36a0e0:
    // 0x36a0e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0e4: 0x0  nop
    ctx->pc = 0x36a0e4u;
    // NOP
label_36a0e8:
    // 0x36a0e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36a0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a0ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0F8u;
        // 0x36a0fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A100u;
}
