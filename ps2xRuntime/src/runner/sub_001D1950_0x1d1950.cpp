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

// Function: sub_001D1950
// Address: 0x1d1950 - 0x1d19ec
void sub_001D1950_0x1d1950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1950_0x1d1950");
#endif

    switch (ctx->pc) {
        case 0x1d1998u: goto label_1d1998;
        case 0x1d19a8u: goto label_1d19a8;
        default: break;
    }

    ctx->pc = 0x1d1950u;

    // 0x1d1950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d1954: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d1954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d1958: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d1958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d195c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d1960: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d1960u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1964: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d1968: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d1968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d196c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d1970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d197c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1980: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d1980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1984: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1d1984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d1988: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1988u;
    {
        const bool branch_taken_0x1d1988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1988u;
        // 0x1d198c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1988) {
            ctx->pc = 0x1D19C0u;
            goto label_1d19c0;
        }
    }
    ctx->pc = 0x1D1990u;
    // 0x1d1990: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d1994: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1d1998:
    // 0x1d1998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d199c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d199cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19a0: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1D19A0u;
    SET_GPR_U32(ctx, 31, 0x1D19A8u);
    ctx->pc = 0x1D19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19A0u;
    // 0x1d19a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1D19A0u, 0x1D19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19A8u;
label_1d19a8:
    // 0x1d19a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d19a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d19ac: 0x2b1a821  addu        $s5, $s5, $s1
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1d19b0: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x1d19b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d19b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D19B4u;
    {
        const bool branch_taken_0x1d19b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19B4u;
        // 0x1d19b8: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19b4) {
            ctx->pc = 0x1D1998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1998;
        }
    }
    ctx->pc = 0x1D19BCu;
    // 0x1d19bc: 0x0  nop
    ctx->pc = 0x1d19bcu;
    // NOP
label_1d19c0:
    // 0x1d19c0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1d19c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d19c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d19c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d19c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d19cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d19ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d19d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d19d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d19d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d19d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d19d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d19d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d19dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d19dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d19e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d19e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E4u;
        // 0x1d19e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19ECu;
}
