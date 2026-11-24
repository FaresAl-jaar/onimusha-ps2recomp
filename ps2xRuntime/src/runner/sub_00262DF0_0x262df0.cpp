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

// Function: sub_00262DF0
// Address: 0x262df0 - 0x263170
void sub_00262DF0_0x262df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262DF0_0x262df0");
#endif

    switch (ctx->pc) {
        case 0x262eacu: goto label_262eac;
        case 0x262f30u: goto label_262f30;
        case 0x262f8cu: goto label_262f8c;
        case 0x262fecu: goto label_262fec;
        case 0x263074u: goto label_263074;
        case 0x2630ecu: goto label_2630ec;
        case 0x2630fcu: goto label_2630fc;
        case 0x263138u: goto label_263138;
        case 0x263150u: goto label_263150;
        default: break;
    }

    ctx->pc = 0x262df0u;

    // 0x262df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x262df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x262df4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x262df8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x262df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x262dfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x262dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x262e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x262e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x262e04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x262e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262e0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x262e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x262e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262e1c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x262e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x262e20: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x262e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x262e24: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x262E24u;
    {
        const bool branch_taken_0x262e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E24u;
        // 0x262e28: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e24) {
            ctx->pc = 0x2630D8u;
            goto label_2630d8;
        }
    }
    ctx->pc = 0x262E2Cu;
    // 0x262e2c: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x262e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
    // 0x262e30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x262e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262e34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x262e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x262e38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262E38u;
    {
        const bool branch_taken_0x262e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e38) {
            ctx->pc = 0x262E4Cu;
            goto label_262e4c;
        }
    }
    ctx->pc = 0x262E40u;
    // 0x262e40: 0x9282065c  lbu         $v0, 0x65C($s4)
    ctx->pc = 0x262e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1628)));
    // 0x262e44: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x262e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x262e48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x262e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_262e4c:
    // 0x262e4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x262E4Cu;
    {
        const bool branch_taken_0x262e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e4c) {
            ctx->pc = 0x262EB0u;
            goto label_262eb0;
        }
    }
    ctx->pc = 0x262E54u;
    // 0x262e54: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x262e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x262e58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x262e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x262e5c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x262E5Cu;
    {
        const bool branch_taken_0x262e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262e5c) {
            ctx->pc = 0x262EB0u;
            goto label_262eb0;
        }
    }
    ctx->pc = 0x262E64u;
    // 0x262e64: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x262e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262e68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x262e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x262e6c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x262e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x262e70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x262e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262e74: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x262e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262e7c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x262e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x262e80: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x262e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x262e84: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x262e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262e88: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x262e88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x262e8c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x262e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x262e90: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x262e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x262e94: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x262e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x262e98: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x262e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x262e9c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x262e9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x262ea0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x262ea0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x262ea4: 0xc09de58  jal         func_277960
    ctx->pc = 0x262EA4u;
    SET_GPR_U32(ctx, 31, 0x262EACu);
    ctx->pc = 0x262EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EA4u;
    // 0x262ea8: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277960u, 0x262EA4u, 0x262EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262EACu;
label_262eac:
    // 0x262eac: 0x0  nop
    ctx->pc = 0x262eacu;
    // NOP
label_262eb0:
    // 0x262eb0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x262eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x262eb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x262eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262eb8: 0x14440087  bne         $v0, $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x262EB8u;
    {
        const bool branch_taken_0x262eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x262eb8) {
            ctx->pc = 0x2630D8u;
            goto label_2630d8;
        }
    }
    ctx->pc = 0x262EC0u;
    // 0x262ec0: 0x92822ada  lbu         $v0, 0x2ADA($s4)
    ctx->pc = 0x262ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10970)));
    // 0x262ec4: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x262EC4u;
    {
        const bool branch_taken_0x262ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ec4) {
            ctx->pc = 0x2630D8u;
            goto label_2630d8;
        }
    }
    ctx->pc = 0x262ECCu;
    // 0x262ecc: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x262eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x262ed0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x262ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x262ed4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x262ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x262ed8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x262ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x262edc: 0x82622b07  lb          $v0, 0x2B07($s3)
    ctx->pc = 0x262edcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 11015)));
    // 0x262ee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x262ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262ee4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x262EE4u;
    {
        const bool branch_taken_0x262ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EE4u;
        // 0x262ee8: 0x26702b07  addiu       $s0, $s3, 0x2B07 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11015));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ee4) {
            ctx->pc = 0x262F30u;
            goto label_262f30;
        }
    }
    ctx->pc = 0x262EECu;
    // 0x262eec: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x262eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262ef0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x262ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x262ef4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x262ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x262ef8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x262ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262f00: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x262f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x262f04: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x262f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x262f08: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x262f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262f0c: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x262f0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x262f10: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x262f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x262f14: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x262f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x262f18: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x262f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x262f1c: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x262f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x262f20: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x262f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x262f24: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x262f24u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x262f28: 0xc09de58  jal         func_277960
    ctx->pc = 0x262F28u;
    SET_GPR_U32(ctx, 31, 0x262F30u);
    ctx->pc = 0x262F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F28u;
    // 0x262f2c: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277960u, 0x262F28u, 0x262F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F30u;
