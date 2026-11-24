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

// Function: sub_001E3EA0
// Address: 0x1e3ea0 - 0x1e4004
void sub_001E3EA0_0x1e3ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3EA0_0x1e3ea0");
#endif

    switch (ctx->pc) {
        case 0x1e3ea0u: goto label_1e3ea0;
        case 0x1e3ea4u: goto label_1e3ea4;
        case 0x1e3ea8u: goto label_1e3ea8;
        case 0x1e3eacu: goto label_1e3eac;
        case 0x1e3eb0u: goto label_1e3eb0;
        case 0x1e3eb4u: goto label_1e3eb4;
        case 0x1e3eb8u: goto label_1e3eb8;
        case 0x1e3ebcu: goto label_1e3ebc;
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        case 0x1e3f34u: goto label_1e3f34;
        case 0x1e3f38u: goto label_1e3f38;
        case 0x1e3f3cu: goto label_1e3f3c;
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        case 0x1e3f98u: goto label_1e3f98;
        case 0x1e3f9cu: goto label_1e3f9c;
        case 0x1e3fa0u: goto label_1e3fa0;
        case 0x1e3fa4u: goto label_1e3fa4;
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fb0u: goto label_1e3fb0;
        case 0x1e3fb4u: goto label_1e3fb4;
        case 0x1e3fb8u: goto label_1e3fb8;
        case 0x1e3fbcu: goto label_1e3fbc;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fc4u: goto label_1e3fc4;
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fd0u: goto label_1e3fd0;
        case 0x1e3fd4u: goto label_1e3fd4;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3fdcu: goto label_1e3fdc;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fe4u: goto label_1e3fe4;
        case 0x1e3fe8u: goto label_1e3fe8;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e3ff4u: goto label_1e3ff4;
        case 0x1e3ff8u: goto label_1e3ff8;
        case 0x1e3ffcu: goto label_1e3ffc;
        case 0x1e4000u: goto label_1e4000;
        default: break;
    }

    ctx->pc = 0x1e3ea0u;

label_1e3ea0:
    // 0x1e3ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3ea4:
    // 0x1e3ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e3ea8:
    // 0x1e3ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3eac:
    // 0x1e3eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3eb0:
    // 0x1e3eb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e3eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e3eb4:
    // 0x1e3eb4: 0xc078684  jal         func_1E1A10
label_1e3eb8:
    if (ctx->pc == 0x1E3EB8u) {
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EB4u;
        // 0x1e3eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EBCu;
        goto label_1e3ebc;
    }
    ctx->pc = 0x1E3EB4u;
    SET_GPR_U32(ctx, 31, 0x1E3EBCu);
    ctx->pc = 0x1E3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3EB4u;
    // 0x1e3eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E3EB4u, 0x1E3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EBCu;
label_1e3ebc:
    // 0x1e3ebc: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1e3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_1e3ec0:
    // 0x1e3ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3ec4:
    // 0x1e3ec4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1e3ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e3ec8:
    // 0x1e3ec8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1e3ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1e3ecc:
    // 0x1e3ecc: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x1e3eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
label_1e3ed0:
    // 0x1e3ed0: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x1e3ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_1e3ed4:
    // 0x1e3ed4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3ed8:
    // 0x1e3ed8: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1e3ed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1e3edc:
    // 0x1e3edc: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1e3edcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_1e3ee0:
    // 0x1e3ee0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3ee4:
    // 0x1e3ee4: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1e3ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1e3ee8:
    // 0x1e3ee8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e3ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e3eec:
    // 0x1e3eec: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e3ef0:
    // 0x1e3ef0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1e3ef4:
    // 0x1e3ef4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3ef8:
    // 0x1e3ef8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1e3ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e3efc:
    // 0x1e3efc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e3f00:
    // 0x1e3f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3f04:
    // 0x1e3f04: 0xc0741a4  jal         func_1D0690
label_1e3f08:
    if (ctx->pc == 0x1E3F08u) {
        ctx->pc = 0x1E3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F04u;
        // 0x1e3f08: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F0Cu;
        goto label_1e3f0c;
    }
    ctx->pc = 0x1E3F04u;
    SET_GPR_U32(ctx, 31, 0x1E3F0Cu);
    ctx->pc = 0x1E3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F04u;
    // 0x1e3f08: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E3F04u, 0x1E3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F0Cu;
