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

// Function: sub_0038BAD0
// Address: 0x38bad0 - 0x38bdc4
void sub_0038BAD0_0x38bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BAD0_0x38bad0");
#endif

    switch (ctx->pc) {
        case 0x38bb0cu: goto label_38bb0c;
        case 0x38bb34u: goto label_38bb34;
        case 0x38bba8u: goto label_38bba8;
        case 0x38bbe0u: goto label_38bbe0;
        case 0x38bbf0u: goto label_38bbf0;
        case 0x38bc2cu: goto label_38bc2c;
        case 0x38bc40u: goto label_38bc40;
        case 0x38bcc8u: goto label_38bcc8;
        case 0x38bd00u: goto label_38bd00;
        case 0x38bd14u: goto label_38bd14;
        case 0x38bd2cu: goto label_38bd2c;
        case 0x38bd9cu: goto label_38bd9c;
        default: break;
    }

    ctx->pc = 0x38bad0u;

    // 0x38bad0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x38bad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38bad8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x38badc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38bae0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38bae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bae4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38bae8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38bae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38baec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38baf0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x38baf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38baf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38baf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38baf8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x38baf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38bb00: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x38bb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb04: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38BB04u;
    SET_GPR_U32(ctx, 31, 0x38BB0Cu);
    ctx->pc = 0x38BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BB04u;
    // 0x38bb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38BB04u, 0x38BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BB0Cu;
label_38bb0c:
    // 0x38bb0c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x38bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x38bb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb14: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x38bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x38bb18: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x38bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38bb1c: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x38bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x38bb20: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x38bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x38bb24: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x38bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x38bb28: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x38bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x38bb2c: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x38BB2Cu;
    SET_GPR_U32(ctx, 31, 0x38BB34u);
    ctx->pc = 0x38BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BB2Cu;
    // 0x38bb30: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x38BB2Cu, 0x38BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BB34u;
label_38bb34:
    // 0x38bb34: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x38bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x38bb38: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x38bb3c: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x38bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x38bb40: 0xa6032acc  sh          $v1, 0x2ACC($s0)
    ctx->pc = 0x38bb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10956), (uint16_t)GPR_U32(ctx, 3));
    // 0x38bb44: 0xa6022ad4  sh          $v0, 0x2AD4($s0)
    ctx->pc = 0x38bb44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10964), (uint16_t)GPR_U32(ctx, 2));
    // 0x38bb48: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x38bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x38bb4c: 0x96022acc  lhu         $v0, 0x2ACC($s0)
    ctx->pc = 0x38bb4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
    // 0x38bb50: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x38bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x38bb54: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x38bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x38bb58: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x38bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x38bb5c: 0x651806  srlv        $v1, $a1, $v1
    ctx->pc = 0x38bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x38bb60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38bb64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x38bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38bb68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38bb6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38bb70: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x38BB70u;
    {
        const bool branch_taken_0x38bb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bb70) {
            ctx->pc = 0x38BC38u;
            goto label_38bc38;
        }
    }
    ctx->pc = 0x38BB78u;
    // 0x38bb78: 0x96022ad4  lhu         $v0, 0x2AD4($s0)
    ctx->pc = 0x38bb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10964)));
    // 0x38bb7c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x38bb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x38bb80: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x38bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x38bb84: 0x651806  srlv        $v1, $a1, $v1
    ctx->pc = 0x38bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x38bb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38bb8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x38bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38bb90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38bb94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38bb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38bb98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38BB98u;
    {
        const bool branch_taken_0x38bb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bb98) {
            ctx->pc = 0x38BBE8u;
            goto label_38bbe8;
        }
    }
    ctx->pc = 0x38BBA0u;
    // 0x38bba0: 0xc0d16a0  jal         func_345A80
    ctx->pc = 0x38BBA0u;
    SET_GPR_U32(ctx, 31, 0x38BBA8u);
    ctx->pc = 0x38BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BBA0u;
    // 0x38bba4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A80u, 0x38BBA0u, 0x38BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BBA8u;
