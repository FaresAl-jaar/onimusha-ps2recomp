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

// Function: sub_0029F9A0
// Address: 0x29f9a0 - 0x2a01f8
void sub_0029F9A0_0x29f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F9A0_0x29f9a0");
#endif

    switch (ctx->pc) {
        case 0x29f9d4u: goto label_29f9d4;
        case 0x29fa68u: goto label_29fa68;
        case 0x29fae0u: goto label_29fae0;
        case 0x29fb70u: goto label_29fb70;
        case 0x29fbb0u: goto label_29fbb0;
        case 0x29fc28u: goto label_29fc28;
        case 0x29fc68u: goto label_29fc68;
        case 0x29fd60u: goto label_29fd60;
        case 0x29fd88u: goto label_29fd88;
        case 0x29fda8u: goto label_29fda8;
        case 0x29ff40u: goto label_29ff40;
        case 0x29ffd0u: goto label_29ffd0;
        case 0x29fff0u: goto label_29fff0;
        case 0x2a0010u: goto label_2a0010;
        case 0x2a0168u: goto label_2a0168;
        default: break;
    }

    ctx->pc = 0x29f9a0u;

    // 0x29f9a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29f9a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29f9a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29f9ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29f9b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29f9b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29f9b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29f9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29f9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29f9c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29f9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f9cc: 0xc0a816c  jal         func_2A05B0
    ctx->pc = 0x29F9CCu;
    SET_GPR_U32(ctx, 31, 0x29F9D4u);
    ctx->pc = 0x29F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9CCu;
    // 0x29f9d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A05B0u, 0x29F9CCu, 0x29F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9D4u;
label_29f9d4:
    // 0x29f9d4: 0x9208002a  lbu         $t0, 0x2A($s0)
    ctx->pc = 0x29f9d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x29f9d8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F9D8u;
    {
        const bool branch_taken_0x29f9d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9D8u;
        // 0x29f9dc: 0x96140000  lhu         $s4, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9d8) {
            ctx->pc = 0x29F9E8u;
            goto label_29f9e8;
        }
    }
    ctx->pc = 0x29F9E0u;
    // 0x29f9e0: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x29F9E0u;
    {
        const bool branch_taken_0x29f9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9E0u;
        // 0x29f9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9e0) {
            ctx->pc = 0x2A01C8u;
            goto label_2a01c8;
        }
    }
    ctx->pc = 0x29F9E8u;
label_29f9e8:
    // 0x29f9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f9ec: 0x1103002c  beq         $t0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x29F9ECu;
    {
        const bool branch_taken_0x29f9ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x29F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9ECu;
        // 0x29f9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9ec) {
            ctx->pc = 0x29FAA0u;
            goto label_29faa0;
        }
    }
    ctx->pc = 0x29F9F4u;
    // 0x29f9f4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F9F4u;
    {
        const bool branch_taken_0x29f9f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f9f4) {
            ctx->pc = 0x29FA08u;
            goto label_29fa08;
        }
    }
    ctx->pc = 0x29F9FCu;
    // 0x29f9fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29F9FCu;
    {
        const bool branch_taken_0x29f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f9fc) {
            ctx->pc = 0x29FAB8u;
            goto label_29fab8;
        }
    }
    ctx->pc = 0x29FA04u;
    // 0x29fa04: 0x0  nop
    ctx->pc = 0x29fa04u;
    // NOP
label_29fa08:
    // 0x29fa08: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x29fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29fa0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FA0Cu;
    {
        const bool branch_taken_0x29fa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa0c) {
            ctx->pc = 0x29FA20u;
            goto label_29fa20;
        }
    }
    ctx->pc = 0x29FA14u;
    // 0x29fa14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29FA14u;
    {
        const bool branch_taken_0x29fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA14u;
        // 0x29fa18: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa14) {
            ctx->pc = 0x29FA28u;
            goto label_29fa28;
        }
    }
    ctx->pc = 0x29FA1Cu;
    // 0x29fa1c: 0x0  nop
    ctx->pc = 0x29fa1cu;
    // NOP
label_29fa20:
    // 0x29fa20: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x29fa20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa24: 0x0  nop
    ctx->pc = 0x29fa24u;
    // NOP
label_29fa28:
    // 0x29fa28: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29fa2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29fa30: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x29fa30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fa34: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x29fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x29fa38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa3c: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x29fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29fa40: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x29fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x29fa44: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29fa48: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x29fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29fa4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29fa50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fa54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x29fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x29fa58: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x29FA58u;
    {
        const bool branch_taken_0x29fa58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA58u;
        // 0x29fa5c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa58) {
            ctx->pc = 0x29FAB8u;
            goto label_29fab8;
        }
    }
    ctx->pc = 0x29FA60u;
    // 0x29fa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa64: 0x0  nop
    ctx->pc = 0x29fa64u;
    // NOP