label_1e3f0c:
    // 0x1e3f0c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1e3f10:
    // 0x1e3f10: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e3f14:
    // 0x1e3f14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e3f18:
    if (ctx->pc == 0x1E3F18u) {
        ctx->pc = 0x1E3F1Cu;
        goto label_1e3f1c;
    }
    ctx->pc = 0x1E3F14u;
    {
        const bool branch_taken_0x1e3f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f14) {
            ctx->pc = 0x1E3F38u;
            goto label_1e3f38;
        }
    }
    ctx->pc = 0x1E3F1Cu;
label_1e3f1c:
    // 0x1e3f1c: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e3f20:
    // 0x1e3f20: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e3f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e3f24:
    // 0x1e3f24: 0x320f809  jalr        $t9
label_1e3f28:
    if (ctx->pc == 0x1E3F28u) {
        ctx->pc = 0x1E3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F24u;
        // 0x1e3f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F2Cu;
        goto label_1e3f2c;
    }
    ctx->pc = 0x1E3F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3F2Cu);
        ctx->pc = 0x1E3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F24u;
        // 0x1e3f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F24u, 0x1E3F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F2Cu;
label_1e3f2c:
    // 0x1e3f2c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e3f30:
    if (ctx->pc == 0x1E3F30u) {
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F2Cu;
        // 0x1e3f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F34u;
        goto label_1e3f34;
    }
    ctx->pc = 0x1E3F2Cu;
    {
        const bool branch_taken_0x1e3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F2Cu;
        // 0x1e3f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f2c) {
            ctx->pc = 0x1E3FF0u;
            goto label_1e3ff0;
        }
    }
    ctx->pc = 0x1E3F34u;
label_1e3f34:
    // 0x1e3f34: 0x0  nop
    ctx->pc = 0x1e3f34u;
    // NOP
label_1e3f38:
    // 0x1e3f38: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3f3c:
    // 0x1e3f3c: 0x9043000a  lbu         $v1, 0xA($v0)
    ctx->pc = 0x1e3f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_1e3f40:
    // 0x1e3f40: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e3f44:
    // 0x1e3f44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e3f48:
    // 0x1e3f48: 0xc0741a4  jal         func_1D0690
label_1e3f4c:
    if (ctx->pc == 0x1E3F4Cu) {
        ctx->pc = 0x1E3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F48u;
        // 0x1e3f4c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F50u;
        goto label_1e3f50;
    }
    ctx->pc = 0x1E3F48u;
    SET_GPR_U32(ctx, 31, 0x1E3F50u);
    ctx->pc = 0x1E3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F48u;
    // 0x1e3f4c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E3F48u, 0x1E3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F50u;
label_1e3f50:
    // 0x1e3f50: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1e3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1e3f54:
    // 0x1e3f54: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1e3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e3f58:
    // 0x1e3f58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e3f5c:
    if (ctx->pc == 0x1E3F5Cu) {
        ctx->pc = 0x1E3F60u;
        goto label_1e3f60;
    }
    ctx->pc = 0x1E3F58u;
    {
        const bool branch_taken_0x1e3f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f58) {
            ctx->pc = 0x1E3F78u;
            goto label_1e3f78;
        }
    }
    ctx->pc = 0x1E3F60u;
label_1e3f60:
    // 0x1e3f60: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e3f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e3f64:
    // 0x1e3f64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e3f68:
    // 0x1e3f68: 0x320f809  jalr        $t9
label_1e3f6c:
    if (ctx->pc == 0x1E3F6Cu) {
        ctx->pc = 0x1E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F68u;
        // 0x1e3f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F70u;
        goto label_1e3f70;
    }
    ctx->pc = 0x1E3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3F70u);
        ctx->pc = 0x1E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F68u;
        // 0x1e3f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F68u, 0x1E3F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F70u;
