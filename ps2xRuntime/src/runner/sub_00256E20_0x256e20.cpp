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

// Function: sub_00256E20
// Address: 0x256e20 - 0x256ef4
void sub_00256E20_0x256e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256E20_0x256e20");
#endif

    switch (ctx->pc) {
        case 0x256e48u: goto label_256e48;
        case 0x256e68u: goto label_256e68;
        case 0x256edcu: goto label_256edc;
        default: break;
    }

    ctx->pc = 0x256e20u;

    // 0x256e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x256e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x256e28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x256e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x256e2c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x256e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256e30: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x256e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256e34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x256e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x256e38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256E38u;
    {
        const bool branch_taken_0x256e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E38u;
        // 0x256e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e38) {
            ctx->pc = 0x256E60u;
            goto label_256e60;
        }
    }
    ctx->pc = 0x256E40u;
    // 0x256e40: 0xc0954d4  jal         func_255350
    ctx->pc = 0x256E40u;
    SET_GPR_U32(ctx, 31, 0x256E48u);
    ctx->pc = 0x255350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255350u, 0x256E40u, 0x256E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E48u;
label_256e48:
    // 0x256e48: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256e4c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x256e4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256e50: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x256e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x256e54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x256E54u;
    {
        const bool branch_taken_0x256e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E54u;
        // 0x256e58: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e54) {
            ctx->pc = 0x256EE0u;
            goto label_256ee0;
        }
    }
    ctx->pc = 0x256E5Cu;
    // 0x256e5c: 0x0  nop
    ctx->pc = 0x256e5cu;
    // NOP
label_256e60:
    // 0x256e60: 0xc095580  jal         func_255600
    ctx->pc = 0x256E60u;
    SET_GPR_U32(ctx, 31, 0x256E68u);
    ctx->pc = 0x255600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255600u, 0x256E60u, 0x256E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E68u;
label_256e68:
    // 0x256e68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256e6c: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x256e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x256e70: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x256E70u;
    {
        const bool branch_taken_0x256e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256e70) {
            ctx->pc = 0x256EE0u;
            goto label_256ee0;
        }
    }
    ctx->pc = 0x256E78u;
    // 0x256e78: 0x8e0c0050  lw          $t4, 0x50($s0)
    ctx->pc = 0x256e78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256e7c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x256e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x256e80: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x256e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x256e84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x256e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x256e88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x256e8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x256e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x256e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x256e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ea4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x256ea4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ea8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x256ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x256eac: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x256eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x256eb0: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x256eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256eb4: 0x8e0c0050  lw          $t4, 0x50($s0)
    ctx->pc = 0x256eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256eb8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x256eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x256ebc: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x256ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x256ec0: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x256ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256ec4: 0x8e0c0050  lw          $t4, 0x50($s0)
    ctx->pc = 0x256ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256ec8: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x256ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x256ecc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x256eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x256ed0: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x256ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x256ed4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x256ED4u;
    SET_GPR_U32(ctx, 31, 0x256EDCu);
    ctx->pc = 0x256ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256ED4u;
    // 0x256ed8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x256ED4u, 0x256EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EDCu;
label_256edc:
    // 0x256edc: 0x0  nop
    ctx->pc = 0x256edcu;
    // NOP
label_256ee0:
    // 0x256ee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256eec: 0x3e00008  jr          $ra
    ctx->pc = 0x256EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EECu;
        // 0x256ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256EF4u;
}