label_29fa68:
    // 0x29fa68: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29fa6c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x29fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29fa70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FA70u;
    {
        const bool branch_taken_0x29fa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa70) {
            ctx->pc = 0x29FA88u;
            goto label_29fa88;
        }
    }
    ctx->pc = 0x29FA78u;
    // 0x29fa78: 0x8c63fff8  lw          $v1, -0x8($v1)
    ctx->pc = 0x29fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x29fa7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29fa80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29fa84: 0x0  nop
    ctx->pc = 0x29fa84u;
    // NOP
label_29fa88:
    // 0x29fa88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29fa8c: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x29fa8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fa90: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x29FA90u;
    {
        const bool branch_taken_0x29fa90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA90u;
        // 0x29fa94: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa90) {
            ctx->pc = 0x29FA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fa68;
        }
    }
    ctx->pc = 0x29FA98u;
    // 0x29fa98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29FA98u;
    {
        const bool branch_taken_0x29fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa98) {
            ctx->pc = 0x29FAB8u;
            goto label_29fab8;
        }
    }
    ctx->pc = 0x29FAA0u;
label_29faa0:
    // 0x29faa0: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x29faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x29faa4: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x29faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29faa8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29faac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x29faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x29fab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29fab4: 0x0  nop
    ctx->pc = 0x29fab4u;
    // NOP
label_29fab8:
    // 0x29fab8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x29fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x29fabc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29fac0: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x29fac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fac4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x29fac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29fac8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29facc: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x29FACCu;
    {
        const bool branch_taken_0x29facc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FACCu;
        // 0x29fad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29facc) {
            ctx->pc = 0x29FB90u;
            goto label_29fb90;
        }
    }
    ctx->pc = 0x29FAD4u;
    // 0x29fad4: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x29fad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x29fad8: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x29FAD8u;
    {
        const bool branch_taken_0x29fad8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAD8u;
        // 0x29fadc: 0x2684fff8  addiu       $a0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fad8) {
            ctx->pc = 0x29FB60u;
            goto label_29fb60;
        }
    }
    ctx->pc = 0x29FAE0u;
label_29fae0:
    // 0x29fae0: 0x90a90024  lbu         $t1, 0x24($a1)
    ctx->pc = 0x29fae0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x29fae4: 0x90a70074  lbu         $a3, 0x74($a1)
    ctx->pc = 0x29fae4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x29fae8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x29fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29faec: 0x44302a  slt         $a2, $v0, $a0
    ctx->pc = 0x29faecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29faf0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x29faf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29faf4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29faf8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29faf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fafc: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x29fb00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29fb04: 0x90a90024  lbu         $t1, 0x24($a1)
    ctx->pc = 0x29fb04u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x29fb08: 0x90a70074  lbu         $a3, 0x74($a1)
    ctx->pc = 0x29fb08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x29fb0c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x29fb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29fb10: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29fb14: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fb18: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x29fb1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29fb20: 0x90a90024  lbu         $t1, 0x24($a1)
    ctx->pc = 0x29fb20u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x29fb24: 0x90a70074  lbu         $a3, 0x74($a1)
    ctx->pc = 0x29fb24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x29fb28: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x29fb28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29fb2c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29fb30: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29fb30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fb34: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x29fb38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29fb3c: 0x90a90024  lbu         $t1, 0x24($a1)
    ctx->pc = 0x29fb3cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x29fb40: 0x90a70074  lbu         $a3, 0x74($a1)
    ctx->pc = 0x29fb40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x29fb44: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x29fb44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29fb48: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29fb4c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29fb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fb50: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29fb54: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x29FB54u;
    {
        const bool branch_taken_0x29fb54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB54u;
        // 0x29fb58: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb54) {
            ctx->pc = 0x29FAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fae0;
        }
    }
    ctx->pc = 0x29FB5Cu;
    // 0x29fb5c: 0x0  nop
    ctx->pc = 0x29fb5cu;
    // NOP
label_29fb60:
    // 0x29fb60: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x29fb60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fb64: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x29FB64u;
    {
        const bool branch_taken_0x29fb64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb64) {
            ctx->pc = 0x29FB90u;
            goto label_29fb90;
        }
    }
    ctx->pc = 0x29FB6Cu;
    // 0x29fb6c: 0x0  nop
    ctx->pc = 0x29fb6cu;
    // NOP
label_29fb70:
    // 0x29fb70: 0x90a60024  lbu         $a2, 0x24($a1)
    ctx->pc = 0x29fb70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x29fb74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29fb78: 0x54202a  slt         $a0, $v0, $s4
    ctx->pc = 0x29fb78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fb7c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29fb80: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x29fb84: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29FB84u;
    {
        const bool branch_taken_0x29fb84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB84u;
        // 0x29fb88: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb84) {
            ctx->pc = 0x29FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fb70;
        }
    }
    ctx->pc = 0x29FB8Cu;
    // 0x29fb8c: 0x0  nop
    ctx->pc = 0x29fb8cu;
    // NOP