label_1e3f70:
    // 0x1e3f70: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e3f74:
    if (ctx->pc == 0x1E3F74u) {
        ctx->pc = 0x1E3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F70u;
        // 0x1e3f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F78u;
        goto label_1e3f78;
    }
    ctx->pc = 0x1E3F70u;
    {
        const bool branch_taken_0x1e3f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F70u;
        // 0x1e3f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f70) {
            ctx->pc = 0x1E3FF0u;
            goto label_1e3ff0;
        }
    }
    ctx->pc = 0x1E3F78u;
label_1e3f78:
    // 0x1e3f78: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e3f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3f7c:
    // 0x1e3f7c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1e3f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e3f80:
    // 0x1e3f80: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e3f80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3f84:
    // 0x1e3f84: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e3f88:
    if (ctx->pc == 0x1E3F88u) {
        ctx->pc = 0x1E3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F84u;
        // 0x1e3f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F8Cu;
        goto label_1e3f8c;
    }
    ctx->pc = 0x1E3F84u;
    {
        const bool branch_taken_0x1e3f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F84u;
        // 0x1e3f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f84) {
            ctx->pc = 0x1E3FE0u;
            goto label_1e3fe0;
        }
    }
    ctx->pc = 0x1E3F8Cu;
label_1e3f8c:
    // 0x1e3f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f90:
    // 0x1e3f90: 0x24057ffe  addiu       $a1, $zero, 0x7FFE
    ctx->pc = 0x1e3f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e3f94:
    // 0x1e3f94: 0x0  nop
    ctx->pc = 0x1e3f94u;
    // NOP
label_1e3f98:
    // 0x1e3f98: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e3f9c:
    // 0x1e3f9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e3fa0:
    // 0x1e3fa0: 0xa4450030  sh          $a1, 0x30($v0)
    ctx->pc = 0x1e3fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 5));
label_1e3fa4:
    // 0x1e3fa4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3fa8:
    // 0x1e3fa8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e3fac:
    // 0x1e3fac: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1e3facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e3fb0:
    // 0x1e3fb0: 0x9084000a  lbu         $a0, 0xA($a0)
    ctx->pc = 0x1e3fb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_1e3fb4:
    // 0x1e3fb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e3fb8:
    // 0x1e3fb8: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x1e3fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e3fbc:
    // 0x1e3fbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e3fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e3fc0:
    // 0x1e3fc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e3fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e3fc4:
    // 0x1e3fc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e3fc8:
    // 0x1e3fc8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_1e3fcc:
    // 0x1e3fcc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3fd0:
    // 0x1e3fd0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1e3fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e3fd4:
    // 0x1e3fd4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1e3fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3fd8:
    // 0x1e3fd8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1e3fdc:
    if (ctx->pc == 0x1E3FDCu) {
        ctx->pc = 0x1E3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FD8u;
        // 0x1e3fdc: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FE0u;
        goto label_1e3fe0;
    }
    ctx->pc = 0x1E3FD8u;
    {
        const bool branch_taken_0x1e3fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FD8u;
        // 0x1e3fdc: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fd8) {
            ctx->pc = 0x1E3F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3f98;
        }
    }
    ctx->pc = 0x1E3FE0u;
label_1e3fe0:
    // 0x1e3fe0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1e3fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1e3fe4:
    // 0x1e3fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3fe8:
    // 0x1e3fe8: 0xa603003e  sh          $v1, 0x3E($s0)
    ctx->pc = 0x1e3fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 3));
label_1e3fec:
    // 0x1e3fec: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x1e3fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
label_1e3ff0:
    // 0x1e3ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3ff4:
    // 0x1e3ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3ff8:
    // 0x1e3ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3ffc:
    // 0x1e3ffc: 0x3e00008  jr          $ra
label_1e4000:
    if (ctx->pc == 0x1E4000u) {
        ctx->pc = 0x1E4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FFCu;
        // 0x1e4000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4004u;
        goto label_fallthrough_0x1e3ffc;
    }
    ctx->pc = 0x1E3FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FFCu;
        // 0x1e4000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3ffc:
    ctx->pc = 0x1E4004u;
}
