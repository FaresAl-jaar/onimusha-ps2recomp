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

// Function: sub_00201F18
// Address: 0x201f18 - 0x201f9c
void sub_00201F18_0x201f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F18_0x201f18");
#endif

    switch (ctx->pc) {
        case 0x201f28u: goto label_201f28;
        default: break;
    }

    ctx->pc = 0x201f18u;

    // 0x201f18: 0x2489000a  addiu       $t1, $a0, 0xA
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x201f1c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x201f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f24: 0x0  nop
    ctx->pc = 0x201f24u;
    // NOP
label_201f28:
    // 0x201f28: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x201f2c: 0x24e4002f  addiu       $a0, $a3, 0x2F
    ctx->pc = 0x201f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 47));
    // 0x201f30: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x201f30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201f34: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x201f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f38: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x201f38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x201f3c: 0x28e40000  slti        $a0, $a3, 0x0
    ctx->pc = 0x201f3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201f40: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x201f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x201f44: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x201f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f48: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x201f4c: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x201f4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x201f50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x201f54: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x201f54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x201f58: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x201f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x201f5c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201f60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201f64: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x201f68: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x201f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x201f6c: 0x94650040  lhu         $a1, 0x40($v1)
    ctx->pc = 0x201f6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x201f70: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x201f70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x201f74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x201f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x201f78: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x201f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x201f7c: 0x28e60400  slti        $a2, $a3, 0x400
    ctx->pc = 0x201f7cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x201f80: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x201f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x201f84: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x201f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x201f88: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x201f88u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x201f8c: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x201F8Cu;
    {
        const bool branch_taken_0x201f8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F8Cu;
        // 0x201f90: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f8c) {
            ctx->pc = 0x201F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201f28;
        }
    }
    ctx->pc = 0x201F94u;
    // 0x201f94: 0x3e00008  jr          $ra
    ctx->pc = 0x201F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F9Cu;
}