label_29fb90:
    // 0x29fb90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x29fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x29fb94: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x29fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29fb98: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x29fb98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fb9c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29fba0: 0x454824  and         $t1, $v0, $a1
    ctx->pc = 0x29fba0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29fba4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x29FBA4u;
    {
        const bool branch_taken_0x29fba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBA4u;
        // 0x29fba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fba4) {
            ctx->pc = 0x29FC08u;
            goto label_29fc08;
        }
    }
    ctx->pc = 0x29FBACu;
    // 0x29fbac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fbb0:
    // 0x29fbb0: 0x90c40024  lbu         $a0, 0x24($a2)
    ctx->pc = 0x29fbb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x29fbb4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x29fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29fbb8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x29fbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x29fbbc: 0x2522000f  addiu       $v0, $t1, 0xF
    ctx->pc = 0x29fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x29fbc0: 0x1103000b  beq         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29FBC0u;
    {
        const bool branch_taken_0x29fbc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x29FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBC0u;
        // 0x29fbc4: 0x454824  and         $t1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbc0) {
            ctx->pc = 0x29FBF0u;
            goto label_29fbf0;
        }
    }
    ctx->pc = 0x29FBC8u;
    // 0x29fbc8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FBC8u;
    {
        const bool branch_taken_0x29fbc8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbc8) {
            ctx->pc = 0x29FBD8u;
            goto label_29fbd8;
        }
    }
    ctx->pc = 0x29FBD0u;
    // 0x29fbd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29FBD0u;
    {
        const bool branch_taken_0x29fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbd0) {
            ctx->pc = 0x29FBF8u;
            goto label_29fbf8;
        }
    }
    ctx->pc = 0x29FBD8u;
label_29fbd8:
    // 0x29fbd8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x29fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x29fbdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29fbe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29fbe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29FBE4u;
    {
        const bool branch_taken_0x29fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBE4u;
        // 0x29fbe8: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbe4) {
            ctx->pc = 0x29FBF8u;
            goto label_29fbf8;
        }
    }
    ctx->pc = 0x29FBECu;
    // 0x29fbec: 0x0  nop
    ctx->pc = 0x29fbecu;
    // NOP
label_29fbf0:
    // 0x29fbf0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x29fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x29fbf4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x29fbf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_29fbf8:
    // 0x29fbf8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29fbfc: 0xf4102a  slt         $v0, $a3, $s4
    ctx->pc = 0x29fbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fc00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29FC00u;
    {
        const bool branch_taken_0x29fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC00u;
        // 0x29fc04: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc00) {
            ctx->pc = 0x29FBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fbb0;
        }
    }
    ctx->pc = 0x29FC08u;
label_29fc08:
    // 0x29fc08: 0x2523000f  addiu       $v1, $t1, 0xF
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x29fc0c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29fc10: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x29fc10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fc14: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29fc18: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x29fc18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29fc1c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x29FC1Cu;
    {
        const bool branch_taken_0x29fc1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC1Cu;
        // 0x29fc20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc1c) {
            ctx->pc = 0x29FD08u;
            goto label_29fd08;
        }
    }
    ctx->pc = 0x29FC24u;
    // 0x29fc24: 0x0  nop
    ctx->pc = 0x29fc24u;
    // NOP
label_29fc28:
    // 0x29fc28: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x29fc28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x29fc2c: 0x90830024  lbu         $v1, 0x24($a0)
    ctx->pc = 0x29fc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29fc30: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x29fc30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x29fc34: 0x11400020  beqz        $t2, . + 4 + (0x20 << 2)
    ctx->pc = 0x29FC34u;
    {
        const bool branch_taken_0x29fc34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC34u;
        // 0x29fc38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc34) {
            ctx->pc = 0x29FCB8u;
            goto label_29fcb8;
        }
    }
    ctx->pc = 0x29FC3Cu;
    // 0x29fc3c: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x29fc3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29fc40: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x29fc40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29fc44: 0x1435823  subu        $t3, $t2, $v1
    ctx->pc = 0x29fc44u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x29fc48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29fc48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fc4c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x29fc50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29fc50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc54: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x29fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x29fc58: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x29fc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x29fc5c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x29fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fc60: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x29FC60u;
    {
        const bool branch_taken_0x29fc60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC60u;
        // 0x29fc64: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc60) {
            ctx->pc = 0x29FCB8u;
            goto label_29fcb8;
        }
    }
    ctx->pc = 0x29FC68u;
label_29fc68:
    // 0x29fc68: 0x94ed0000  lhu         $t5, 0x0($a3)
    ctx->pc = 0x29fc68u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29fc6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29fc70: 0x143582a  slt         $t3, $t2, $v1
    ctx->pc = 0x29fc70u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29fc74: 0xd6040  sll         $t4, $t5, 1
    ctx->pc = 0x29fc74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x29fc78: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x29fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x29fc7c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x29fc80: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x29fc80u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x29fc84: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x29fc88: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x29fc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fc8c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x29fc8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29fc90: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x29fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x29fc94: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x29fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fc98: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x29fc98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29fc9c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x29fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x29fca0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x29fca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fca4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x29fca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29fca8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x29fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x29fcac: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x29fcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fcb0: 0x1560ffed  bnez        $t3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29FCB0u;
    {
        const bool branch_taken_0x29fcb0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCB0u;
        // 0x29fcb4: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcb0) {
            ctx->pc = 0x29FC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fc68;
        }
    }
    ctx->pc = 0x29FCB8u;