label_262f30:
    // 0x262f30: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x262f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262f34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x262f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x262f38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x262F38u;
    {
        const bool branch_taken_0x262f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f38) {
            ctx->pc = 0x262F90u;
            goto label_262f90;
        }
    }
    ctx->pc = 0x262F40u;
    // 0x262f40: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x262f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262f44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x262f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x262f48: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x262f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x262f4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x262f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262f50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x262f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262f54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x262f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f58: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x262f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262f5c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x262f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f60: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x262f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262f68: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x262f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x262f6c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x262f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262f70: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x262f70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x262f74: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x262f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x262f78: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x262f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x262f7c: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x262f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x262f80: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x262f80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x262f84: 0xc09dfbc  jal         func_277EF0
    ctx->pc = 0x262F84u;
    SET_GPR_U32(ctx, 31, 0x262F8Cu);
    ctx->pc = 0x262F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F84u;
    // 0x262f88: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EF0u, 0x262F84u, 0x262F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F8Cu;
label_262f8c:
    // 0x262f8c: 0x0  nop
    ctx->pc = 0x262f8cu;
    // NOP
label_262f90:
    // 0x262f90: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x262f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262f94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x262f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x262f98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x262F98u;
    {
        const bool branch_taken_0x262f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f98) {
            ctx->pc = 0x262FF0u;
            goto label_262ff0;
        }
    }
    ctx->pc = 0x262FA0u;
    // 0x262fa0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x262fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262fa4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x262fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x262fa8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x262fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x262fac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x262facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262fb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x262fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262fb4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x262fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262fb8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x262fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262fbc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x262fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262fc0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x262fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262fc8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x262fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x262fcc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x262fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x262fd0: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x262fd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x262fd4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x262fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x262fd8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x262fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x262fdc: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x262fe0: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x262fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x262fe4: 0xc09dffc  jal         func_277FF0
    ctx->pc = 0x262FE4u;
    SET_GPR_U32(ctx, 31, 0x262FECu);
    ctx->pc = 0x262FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262FE4u;
    // 0x262fe8: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277FF0u, 0x262FE4u, 0x262FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262FECu;
label_262fec:
    // 0x262fec: 0x0  nop
    ctx->pc = 0x262fecu;
    // NOP
label_262ff0:
    // 0x262ff0: 0x8e8429c0  lw          $a0, 0x29C0($s4)
    ctx->pc = 0x262ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x262ff4: 0x8e8329c8  lw          $v1, 0x29C8($s4)
    ctx->pc = 0x262ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10696)));
    // 0x262ff8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x262ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x262ffc: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x262ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x263000: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x263000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x263004: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x263004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x263008: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x263008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26300c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x263010: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x263010u;
    {
        const bool branch_taken_0x263010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263010) {
            ctx->pc = 0x263078u;
            goto label_263078;
        }
    }
    ctx->pc = 0x263018u;
    // 0x263018: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26301c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x263020: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x263020u;
    {
        const bool branch_taken_0x263020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263020) {
            ctx->pc = 0x263078u;
            goto label_263078;
        }
    }
    ctx->pc = 0x263028u;
    // 0x263028: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x263028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x26302c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x263030: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x263030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x263034: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x263034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263038: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x263038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26303c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26303cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263040: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x263040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x263044: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x263044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263048: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x263048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26304c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263050: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x263050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x263054: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x263054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x263058: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x263058u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x26305c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x26305cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x263060: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x263060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x263064: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x263064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x263068: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x263068u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26306c: 0xc09e040  jal         func_278100
    ctx->pc = 0x26306Cu;
    SET_GPR_U32(ctx, 31, 0x263074u);
    ctx->pc = 0x263070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26306Cu;
    // 0x263070: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278100u, 0x26306Cu, 0x263074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263074u;
label_263074:
    // 0x263074: 0x0  nop
    ctx->pc = 0x263074u;
    // NOP