label_38bba8:
    // 0x38bba8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bbac: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x38bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x38bbb0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x38bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x38bbb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x38bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38bbb8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x38bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x38bbbc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x38bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x38bbc0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bbc4: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x38bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x38bbc8: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x38bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
    // 0x38bbcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x38bbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x38bbd0: 0xac6201f4  sw          $v0, 0x1F4($v1)
    ctx->pc = 0x38bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 500), GPR_U32(ctx, 2));
    // 0x38bbd4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x38bbd8: 0xc0d1634  jal         func_3458D0
    ctx->pc = 0x38BBD8u;
    SET_GPR_U32(ctx, 31, 0x38BBE0u);
    ctx->pc = 0x38BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BBD8u;
    // 0x38bbdc: 0x240500d1  addiu       $a1, $zero, 0xD1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3458D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3458D0u, 0x38BBD8u, 0x38BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BBE0u;
label_38bbe0:
    // 0x38bbe0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x38BBE0u;
    {
        const bool branch_taken_0x38bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bbe0) {
            ctx->pc = 0x38BDA0u;
            goto label_38bda0;
        }
    }
    ctx->pc = 0x38BBE8u;
label_38bbe8:
    // 0x38bbe8: 0xc0d168c  jal         func_345A30
    ctx->pc = 0x38BBE8u;
    SET_GPR_U32(ctx, 31, 0x38BBF0u);
    ctx->pc = 0x38BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BBE8u;
    // 0x38bbec: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x38BBE8u, 0x38BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BBF0u;
label_38bbf0:
    // 0x38bbf0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x38bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bbf4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x38bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x38bbf8: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x38bbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38bbfc: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x38bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x38bc00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x38bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38bc04: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x38bc08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x38bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x38bc0c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bc10: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x38bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x38bc14: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x38bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
    // 0x38bc18: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x38bc1c: 0xac6201f4  sw          $v0, 0x1F4($v1)
    ctx->pc = 0x38bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 500), GPR_U32(ctx, 2));
    // 0x38bc20: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x38bc24: 0xc0d1634  jal         func_3458D0
    ctx->pc = 0x38BC24u;
    SET_GPR_U32(ctx, 31, 0x38BC2Cu);
    ctx->pc = 0x38BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BC24u;
    // 0x38bc28: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3458D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3458D0u, 0x38BC24u, 0x38BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BC2Cu;
label_38bc2c:
    // 0x38bc2c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x38BC2Cu;
    {
        const bool branch_taken_0x38bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bc2c) {
            ctx->pc = 0x38BDA0u;
            goto label_38bda0;
        }
    }
    ctx->pc = 0x38BC34u;
    // 0x38bc34: 0x0  nop
    ctx->pc = 0x38bc34u;
    // NOP
label_38bc38:
    // 0x38bc38: 0xc0d168c  jal         func_345A30
    ctx->pc = 0x38BC38u;
    SET_GPR_U32(ctx, 31, 0x38BC40u);
    ctx->pc = 0x38BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BC38u;
    // 0x38bc3c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x38BC38u, 0x38BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BC40u;
label_38bc40:
    // 0x38bc40: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x38bc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bc44: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x38bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x38bc48: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x38bc48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38bc4c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38bc50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x38bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x38bc54: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x38bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x38bc58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x38bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38bc5c: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x38bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x38bc60: 0x8cc7007c  lw          $a3, 0x7C($a2)
    ctx->pc = 0x38bc60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x38bc64: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x38bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x38bc68: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x38bc68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x38bc6c: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x38bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x38bc70: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x38bc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38bc74: 0x8cc7007c  lw          $a3, 0x7C($a2)
    ctx->pc = 0x38bc74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x38bc78: 0x8ce601f4  lw          $a2, 0x1F4($a3)
    ctx->pc = 0x38bc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x38bc7c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x38bc7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x38bc80: 0xace601f4  sw          $a2, 0x1F4($a3)
    ctx->pc = 0x38bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 6));
    // 0x38bc84: 0xa6152ace  sh          $s5, 0x2ACE($s0)
    ctx->pc = 0x38bc84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10958), (uint16_t)GPR_U32(ctx, 21));
    // 0x38bc88: 0xa6142ad0  sh          $s4, 0x2AD0($s0)
    ctx->pc = 0x38bc88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10960), (uint16_t)GPR_U32(ctx, 20));
    // 0x38bc8c: 0xa6132ad2  sh          $s3, 0x2AD2($s0)
    ctx->pc = 0x38bc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10962), (uint16_t)GPR_U32(ctx, 19));
    // 0x38bc90: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x38bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38bc94: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x38bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38bc98: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x38bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38bc9c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x38bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38bca0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x38bca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x38bca4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x38bca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x38bca8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x38bca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x38bcac: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x38bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x38bcb0: 0x861100c2  lh          $s1, 0xC2($s0)
    ctx->pc = 0x38bcb0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38bcb4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x38bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x38bcb8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x38bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x38bcbc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x38bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x38bcc0: 0xc0c8a34  jal         func_3228D0
    ctx->pc = 0x38BCC0u;
    SET_GPR_U32(ctx, 31, 0x38BCC8u);
    ctx->pc = 0x38BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BCC0u;
    // 0x38bcc4: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x38BCC0u, 0x38BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BCC8u;