label_29fcb8:
    // 0x29fcb8: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x29fcbc: 0x30e70080  andi        $a3, $a3, 0x80
    ctx->pc = 0x29fcbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x29fcc0: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x29FCC0u;
    {
        const bool branch_taken_0x29fcc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcc0) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29FCC8u;
    // 0x29fcc8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29FCC8u;
    {
        const bool branch_taken_0x29fcc8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCC8u;
        // 0x29fccc: 0x338c0  sll         $a3, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcc8) {
            ctx->pc = 0x29FCE8u;
            goto label_29fce8;
        }
    }
    ctx->pc = 0x29FCD0u;
    // 0x29fcd0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x29fcd4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fcd8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fcdc: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x29fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fce0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x29fce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29fce4: 0x0  nop
    ctx->pc = 0x29fce4u;
    // NOP
label_29fce8:
    // 0x29fce8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29fcec: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29fcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29fcf0: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x29fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fcf4: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x29fcf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_29fcf8:
    // 0x29fcf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29fcfc: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x29fcfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fd00: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x29FD00u;
    {
        const bool branch_taken_0x29fd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD00u;
        // 0x29fd04: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd00) {
            ctx->pc = 0x29FC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fc28;
        }
    }
    ctx->pc = 0x29FD08u;
label_29fd08:
    // 0x29fd08: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x29fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x29fd0c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29fd10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fd14: 0x110300a6  beq         $t0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x29FD14u;
    {
        const bool branch_taken_0x29fd14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x29FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD14u;
        // 0x29fd18: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd14) {
            ctx->pc = 0x29FFB0u;
            goto label_29ffb0;
        }
    }
    ctx->pc = 0x29FD1Cu;
    // 0x29fd1c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FD1Cu;
    {
        const bool branch_taken_0x29fd1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fd1c) {
            ctx->pc = 0x29FD30u;
            goto label_29fd30;
        }
    }
    ctx->pc = 0x29FD24u;
    // 0x29fd24: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x29FD24u;
    {
        const bool branch_taken_0x29fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fd24) {
            ctx->pc = 0x2A01C8u;
            goto label_2a01c8;
        }
    }
    ctx->pc = 0x29FD2Cu;
    // 0x29fd2c: 0x0  nop
    ctx->pc = 0x29fd2cu;
    // NOP
label_29fd30:
    // 0x29fd30: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29fd34: 0x247200b0  addiu       $s2, $v1, 0xB0
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x29fd38: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29fd38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd3c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x29fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x29fd40: 0x14b940  sll         $s7, $s4, 5
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x29fd44: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29fd48: 0x14f100  sll         $fp, $s4, 4
    ctx->pc = 0x29fd48u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x29fd4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fd50: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x29fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x29fd54: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x29fd58: 0x346eaaab  ori         $t6, $v1, 0xAAAB
    ctx->pc = 0x29fd58u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x29fd5c: 0x0  nop
    ctx->pc = 0x29fd5cu;
    // NOP
label_29fd60:
    // 0x29fd60: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x29fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29fd64: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x29fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29fd68: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x29fd68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fd6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29fd70: 0x26190010  addiu       $t9, $s0, 0x10
    ctx->pc = 0x29fd70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29fd74: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x29fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x29fd78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29fd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd7c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x29fd80: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
    ctx->pc = 0x29FD80u;
    {
        const bool branch_taken_0x29fd80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD80u;
        // 0x29fd84: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd80) {
            ctx->pc = 0x29FF98u;
            goto label_29ff98;
        }
    }
    ctx->pc = 0x29FD88u;
label_29fd88:
    // 0x29fd88: 0x93380024  lbu         $t8, 0x24($t9)
    ctx->pc = 0x29fd88u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x29fd8c: 0x8f360020  lw          $s6, 0x20($t9)
    ctx->pc = 0x29fd8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x29fd90: 0x18082a  slt         $at, $zero, $t8
    ctx->pc = 0x29fd90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x29fd94: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x29FD94u;
    {
        const bool branch_taken_0x29fd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD94u;
        // 0x29fd98: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd94) {
            ctx->pc = 0x29FF80u;
            goto label_29ff80;
        }
    }
    ctx->pc = 0x29FD9Cu;
    // 0x29fd9c: 0x2b010009  slti        $at, $t8, 0x9
    ctx->pc = 0x29fd9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x29fda0: 0x14200063  bnez        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x29FDA0u;
    {
        const bool branch_taken_0x29fda0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDA0u;
        // 0x29fda4: 0x2713fff8  addiu       $s3, $t8, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fda0) {
            ctx->pc = 0x29FF30u;
            goto label_29ff30;
        }
    }
    ctx->pc = 0x29FDA8u;
