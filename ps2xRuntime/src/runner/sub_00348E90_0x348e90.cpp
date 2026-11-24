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

// Function: sub_00348E90
// Address: 0x348e90 - 0x348fa8
void sub_00348E90_0x348e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348E90_0x348e90");
#endif

    switch (ctx->pc) {
        case 0x348ebcu: goto label_348ebc;
        case 0x348eccu: goto label_348ecc;
        case 0x348ee8u: goto label_348ee8;
        case 0x348f68u: goto label_348f68;
        default: break;
    }

    ctx->pc = 0x348e90u;

    // 0x348e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x348e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x348e94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x348e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348e98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x348e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x348e9c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x348e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x348ea0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x348ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x348ea4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x348ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x348ea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x348ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x348eac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x348eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x348eb4: 0xc0bd12c  jal         func_2F44B0
    ctx->pc = 0x348EB4u;
    SET_GPR_U32(ctx, 31, 0x348EBCu);
    ctx->pc = 0x348EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EB4u;
    // 0x348eb8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44B0u, 0x348EB4u, 0x348EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348EBCu;
label_348ebc:
    // 0x348ebc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x348ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x348ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x348ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ec4: 0xc0c318c  jal         func_30C630
    ctx->pc = 0x348EC4u;
    SET_GPR_U32(ctx, 31, 0x348ECCu);
    ctx->pc = 0x348EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348EC4u;
    // 0x348ec8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C630u, 0x348EC4u, 0x348ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348ECCu;
label_348ecc:
    // 0x348ecc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x348eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ed0: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x348ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
    // 0x348ed4: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x348ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x348ed8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x348ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348edc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x348edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ee0: 0x26317a10  addiu       $s1, $s1, 0x7A10
    ctx->pc = 0x348ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31248));
    // 0x348ee4: 0x26107a50  addiu       $s0, $s0, 0x7A50
    ctx->pc = 0x348ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31312));
label_348ee8:
    // 0x348ee8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x348ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x348eec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x348eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x348ef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x348ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x348ef4: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x348ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x348ef8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x348ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x348efc: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x348EFCu;
    {
        const bool branch_taken_0x348efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EFCu;
        // 0x348f00: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348efc) {
            ctx->pc = 0x348F80u;
            goto label_348f80;
        }
    }
    ctx->pc = 0x348F04u;
    // 0x348f04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x348f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x348f08: 0x2a610006  slti        $at, $s3, 0x6
    ctx->pc = 0x348f08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x348f0c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x348F0Cu;
    {
        const bool branch_taken_0x348f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x348F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F0Cu;
        // 0x348f10: 0x653023  subu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f0c) {
            ctx->pc = 0x348F48u;
            goto label_348f48;
        }
    }
    ctx->pc = 0x348F14u;
    // 0x348f14: 0x3c07aaaa  lui         $a3, 0xAAAA
    ctx->pc = 0x348f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43690 << 16));
    // 0x348f18: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x348f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x348f1c: 0x34e7aaab  ori         $a3, $a3, 0xAAAB
    ctx->pc = 0x348f1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)43691);
    // 0x348f20: 0xe60019  multu       $a3, $a2
    ctx->pc = 0x348f20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x348f24: 0x0  nop
    ctx->pc = 0x348f24u;
    // NOP
    // 0x348f28: 0x0  nop
    ctx->pc = 0x348f28u;
    // NOP
    // 0x348f2c: 0x3810  mfhi        $a3
    ctx->pc = 0x348f2cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x348f30: 0x73942  srl         $a3, $a3, 5
    ctx->pc = 0x348f30u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x348f34: 0x67082b  sltu        $at, $v1, $a3
    ctx->pc = 0x348f34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x348f38: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x348F38u;
    {
        const bool branch_taken_0x348f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348f38) {
            ctx->pc = 0x348F60u;
            goto label_348f60;
        }
    }
    ctx->pc = 0x348F40u;
    // 0x348f40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x348F40u;
    {
        const bool branch_taken_0x348f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348f40) {
            ctx->pc = 0x348F68u;
            goto label_348f68;
        }
    }
    ctx->pc = 0x348F48u;
label_348f48:
    // 0x348f48: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x348f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x348f4c: 0x63902  srl         $a3, $a2, 4
    ctx->pc = 0x348f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x348f50: 0x67082b  sltu        $at, $v1, $a3
    ctx->pc = 0x348f50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x348f54: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x348F54u;
    {
        const bool branch_taken_0x348f54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x348f54) {
            ctx->pc = 0x348F68u;
            goto label_348f68;
        }
    }
    ctx->pc = 0x348F5Cu;
    // 0x348f5c: 0x0  nop
    ctx->pc = 0x348f5cu;
    // NOP
label_348f60:
    // 0x348f60: 0xc049522  jal         func_125488
    ctx->pc = 0x348F60u;
    SET_GPR_U32(ctx, 31, 0x348F68u);
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x348F60u, 0x348F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F68u;
label_348f68:
    // 0x348f68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x348f6c: 0x2a63000f  slti        $v1, $s3, 0xF
    ctx->pc = 0x348f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x348f70: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x348f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x348f74: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x348f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x348f78: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x348F78u;
    {
        const bool branch_taken_0x348f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F78u;
        // 0x348f7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f78) {
            ctx->pc = 0x348EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348ee8;
        }
    }
    ctx->pc = 0x348F80u;
label_348f80:
    // 0x348f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348f84: 0xa3838ba4  sb          $v1, -0x745C($gp)
    ctx->pc = 0x348f84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937508), (uint8_t)GPR_U32(ctx, 3));
    // 0x348f88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x348f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348f8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x348f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x348f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x348f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x348FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FA0u;
        // 0x348fa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348FA8u;
}
