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

// Function: sub_00227E20
// Address: 0x227e20 - 0x227f74
void sub_00227E20_0x227e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E20_0x227e20");
#endif

    switch (ctx->pc) {
        case 0x227e40u: goto label_227e40;
        case 0x227e94u: goto label_227e94;
        case 0x227eb0u: goto label_227eb0;
        case 0x227ec8u: goto label_227ec8;
        default: break;
    }

    ctx->pc = 0x227e20u;

    // 0x227e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227e24: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x227e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x227e28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x227e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x227e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x227e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x227e38: 0xc090d6a  jal         func_2435A8
    ctx->pc = 0x227E38u;
    SET_GPR_U32(ctx, 31, 0x227E40u);
    ctx->pc = 0x227E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E38u;
    // 0x227e3c: 0x244495d0  addiu       $a0, $v0, -0x6A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435A8u, 0x227E38u, 0x227E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E40u;
label_227e40:
    // 0x227e40: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x227e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x227e44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x227e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e48: 0x2484aac0  addiu       $a0, $a0, -0x5540
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945472));
    // 0x227e4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BAAC0u));
    // 0x227e50: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x227e50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x227e54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x227e58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x227e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x227e5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x227e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227e60: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x227e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x227e64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227E64u;
    {
        const bool branch_taken_0x227e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E64u;
        // 0x227e68: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e64) {
            ctx->pc = 0x227E80u;
            goto label_227e80;
        }
    }
    ctx->pc = 0x227E6Cu;
    // 0x227e6c: 0x8c62aac4  lw          $v0, -0x553C($v1)
    ctx->pc = 0x227e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945476)));
    // 0x227e70: 0x1050003c  beq         $v0, $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x227E70u;
    {
        const bool branch_taken_0x227e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x227E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E70u;
        // 0x227e74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e70) {
            ctx->pc = 0x227F64u;
            goto label_227f64;
        }
    }
    ctx->pc = 0x227E78u;
    // 0x227e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227E78u;
    {
        const bool branch_taken_0x227e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227e78) {
            ctx->pc = 0x227E84u;
            goto label_227e84;
        }
    }
    ctx->pc = 0x227E80u;
label_227e80:
    // 0x227e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227e84:
    // 0x227e84: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227E84u;
    {
        const bool branch_taken_0x227e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x227E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E84u;
        // 0x227e88: 0xac70aac4  sw          $s0, -0x553C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945476), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e84) {
            ctx->pc = 0x227EA0u;
            goto label_227ea0;
        }
    }
    ctx->pc = 0x227E8Cu;
    // 0x227e8c: 0xc08a0a6  jal         func_228298
    ctx->pc = 0x227E8Cu;
    SET_GPR_U32(ctx, 31, 0x227E94u);
    ctx->pc = 0x227E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E8Cu;
    // 0x227e90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228298u, 0x227E8Cu, 0x227E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E94u;
label_227e94:
    // 0x227e94: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x227E94u;
    {
        const bool branch_taken_0x227e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E94u;
        // 0x227e98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e94) {
            ctx->pc = 0x227F68u;
            goto label_227f68;
        }
    }
    ctx->pc = 0x227E9Cu;
    // 0x227e9c: 0x0  nop
    ctx->pc = 0x227e9cu;
    // NOP
label_227ea0:
    // 0x227ea0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x227ea4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ea8: 0xc090d6a  jal         func_2435A8
    ctx->pc = 0x227EA8u;
    SET_GPR_U32(ctx, 31, 0x227EB0u);
    ctx->pc = 0x227EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EA8u;
    // 0x227eac: 0x248495d8  addiu       $a0, $a0, -0x6A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435A8u, 0x227EA8u, 0x227EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EB0u;
label_227eb0:
    // 0x227eb0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x227eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x227eb4: 0x3484ca00  ori         $a0, $a0, 0xCA00
    ctx->pc = 0x227eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51712);
    // 0x227eb8: 0x9fa30000  lwu         $v1, 0x0($sp)
    ctx->pc = 0x227eb8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ebc: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x227ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x227ec0: 0xc08a0a6  jal         func_228298
    ctx->pc = 0x227EC0u;
    SET_GPR_U32(ctx, 31, 0x227EC8u);
    ctx->pc = 0x227EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EC0u;
    // 0x227ec4: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228298u, 0x227EC0u, 0x227EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EC8u;
label_227ec8:
    // 0x227ec8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x227ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x227ecc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x227eccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x227ed0: 0x24070082  addiu       $a3, $zero, 0x82
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x227ed4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x227ed8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x227edc: 0x8cc695b0  lw          $a2, -0x6A50($a2)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294940080)));
    // 0x227ee0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x227ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x227ee4: 0x304300c7  andi        $v1, $v0, 0xC7
    ctx->pc = 0x227ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)199);
    // 0x227ee8: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x227EE8u;
    {
        const bool branch_taken_0x227ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x227EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE8u;
        // 0x227eec: 0xac82aac8  sw          $v0, -0x5538($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294945480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ee8) {
            ctx->pc = 0x227F10u;
            goto label_227f10;
        }
    }
    ctx->pc = 0x227EF0u;
    // 0x227ef0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x227ef4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x227ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x227ef8: 0x8c4295c0  lw          $v0, -0x6A40($v0)
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x227efc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x227efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x227f00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x227f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x227f04: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x227f04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x227f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227F08u;
    {
        const bool branch_taken_0x227f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F08u;
        // 0x227f0c: 0x246295c0  addiu       $v0, $v1, -0x6A40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f08) {
            ctx->pc = 0x227F18u;
            goto label_227f18;
        }
    }
    ctx->pc = 0x227F10u;
label_227f10:
    // 0x227f10: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x227f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x227f14: 0x246295c0  addiu       $v0, $v1, -0x6A40
    ctx->pc = 0x227f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940096));
label_227f18:
    // 0x227f18: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x227f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x227f1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227f20: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x227f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x227f24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227f28: 0x24845a78  addiu       $a0, $a0, 0x5A78
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23160));
    // 0x227f2c: 0x24a55a88  addiu       $a1, $a1, 0x5A88
    ctx->pc = 0x227f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23176));
    // 0x227f30: 0x3c070088  lui         $a3, 0x88
    ctx->pc = 0x227f30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)136 << 16));
    // 0x227f34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x227f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227f38: 0x3c060088  lui         $a2, 0x88
    ctx->pc = 0x227f38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)136 << 16));
    // 0x227f3c: 0x24e75a98  addiu       $a3, $a3, 0x5A98
    ctx->pc = 0x227f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23192));
    // 0x227f40: 0x24c65a9c  addiu       $a2, $a2, 0x5A9C
    ctx->pc = 0x227f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23196));
    // 0x227f44: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x227f44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885A80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x885A80u, _value); } while (0);
    // 0x227f48: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x227f48u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885A78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x885A78u, _value); } while (0);
    // 0x227f4c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x227f4cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x885A78u));
    // 0x227f50: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x227f50u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885A88u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x885A88u, _value); } while (0);
    // 0x227f54: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x227f54u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x885A80u));
    // 0x227f58: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x227f58u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x885A90u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x885A90u, _value); } while (0);
    // 0x227f5c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x227f5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x885A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885A98u, _value); } while (0);
    // 0x227f60: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x227f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885A9Cu, _value); } while (0);
label_227f64:
    // 0x227f64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x227f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227f68:
    // 0x227f68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x227f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x227F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F6Cu;
        // 0x227f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F74u;
}