label_29fda8:
    // 0x29fda8: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x29fda8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29fdac: 0x96c4001c  lhu         $a0, 0x1C($s6)
    ctx->pc = 0x29fdacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x29fdb0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x29fdb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x29fdb4: 0x1f3182a  slt         $v1, $t7, $s3
    ctx->pc = 0x29fdb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29fdb8: 0x24a50017  addiu       $a1, $a1, 0x17
    ctx->pc = 0x29fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23));
    // 0x29fdbc: 0x1c50018  mult        $zero, $t6, $a1
    ctx->pc = 0x29fdbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fdc0: 0x26d60038  addiu       $s6, $s6, 0x38
    ctx->pc = 0x29fdc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x29fdc4: 0x24870017  addiu       $a3, $a0, 0x17
    ctx->pc = 0x29fdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 23));
    // 0x29fdc8: 0x54fc2  srl         $t1, $a1, 31
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x29fdcc: 0x96c4001c  lhu         $a0, 0x1C($s6)
    ctx->pc = 0x29fdccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x29fdd0: 0x96c60000  lhu         $a2, 0x0($s6)
    ctx->pc = 0x29fdd0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29fdd4: 0x4010  mfhi        $t0
    ctx->pc = 0x29fdd4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x29fdd8: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x29fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x29fddc: 0x1c70018  mult        $zero, $t6, $a3
    ctx->pc = 0x29fddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fde0: 0x24840017  addiu       $a0, $a0, 0x17
    ctx->pc = 0x29fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23));
    // 0x29fde4: 0x26d60038  addiu       $s6, $s6, 0x38
    ctx->pc = 0x29fde4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x29fde8: 0x46fc2  srl         $t5, $a0, 31
    ctx->pc = 0x29fde8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x29fdec: 0x83883  sra         $a3, $t0, 2
    ctx->pc = 0x29fdecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
    // 0x29fdf0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x29fdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29fdf4: 0x96c80000  lhu         $t0, 0x0($s6)
    ctx->pc = 0x29fdf4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29fdf8: 0x24c90017  addiu       $t1, $a2, 0x17
    ctx->pc = 0x29fdf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 23));
    // 0x29fdfc: 0x5010  mfhi        $t2
    ctx->pc = 0x29fdfcu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x29fe00: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fe04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fe08: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fe0c: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x29fe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x29fe10: 0x1c90018  mult        $zero, $t6, $t1
    ctx->pc = 0x29fe10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fe14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29fe18: 0x96c6001c  lhu         $a2, 0x1C($s6)
    ctx->pc = 0x29fe18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x29fe1c: 0x250b0017  addiu       $t3, $t0, 0x17
    ctx->pc = 0x29fe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 23));
    // 0x29fe20: 0xa4883  sra         $t1, $t2, 2
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 2));
    // 0x29fe24: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29fe28: 0xb57c2  srl         $t2, $t3, 31
    ctx->pc = 0x29fe28u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x29fe2c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x29fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29fe30: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x29fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x29fe34: 0x26d60038  addiu       $s6, $s6, 0x38
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x29fe38: 0x24c90017  addiu       $t1, $a2, 0x17
    ctx->pc = 0x29fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 23));
    // 0x29fe3c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29fe40: 0x3010  mfhi        $a2
    ctx->pc = 0x29fe40u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x29fe44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29fe48: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x29fe4c: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x29fe4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29fe50: 0x1c40018  mult        $zero, $t6, $a0
    ctx->pc = 0x29fe50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fe54: 0x0  nop
    ctx->pc = 0x29fe54u;
    // NOP
    // 0x29fe58: 0x0  nop
    ctx->pc = 0x29fe58u;
    // NOP
    // 0x29fe5c: 0x6010  mfhi        $t4
    ctx->pc = 0x29fe5cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x29fe60: 0x62083  sra         $a0, $a2, 2
    ctx->pc = 0x29fe60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 2));
    // 0x29fe64: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x29fe64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x29fe68: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x29fe68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29fe6c: 0x96c4001c  lhu         $a0, 0x1C($s6)
    ctx->pc = 0x29fe6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x29fe70: 0x1cb0018  mult        $zero, $t6, $t3
    ctx->pc = 0x29fe70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fe74: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fe78: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fe7c: 0x24a70017  addiu       $a3, $a1, 0x17
    ctx->pc = 0x29fe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 23));
    // 0x29fe80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29fe84: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x29fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x29fe88: 0xc5883  sra         $t3, $t4, 2
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 12), 2));
    // 0x29fe8c: 0x16d6021  addu        $t4, $t3, $t5
    ctx->pc = 0x29fe8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x29fe90: 0x24850017  addiu       $a1, $a0, 0x17
    ctx->pc = 0x29fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 23));
    // 0x29fe94: 0xc58c0  sll         $t3, $t4, 3
    ctx->pc = 0x29fe94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x29fe98: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x29fe9c: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x29fe9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x29fea0: 0x26d60038  addiu       $s6, $s6, 0x38
    ctx->pc = 0x29fea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x29fea4: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x29fea4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x29fea8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x29feac: 0x5810  mfhi        $t3
    ctx->pc = 0x29feacu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x29feb0: 0x1c90018  mult        $zero, $t6, $t1
    ctx->pc = 0x29feb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29feb4: 0xb4883  sra         $t1, $t3, 2
    ctx->pc = 0x29feb4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 2));
    // 0x29feb8: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x29feb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x29febc: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x29febcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x29fec0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x29fec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x29fec4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x29fec4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x29fec8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x29fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29fecc: 0x4810  mfhi        $t1
    ctx->pc = 0x29feccu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29fed0: 0x1c70018  mult        $zero, $t6, $a3
    ctx->pc = 0x29fed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fed4: 0x93883  sra         $a3, $t1, 2
    ctx->pc = 0x29fed4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 2));
    // 0x29fed8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x29fedc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x29fee0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x29fee4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29fee8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29feec: 0x3810  mfhi        $a3
    ctx->pc = 0x29feecu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29fef0: 0x1c50018  mult        $zero, $t6, $a1
    ctx->pc = 0x29fef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29fef4: 0x72883  sra         $a1, $a3, 2
    ctx->pc = 0x29fef4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 2));
    // 0x29fef8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x29fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29fefc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x29fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29ff00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x29ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29ff04: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29ff08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29ff0c: 0x2810  mfhi        $a1
    ctx->pc = 0x29ff0cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x29ff10: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x29ff10u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x29ff14: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x29ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29ff18: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x29ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29ff1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29ff20: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29ff24: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x29FF24u;
    {
        const bool branch_taken_0x29ff24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF24u;
        // 0x29ff28: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff24) {
            ctx->pc = 0x29FDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fda8;
        }
    }
    ctx->pc = 0x29FF2Cu;
    // 0x29ff2c: 0x0  nop
    ctx->pc = 0x29ff2cu;
    // NOP