label_38bcc8:
    // 0x38bcc8: 0x8e080144  lw          $t0, 0x144($s0)
    ctx->pc = 0x38bcc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38bccc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x38bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38bcd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38bcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bcd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38bcd8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x38bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x38bcdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x38bcdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bce0: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x38bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x38bce4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38bce8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x38bce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38bcec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x38bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x38bcf0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x38bcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x38bcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bcf8: 0xc0c8028  jal         func_3200A0
    ctx->pc = 0x38BCF8u;
    SET_GPR_U32(ctx, 31, 0x38BD00u);
    ctx->pc = 0x38BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BCF8u;
    // 0x38bcfc: 0xad120130  sw          $s2, 0x130($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3200A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200A0u, 0x38BCF8u, 0x38BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD00u;
label_38bd00:
    // 0x38bd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bd04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38bd08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38bd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bd0c: 0xc0c8020  jal         func_320080
    ctx->pc = 0x38BD0Cu;
    SET_GPR_U32(ctx, 31, 0x38BD14u);
    ctx->pc = 0x38BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BD0Cu;
    // 0x38bd10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320080u, 0x38BD0Cu, 0x38BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD14u;
label_38bd14:
    // 0x38bd14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x38bd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38bd18: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38bd1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38bd20: 0x24a5bdd0  addiu       $a1, $a1, -0x4230
    ctx->pc = 0x38bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950352));
    // 0x38bd24: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38BD24u;
    SET_GPR_U32(ctx, 31, 0x38BD2Cu);
    ctx->pc = 0x38BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BD24u;
    // 0x38bd28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38BD24u, 0x38BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD2Cu;
label_38bd2c:
    // 0x38bd2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38bd30: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x38bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38bd34: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x38bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x38bd38: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x38bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x38bd3c: 0x8fa90070  lw          $t1, 0x70($sp)
    ctx->pc = 0x38bd3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38bd40: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x38bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x38bd44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x38bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x38bd48: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x38bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x38bd4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38bd50: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x38bd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x38bd54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38bd58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x38bd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38bd5c: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x38bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x38bd60: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x38bd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38bd64: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38bd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38bd68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x38bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x38bd6c: 0xae2900d0  sw          $t1, 0xD0($s1)
    ctx->pc = 0x38bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 9));
    // 0x38bd70: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x38bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x38bd74: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x38bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x38bd78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x38bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x38bd7c: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x38bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x38bd80: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x38bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x38bd84: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x38bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x38bd88: 0xa2280001  sb          $t0, 0x1($s1)
    ctx->pc = 0x38bd88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x38bd8c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x38bd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x38bd90: 0xa2270004  sb          $a3, 0x4($s1)
    ctx->pc = 0x38bd90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x38bd94: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x38BD94u;
    SET_GPR_U32(ctx, 31, 0x38BD9Cu);
    ctx->pc = 0x38BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BD94u;
    // 0x38bd98: 0xae260060  sw          $a2, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x38BD94u, 0x38BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD9Cu;
label_38bd9c:
    // 0x38bd9c: 0x0  nop
    ctx->pc = 0x38bd9cu;
    // NOP
label_38bda0:
    // 0x38bda0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38bda4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38bda4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38bda8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38bda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38bdac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38bdacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38bdb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38bdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38bdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38bdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bdb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38bdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x38BDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDBCu;
        // 0x38bdc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BDC4u;
}