label_263078:
    // 0x263078: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x263078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26307c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26307Cu;
    {
        const bool branch_taken_0x26307c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26307c) {
            ctx->pc = 0x2630D8u;
            goto label_2630d8;
        }
    }
    ctx->pc = 0x263084u;
    // 0x263084: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x263084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x263088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26308c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x263090: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x263090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x263094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263098: 0x0  nop
    ctx->pc = 0x263098u;
    // NOP
    // 0x26309c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x26309cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2630a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2630a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2630a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2630A4u;
    {
        const bool branch_taken_0x2630a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2630a4) {
            ctx->pc = 0x2630BCu;
            goto label_2630bc;
        }
    }
    ctx->pc = 0x2630ACu;
    // 0x2630ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2630acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2630b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2630b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2630b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2630B4u;
    {
        const bool branch_taken_0x2630b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630B4u;
        // 0x2630b8: 0xa2832ada  sb          $v1, 0x2ADA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 10970), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630b4) {
            ctx->pc = 0x2630D8u;
            goto label_2630d8;
        }
    }
    ctx->pc = 0x2630BCu;
label_2630bc:
    // 0x2630bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2630bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2630c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2630c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2630c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2630c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2630c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2630c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2630cc: 0x0  nop
    ctx->pc = 0x2630ccu;
    // NOP
    // 0x2630d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2630d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2630d4: 0xa2832ada  sb          $v1, 0x2ADA($s4)
    ctx->pc = 0x2630d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10970), (uint8_t)GPR_U32(ctx, 3));
label_2630d8:
    // 0x2630d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2630d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2630dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2630e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630e4: 0xc0a5fe4  jal         func_297F90
    ctx->pc = 0x2630E4u;
    SET_GPR_U32(ctx, 31, 0x2630ECu);
    ctx->pc = 0x2630E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630E4u;
    // 0x2630e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F90u, 0x2630E4u, 0x2630ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630ECu;
label_2630ec:
    // 0x2630ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2630ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2630f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630f4: 0xc09cfe4  jal         func_273F90
    ctx->pc = 0x2630F4u;
    SET_GPR_U32(ctx, 31, 0x2630FCu);
    ctx->pc = 0x2630F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630F4u;
    // 0x2630f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273F90u, 0x2630F4u, 0x2630FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630FCu;
label_2630fc:
    // 0x2630fc: 0x9284065c  lbu         $a0, 0x65C($s4)
    ctx->pc = 0x2630fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1628)));
    // 0x263100: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x263100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263104: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x263104u;
    {
        const bool branch_taken_0x263104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x263104) {
            ctx->pc = 0x263150u;
            goto label_263150;
        }
    }
    ctx->pc = 0x26310Cu;
    // 0x26310c: 0x96820826  lhu         $v0, 0x826($s4)
    ctx->pc = 0x26310cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2086)));
    // 0x263110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263114: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x263114u;
    {
        const bool branch_taken_0x263114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263114) {
            ctx->pc = 0x263130u;
            goto label_263130;
        }
    }
    ctx->pc = 0x26311Cu;
    // 0x26311c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26311Cu;
    {
        const bool branch_taken_0x26311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26311c) {
            ctx->pc = 0x263138u;
            goto label_263138;
        }
    }
    ctx->pc = 0x263124u;
    // 0x263124: 0x92822abf  lbu         $v0, 0x2ABF($s4)
    ctx->pc = 0x263124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10943)));
    // 0x263128: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263128u;
    {
        const bool branch_taken_0x263128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263128) {
            ctx->pc = 0x263138u;
            goto label_263138;
        }
    }
    ctx->pc = 0x263130u;
label_263130:
    // 0x263130: 0xc09d010  jal         func_274040
    ctx->pc = 0x263130u;
    SET_GPR_U32(ctx, 31, 0x263138u);
    ctx->pc = 0x263134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263130u;
    // 0x263134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274040u, 0x263130u, 0x263138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263138u;
label_263138:
    // 0x263138: 0x928708e8  lbu         $a3, 0x8E8($s4)
    ctx->pc = 0x263138u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x26313c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26313cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x263140: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x263140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x263144: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x263144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x263148: 0xc0ce188  jal         func_338620
    ctx->pc = 0x263148u;
    SET_GPR_U32(ctx, 31, 0x263150u);
    ctx->pc = 0x26314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263148u;
    // 0x26314c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x263148u, 0x263150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263150u;
label_263150:
    // 0x263150: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x263150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x263154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x263158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26315c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26315cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263168: 0x3e00008  jr          $ra
    ctx->pc = 0x263168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263168u;
        // 0x26316c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263170u;
}