label_29ff30:
    // 0x29ff30: 0x1f8082a  slt         $at, $t7, $t8
    ctx->pc = 0x29ff30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x29ff34: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x29FF34u;
    {
        const bool branch_taken_0x29ff34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ff34) {
            ctx->pc = 0x29FF80u;
            goto label_29ff80;
        }
    }
    ctx->pc = 0x29FF3Cu;
    // 0x29ff3c: 0x0  nop
    ctx->pc = 0x29ff3cu;
    // NOP
label_29ff40:
    // 0x29ff40: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x29ff40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29ff44: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x29ff44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x29ff48: 0x1f8182a  slt         $v1, $t7, $t8
    ctx->pc = 0x29ff48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x29ff4c: 0x24840017  addiu       $a0, $a0, 0x17
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23));
    // 0x29ff50: 0x26d6001c  addiu       $s6, $s6, 0x1C
    ctx->pc = 0x29ff50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x29ff54: 0x1c40018  mult        $zero, $t6, $a0
    ctx->pc = 0x29ff54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29ff58: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x29ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x29ff5c: 0x0  nop
    ctx->pc = 0x29ff5cu;
    // NOP
    // 0x29ff60: 0x2010  mfhi        $a0
    ctx->pc = 0x29ff60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29ff64: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x29ff64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x29ff68: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x29ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29ff6c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x29ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29ff70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29ff74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29ff78: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x29FF78u;
    {
        const bool branch_taken_0x29ff78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF78u;
        // 0x29ff7c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff78) {
            ctx->pc = 0x29FF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ff40;
        }
    }
    ctx->pc = 0x29FF80u;
label_29ff80:
    // 0x29ff80: 0x181900  sll         $v1, $t8, 4
    ctx->pc = 0x29ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x29ff84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ff88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29ff88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29ff8c: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x29ff8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29ff90: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x29FF90u;
    {
        const bool branch_taken_0x29ff90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF90u;
        // 0x29ff94: 0x27390050  addiu       $t9, $t9, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff90) {
            ctx->pc = 0x29FD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fd88;
        }
    }
    ctx->pc = 0x29FF98u;
label_29ff98:
    // 0x29ff98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29ff98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x29ff9c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x29ff9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29ffa0: 0x1460ff6f  bnez        $v1, . + 4 + (-0x91 << 2)
    ctx->pc = 0x29FFA0u;
    {
        const bool branch_taken_0x29ffa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFA0u;
        // 0x29ffa4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffa0) {
            ctx->pc = 0x29FD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fd60;
        }
    }
    ctx->pc = 0x29FFA8u;
    // 0x29ffa8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x29FFA8u;
    {
        const bool branch_taken_0x29ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ffa8) {
            ctx->pc = 0x2A01C8u;
            goto label_2a01c8;
        }
    }
    ctx->pc = 0x29FFB0u;
