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

// Function: sub_00321BD0
// Address: 0x321bd0 - 0x321cb8
void sub_00321BD0_0x321bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321BD0_0x321bd0");
#endif

    switch (ctx->pc) {
        case 0x321c1cu: goto label_321c1c;
        default: break;
    }

    ctx->pc = 0x321bd0u;

    // 0x321bd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x321bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x321bd4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x321bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x321bd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x321bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x321bdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x321bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x321be0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x321be0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321be4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x321be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x321be8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x321be8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x321becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x321bf0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x321bf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x321bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x321bf8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x321bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x321c00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x321c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321c08: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x321c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321c10: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x321c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c14: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x321C14u;
    SET_GPR_U32(ctx, 31, 0x321C1Cu);
    ctx->pc = 0x321C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C14u;
    // 0x321c18: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212A0u, 0x321C14u, 0x321C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C1Cu;
label_321c1c:
    // 0x321c1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x321c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x321c20: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x321c20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x321c24: 0xaed50010  sw          $s5, 0x10($s6)
    ctx->pc = 0x321c24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 21));
    // 0x321c28: 0xaed40004  sw          $s4, 0x4($s6)
    ctx->pc = 0x321c28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 20));
    // 0x321c2c: 0xaed30008  sw          $s3, 0x8($s6)
    ctx->pc = 0x321c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 19));
    // 0x321c30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x321c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x321c34: 0xaec30044  sw          $v1, 0x44($s6)
    ctx->pc = 0x321c34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 3));
    // 0x321c38: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x321c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x321c3c: 0xaec30048  sw          $v1, 0x48($s6)
    ctx->pc = 0x321c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 72), GPR_U32(ctx, 3));
    // 0x321c40: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x321c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x321c44: 0xaec3004c  sw          $v1, 0x4C($s6)
    ctx->pc = 0x321c44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 76), GPR_U32(ctx, 3));
    // 0x321c48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x321c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x321c4c: 0xaec30018  sw          $v1, 0x18($s6)
    ctx->pc = 0x321c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
    // 0x321c50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x321c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x321c54: 0xaec3001c  sw          $v1, 0x1C($s6)
    ctx->pc = 0x321c54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
    // 0x321c58: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x321c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x321c5c: 0xaec30020  sw          $v1, 0x20($s6)
    ctx->pc = 0x321c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 3));
    // 0x321c60: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x321c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x321c64: 0xaec30024  sw          $v1, 0x24($s6)
    ctx->pc = 0x321c64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 3));
    // 0x321c68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x321c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321c6c: 0xaec30028  sw          $v1, 0x28($s6)
    ctx->pc = 0x321c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 3));
    // 0x321c70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x321c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321c74: 0xaec3002c  sw          $v1, 0x2C($s6)
    ctx->pc = 0x321c74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 3));
    // 0x321c78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x321c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x321c7c: 0xaec30030  sw          $v1, 0x30($s6)
    ctx->pc = 0x321c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 3));
    // 0x321c80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x321c84: 0xaec30034  sw          $v1, 0x34($s6)
    ctx->pc = 0x321c84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 3));
    // 0x321c88: 0xaed70014  sw          $s7, 0x14($s6)
    ctx->pc = 0x321c88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 23));
    // 0x321c8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x321c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x321c90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x321c90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x321c94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x321c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x321c98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x321c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321c9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x321c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321ca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321ca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x321CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CB0u;
        // 0x321cb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321CB8u;
}