label_29ffb0:
    // 0x29ffb0: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x29ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x29ffb4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29ffb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29ffb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffbc: 0x147940  sll         $t7, $s4, 5
    ctx->pc = 0x29ffbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x29ffc0: 0x147100  sll         $t6, $s4, 4
    ctx->pc = 0x29ffc0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x29ffc4: 0x36900  sll         $t5, $v1, 4
    ctx->pc = 0x29ffc4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ffc8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x29ffcc: 0x34676667  ori         $a3, $v1, 0x6667
    ctx->pc = 0x29ffccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_29ffd0:
    // 0x29ffd0: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x29ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x29ffd4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x29ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x29ffd8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x29ffd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29ffdc: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x29ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x29ffe0: 0x260b0010  addiu       $t3, $s0, 0x10
    ctx->pc = 0x29ffe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ffe4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x29ffe4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffe8: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x29FFE8u;
    {
        const bool branch_taken_0x29ffe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFE8u;
        // 0x29ffec: 0x4d1021  addu        $v0, $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffe8) {
            ctx->pc = 0x2A01B8u;
            goto label_2a01b8;
        }
    }
    ctx->pc = 0x29FFF0u;
label_29fff0:
    // 0x29fff0: 0x916a0024  lbu         $t2, 0x24($t3)
    ctx->pc = 0x29fff0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x29fff4: 0x8d720020  lw          $s2, 0x20($t3)
    ctx->pc = 0x29fff4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x29fff8: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x29fff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x29fffc: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x29FFFCu;
    {
        const bool branch_taken_0x29fffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFFCu;
        // 0x2a0000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fffc) {
            ctx->pc = 0x2A01A0u;
            goto label_2a01a0;
        }
    }
    ctx->pc = 0x2A0004u;
    // 0x2a0004: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x2a0004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a0008: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x2A0008u;
    {
        const bool branch_taken_0x2a0008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0008u;
        // 0x2a000c: 0x2551fff8  addiu       $s1, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0008) {
            ctx->pc = 0x2A0158u;
            goto label_2a0158;
        }
    }
    ctx->pc = 0x2A0010u;
label_2a0010:
    // 0x2a0010: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x2a0010u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a0014: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x2a0014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2a0018: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2a0018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2a001c: 0x131982a  slt         $s3, $t1, $s1
    ctx->pc = 0x2a001cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2a0020: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x2a0020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x2a0024: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x2a0024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a0028: 0x26520038  addiu       $s2, $s2, 0x38
    ctx->pc = 0x2a0028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x2a002c: 0x24660013  addiu       $a2, $v1, 0x13
    ctx->pc = 0x2a002cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x2a0030: 0x4b7c2  srl         $s6, $a0, 31
    ctx->pc = 0x2a0030u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2a0034: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2a0034u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a0038: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x2a0038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2a003c: 0xa810  mfhi        $s5
    ctx->pc = 0x2a003cu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x2a0040: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x2a0040u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a0044: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x2a0044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a0048: 0x26520038  addiu       $s2, $s2, 0x38
    ctx->pc = 0x2a0048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x2a004c: 0x1530c3  sra         $a2, $s5, 3
    ctx->pc = 0x2a004cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 21), 3));
    // 0x2a0050: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x2a0050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x2a0054: 0x24750013  addiu       $s5, $v1, 0x13
    ctx->pc = 0x2a0054u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x2a0058: 0x24b60013  addiu       $s6, $a1, 0x13
    ctx->pc = 0x2a0058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x2a005c: 0xb810  mfhi        $s7
    ctx->pc = 0x2a005cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x2a0060: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x2a0060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x2a0064: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a0064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a0068: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x2a0068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
    // 0x2a006c: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x2a006cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a0070: 0x1537c2  srl         $a2, $s5, 31
    ctx->pc = 0x2a0070u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x2a0074: 0xf60018  mult        $zero, $a3, $s6
    ctx->pc = 0x2a0074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a0078: 0x17b0c3  sra         $s6, $s7, 3
    ctx->pc = 0x2a0078u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 3));
    // 0x2a007c: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x2a007cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2a0080: 0x24b70013  addiu       $s7, $a1, 0x13
    ctx->pc = 0x2a0080u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x2a0084: 0x16b1c0  sll         $s6, $s6, 7
    ctx->pc = 0x2a0084u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x2a0088: 0x9644001c  lhu         $a0, 0x1C($s2)
    ctx->pc = 0x2a0088u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2a008c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2a008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2a0090: 0x172fc2  srl         $a1, $s7, 31
    ctx->pc = 0x2a0090u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
    // 0x2a0094: 0xb010  mfhi        $s6
    ctx->pc = 0x2a0094u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x2a0098: 0xf50018  mult        $zero, $a3, $s5
    ctx->pc = 0x2a0098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a009c: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x2a009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x2a00a0: 0x26520038  addiu       $s2, $s2, 0x38
    ctx->pc = 0x2a00a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x2a00a4: 0xc010  mfhi        $t8
    ctx->pc = 0x2a00a4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x2a00a8: 0x16a8c3  sra         $s5, $s6, 3
    ctx->pc = 0x2a00a8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 22), 3));
    // 0x2a00ac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2a00acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2a00b0: 0x96560000  lhu         $s6, 0x0($s2)
    ctx->pc = 0x2a00b0u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a00b4: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x2a00b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2a00b8: 0xf70018  mult        $zero, $a3, $s7
    ctx->pc = 0x2a00b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a00bc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2a00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2a00c0: 0x9655001c  lhu         $s5, 0x1C($s2)
    ctx->pc = 0x2a00c0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2a00c4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2a00c8: 0x18b8c3  sra         $s7, $t8, 3
    ctx->pc = 0x2a00c8u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 24), 3));
    // 0x2a00cc: 0xc010  mfhi        $t8
    ctx->pc = 0x2a00ccu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x2a00d0: 0x2e63021  addu        $a2, $s7, $a2
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x2a00d4: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x2a00d8: 0x26d70013  addiu       $s7, $s6, 0x13
    ctx->pc = 0x2a00d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 19));
    // 0x2a00dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a00e0: 0x26b50013  addiu       $s5, $s5, 0x13
    ctx->pc = 0x2a00e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 19));
    // 0x2a00e4: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x2a00e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a00e8: 0x17b7c2  srl         $s6, $s7, 31
    ctx->pc = 0x2a00e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
    // 0x2a00ec: 0x1537c2  srl         $a2, $s5, 31
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x2a00f0: 0x26520038  addiu       $s2, $s2, 0x38
    ctx->pc = 0x2a00f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x2a00f4: 0x1820c3  sra         $a0, $t8, 3
    ctx->pc = 0x2a00f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 3));
    // 0x2a00f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a00fc: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2a00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2a0100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a0100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a0104: 0x2010  mfhi        $a0
    ctx->pc = 0x2a0104u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a0108: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2a0108u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x2a010c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a0110: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2a0110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2a0114: 0xf70018  mult        $zero, $a3, $s7
    ctx->pc = 0x2a0114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a0118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a011c: 0x0  nop
    ctx->pc = 0x2a011cu;
    // NOP
    // 0x2a0120: 0x1810  mfhi        $v1
    ctx->pc = 0x2a0120u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a0124: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2a0124u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2a0128: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2a012c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2a012cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2a0130: 0xf50018  mult        $zero, $a3, $s5
    ctx->pc = 0x2a0130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a0134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0138: 0x0  nop
    ctx->pc = 0x2a0138u;
    // NOP
    // 0x2a013c: 0x1810  mfhi        $v1
    ctx->pc = 0x2a013cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a0140: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2a0140u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2a0144: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a0144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a0148: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2a0148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2a014c: 0x1660ffb0  bnez        $s3, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2A014Cu;
    {
        const bool branch_taken_0x2a014c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A014Cu;
        // 0x2a0150: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a014c) {
            ctx->pc = 0x2A0010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0010;
        }
    }
    ctx->pc = 0x2A0154u;
    // 0x2a0154: 0x0  nop
    ctx->pc = 0x2a0154u;
    // NOP
label_2a0158:
    // 0x2a0158: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x2a0158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2a015c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A015Cu;
    {
        const bool branch_taken_0x2a015c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a015c) {
            ctx->pc = 0x2A01A0u;
            goto label_2a01a0;
        }
    }
    ctx->pc = 0x2A0164u;
    // 0x2a0164: 0x0  nop
    ctx->pc = 0x2a0164u;
    // NOP
label_2a0168:
    // 0x2a0168: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x2a0168u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a016c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a016cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a0170: 0x12a182a  slt         $v1, $t1, $t2
    ctx->pc = 0x2a0170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2a0174: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x2a0178: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2a017c: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x2a017cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a0180: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2a0184: 0x0  nop
    ctx->pc = 0x2a0184u;
    // NOP
    // 0x2a0188: 0x2010  mfhi        $a0
    ctx->pc = 0x2a0188u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a018c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2a018cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x2a0190: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a0190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a0194: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2a0198: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A0198u;
    {
        const bool branch_taken_0x2a0198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0198u;
        // 0x2a019c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0198) {
            ctx->pc = 0x2A0168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0168;
        }
    }
    ctx->pc = 0x2A01A0u;
label_2a01a0:
    // 0x2a01a0: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x2a01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2a01a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a01a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2a01ac: 0x194182a  slt         $v1, $t4, $s4
    ctx->pc = 0x2a01acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2a01b0: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x2A01B0u;
    {
        const bool branch_taken_0x2a01b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01B0u;
        // 0x2a01b4: 0x256b0050  addiu       $t3, $t3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01b0) {
            ctx->pc = 0x29FFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fff0;
        }
    }
    ctx->pc = 0x2A01B8u;
label_2a01b8:
    // 0x2a01b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a01b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a01bc: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x2a01bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a01c0: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x2A01C0u;
    {
        const bool branch_taken_0x2a01c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01C0u;
        // 0x2a01c4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01c0) {
            ctx->pc = 0x29FFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ffd0;
        }
    }
    ctx->pc = 0x2A01C8u;
label_2a01c8:
    // 0x2a01c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a01c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a01cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a01ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a01d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a01d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a01d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a01d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a01d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a01d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a01dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a01dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a01e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a01e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a01e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a01e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a01e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a01e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a01ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a01ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a01f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01F0u;
        // 0x2a01f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A01F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A01F8u;
}
