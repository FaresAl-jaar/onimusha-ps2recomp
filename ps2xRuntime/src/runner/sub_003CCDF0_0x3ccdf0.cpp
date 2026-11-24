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

// Function: sub_003CCDF0
// Address: 0x3ccdf0 - 0x3cd3f8
void sub_003CCDF0_0x3ccdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCDF0_0x3ccdf0");
#endif

    switch (ctx->pc) {
        case 0x3cce70u: goto label_3cce70;
        case 0x3cce80u: goto label_3cce80;
        case 0x3cce94u: goto label_3cce94;
        case 0x3cceecu: goto label_3cceec;
        case 0x3ccf1cu: goto label_3ccf1c;
        case 0x3ccf28u: goto label_3ccf28;
        case 0x3ccf84u: goto label_3ccf84;
        case 0x3ccf8cu: goto label_3ccf8c;
        case 0x3ccf98u: goto label_3ccf98;
        case 0x3ccfe0u: goto label_3ccfe0;
        case 0x3ccfe8u: goto label_3ccfe8;
        case 0x3cd03cu: goto label_3cd03c;
        case 0x3cd084u: goto label_3cd084;
        case 0x3cd0f8u: goto label_3cd0f8;
        case 0x3cd10cu: goto label_3cd10c;
        case 0x3cd150u: goto label_3cd150;
        case 0x3cd158u: goto label_3cd158;
        case 0x3cd1c0u: goto label_3cd1c0;
        case 0x3cd1c8u: goto label_3cd1c8;
        case 0x3cd1e4u: goto label_3cd1e4;
        case 0x3cd1f4u: goto label_3cd1f4;
        case 0x3cd268u: goto label_3cd268;
        case 0x3cd270u: goto label_3cd270;
        case 0x3cd28cu: goto label_3cd28c;
        case 0x3cd29cu: goto label_3cd29c;
        case 0x3cd2dcu: goto label_3cd2dc;
        case 0x3cd2f4u: goto label_3cd2f4;
        case 0x3cd304u: goto label_3cd304;
        case 0x3cd324u: goto label_3cd324;
        case 0x3cd360u: goto label_3cd360;
        case 0x3cd378u: goto label_3cd378;
        case 0x3cd390u: goto label_3cd390;
        case 0x3cd3a8u: goto label_3cd3a8;
        case 0x3cd3b4u: goto label_3cd3b4;
        case 0x3cd3c4u: goto label_3cd3c4;
        case 0x3cd3ccu: goto label_3cd3cc;
        case 0x3cd3e0u: goto label_3cd3e0;
        default: break;
    }

    ctx->pc = 0x3ccdf0u;

    // 0x3ccdf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ccdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ccdf4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3ccdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3ccdf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ccdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ccdfc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ccdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3cce00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cce04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cce04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cce08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3cce0c: 0x8086032e  lb          $a2, 0x32E($a0)
    ctx->pc = 0x3cce0cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 814)));
    // 0x3cce10: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x3cce10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3cce14: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3cce14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3cce18: 0x90d001bd  lbu         $s0, 0x1BD($a2)
    ctx->pc = 0x3cce18u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 445)));
    // 0x3cce1c: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x3cce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3cce20: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x3cce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3cce24: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3cce24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3cce28: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x3cce28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3cce2c: 0x10a3016a  beq         $a1, $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x3CCE2Cu;
    {
        const bool branch_taken_0x3cce2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE2Cu;
        // 0x3cce30: 0x24d101c4  addiu       $s1, $a2, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce2c) {
            ctx->pc = 0x3CD3D8u;
            goto label_3cd3d8;
        }
    }
    ctx->pc = 0x3CCE34u;
    // 0x3cce34: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3cce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3cce38: 0x10a3012b  beq         $a1, $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x3CCE38u;
    {
        const bool branch_taken_0x3cce38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE38u;
        // 0x3cce3c: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce38) {
            ctx->pc = 0x3CD2E8u;
            goto label_3cd2e8;
        }
    }
    ctx->pc = 0x3CCE40u;
    // 0x3cce40: 0x10a300af  beq         $a1, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x3CCE40u;
    {
        const bool branch_taken_0x3cce40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cce40) {
            ctx->pc = 0x3CD100u;
            goto label_3cd100;
        }
    }
    ctx->pc = 0x3CCE48u;
    // 0x3cce48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3cce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3cce4c: 0x10a30090  beq         $a1, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x3CCE4Cu;
    {
        const bool branch_taken_0x3cce4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cce4c) {
            ctx->pc = 0x3CD090u;
            goto label_3cd090;
        }
    }
    ctx->pc = 0x3CCE54u;
    // 0x3cce54: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCE54u;
    {
        const bool branch_taken_0x3cce54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cce54) {
            ctx->pc = 0x3CCE68u;
            goto label_3cce68;
        }
    }
    ctx->pc = 0x3CCE5Cu;
    // 0x3cce5c: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x3CCE5Cu;
    {
        const bool branch_taken_0x3cce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cce5c) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CCE64u;
    // 0x3cce64: 0x0  nop
    ctx->pc = 0x3cce64u;
    // NOP
label_3cce68:
    // 0x3cce68: 0xc0f32ec  jal         func_3CCBB0
    ctx->pc = 0x3CCE68u;
    SET_GPR_U32(ctx, 31, 0x3CCE70u);
    ctx->pc = 0x3CCBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCBB0u, 0x3CCE68u, 0x3CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE70u;
label_3cce70:
    // 0x3cce70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CCE70u;
    {
        const bool branch_taken_0x3cce70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCE70u;
        // 0x3cce74: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cce70) {
            ctx->pc = 0x3CCE80u;
            goto label_3cce80;
        }
    }
    ctx->pc = 0x3CCE78u;
    // 0x3cce78: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3CCE78u;
    SET_GPR_U32(ctx, 31, 0x3CCE80u);
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3CCE78u, 0x3CCE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE80u;
label_3cce80:
    // 0x3cce80: 0x8242032e  lb          $v0, 0x32E($s2)
    ctx->pc = 0x3cce80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 814)));
    // 0x3cce84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3cce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3cce88: 0x905001bd  lbu         $s0, 0x1BD($v0)
    ctx->pc = 0x3cce88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x3cce8c: 0xc0f32d8  jal         func_3CCB60
    ctx->pc = 0x3CCE8Cu;
    SET_GPR_U32(ctx, 31, 0x3CCE94u);
    ctx->pc = 0x3CCE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCE8Cu;
    // 0x3cce90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCB60u, 0x3CCE8Cu, 0x3CCE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCE94u;
label_3cce94:
    // 0x3cce94: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3cce94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3cce98: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x3cce98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x3cce9c: 0x8c26ea28  lw          $a2, -0x15D8($at)
    ctx->pc = 0x3cce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3ccea0: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x3ccea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x3ccea4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3ccea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3ccea8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3CCEA8u;
    {
        const bool branch_taken_0x3ccea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEA8u;
        // 0x3cceac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccea8) {
            ctx->pc = 0x3CCF20u;
            goto label_3ccf20;
        }
    }
    ctx->pc = 0x3CCEB0u;
    // 0x3cceb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3cceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cceb4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3cceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3cceb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ccebc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3ccebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3ccec0: 0x82430333  lb          $v1, 0x333($s2)
    ctx->pc = 0x3ccec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
    // 0x3ccec4: 0x86280a  movz        $a1, $a0, $a2
    ctx->pc = 0x3ccec4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x3ccec8: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x3ccec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x3ccecc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3cceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cced0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3cced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cced4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3cced4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3cced8: 0x0  nop
    ctx->pc = 0x3cced8u;
    // NOP
    // 0x3ccedc: 0x0  nop
    ctx->pc = 0x3ccedcu;
    // NOP
    // 0x3ccee0: 0x1010  mfhi        $v0
    ctx->pc = 0x3ccee0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3ccee4: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3CCEE4u;
    SET_GPR_U32(ctx, 31, 0x3CCEECu);
    ctx->pc = 0x3CCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCEE4u;
    // 0x3ccee8: 0xa2420333  sb          $v0, 0x333($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 819), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3CCEE4u, 0x3CCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCEECu;
label_3cceec:
    // 0x3cceec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ccef0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ccef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ccef4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ccef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ccef8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ccef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ccefc: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3ccefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3ccf00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ccf00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ccf04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ccf08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ccf0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ccf10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CCF14u;
    SET_GPR_U32(ctx, 31, 0x3CCF1Cu);
    ctx->pc = 0x3CCF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF14u;
    // 0x3ccf18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CCF14u, 0x3CCF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF1Cu;
label_3ccf1c:
    // 0x3ccf1c: 0x0  nop
    ctx->pc = 0x3ccf1cu;
    // NOP
label_3ccf20:
    // 0x3ccf20: 0xc0d8f80  jal         func_363E00
    ctx->pc = 0x3CCF20u;
    SET_GPR_U32(ctx, 31, 0x3CCF28u);
    ctx->pc = 0x3CCF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF20u;
    // 0x3ccf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E00u, 0x3CCF20u, 0x3CCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF28u;
label_3ccf28:
    // 0x3ccf28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CCF28u;
    {
        const bool branch_taken_0x3ccf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccf28) {
            ctx->pc = 0x3CCF40u;
            goto label_3ccf40;
        }
    }
    ctx->pc = 0x3CCF30u;
    // 0x3ccf30: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3ccf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3ccf34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3CCF34u;
    {
        const bool branch_taken_0x3ccf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF34u;
        // 0x3ccf38: 0x34500039  ori         $s0, $v0, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf34) {
            ctx->pc = 0x3CCF78u;
            goto label_3ccf78;
        }
    }
    ctx->pc = 0x3CCF3Cu;
    // 0x3ccf3c: 0x0  nop
    ctx->pc = 0x3ccf3cu;
    // NOP
label_3ccf40:
    // 0x3ccf40: 0x82420333  lb          $v0, 0x333($s2)
    ctx->pc = 0x3ccf40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
    // 0x3ccf44: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x3ccf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x3ccf48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CCF48u;
    {
        const bool branch_taken_0x3ccf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF48u;
        // 0x3ccf4c: 0x34700032  ori         $s0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf48) {
            ctx->pc = 0x3CCF78u;
            goto label_3ccf78;
        }
    }
    ctx->pc = 0x3CCF50u;
    // 0x3ccf50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ccf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ccf54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3ccf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ccf58: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3ccf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3ccf5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCF5Cu;
    {
        const bool branch_taken_0x3ccf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF5Cu;
        // 0x3ccf60: 0x34700034  ori         $s0, $v1, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf5c) {
            ctx->pc = 0x3CCF70u;
            goto label_3ccf70;
        }
    }
    ctx->pc = 0x3CCF64u;
    // 0x3ccf64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCF64u;
    {
        const bool branch_taken_0x3ccf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccf64) {
            ctx->pc = 0x3CCF78u;
            goto label_3ccf78;
        }
    }
    ctx->pc = 0x3CCF6Cu;
    // 0x3ccf6c: 0x0  nop
    ctx->pc = 0x3ccf6cu;
    // NOP
label_3ccf70:
    // 0x3ccf70: 0x34700033  ori         $s0, $v1, 0x33
    ctx->pc = 0x3ccf70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51);
    // 0x3ccf74: 0x0  nop
    ctx->pc = 0x3ccf74u;
    // NOP
label_3ccf78:
    // 0x3ccf78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ccf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf7c: 0xc0dc804  jal         func_372010
    ctx->pc = 0x3CCF7Cu;
    SET_GPR_U32(ctx, 31, 0x3CCF84u);
    ctx->pc = 0x3CCF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF7Cu;
    // 0x3ccf80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x3CCF7Cu, 0x3CCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF84u;
label_3ccf84:
    // 0x3ccf84: 0xc0f331c  jal         func_3CCC70
    ctx->pc = 0x3CCF84u;
    SET_GPR_U32(ctx, 31, 0x3CCF8Cu);
    ctx->pc = 0x3CCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF84u;
    // 0x3ccf88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCC70u, 0x3CCF84u, 0x3CCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF8Cu;
label_3ccf8c:
    // 0x3ccf8c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3ccf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3ccf90: 0xc0ceb88  jal         func_33AE20
    ctx->pc = 0x3CCF90u;
    SET_GPR_U32(ctx, 31, 0x3CCF98u);
    ctx->pc = 0x3CCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF90u;
    // 0x3ccf94: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE20u, 0x3CCF90u, 0x3CCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF98u;
label_3ccf98:
    // 0x3ccf98: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3ccf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3ccf9c: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x3ccf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3ccfa0: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x3ccfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3ccfa4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3CCFA4u;
    {
        const bool branch_taken_0x3ccfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccfa4) {
            ctx->pc = 0x3CCFF0u;
            goto label_3ccff0;
        }
    }
    ctx->pc = 0x3CCFACu;
    // 0x3ccfac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ccfb0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ccfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ccfb4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ccfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ccfb8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ccfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ccfbc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ccfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ccfc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ccfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfc4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3ccfc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3ccfc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ccfc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ccfccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ccfd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ccfd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfd8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CCFD8u;
    SET_GPR_U32(ctx, 31, 0x3CCFE0u);
    ctx->pc = 0x3CCFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFD8u;
    // 0x3ccfdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CCFD8u, 0x3CCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFE0u;
label_3ccfe0:
    // 0x3ccfe0: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x3CCFE0u;
    SET_GPR_U32(ctx, 31, 0x3CCFE8u);
    ctx->pc = 0x3CCFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFE0u;
    // 0x3ccfe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x3CCFE0u, 0x3CCFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFE8u;
label_3ccfe8:
    // 0x3ccfe8: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3CCFE8u;
    {
        const bool branch_taken_0x3ccfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccfe8) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CCFF0u;
label_3ccff0:
    // 0x3ccff0: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x3ccff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x3ccff4: 0x106000fa  beqz        $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x3CCFF4u;
    {
        const bool branch_taken_0x3ccff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccff4) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CCFFCu;
    // 0x3ccffc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3ccffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3cd000: 0x34420039  ori         $v0, $v0, 0x39
    ctx->pc = 0x3cd000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57);
    // 0x3cd004: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CD004u;
    {
        const bool branch_taken_0x3cd004 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD004u;
        // 0x3cd008: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd004) {
            ctx->pc = 0x3CD048u;
            goto label_3cd048;
        }
    }
    ctx->pc = 0x3CD00Cu;
    // 0x3cd00c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cd00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cd010: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3cd010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3cd014: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cd014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cd018: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3cd018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3cd01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cd01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd020: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3cd020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3cd024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd02c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cd02cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd030: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cd030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd034: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CD034u;
    SET_GPR_U32(ctx, 31, 0x3CD03Cu);
    ctx->pc = 0x3CD038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD034u;
    // 0x3cd038: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CD034u, 0x3CD03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD03Cu;
label_3cd03c:
    // 0x3cd03c: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3CD03Cu;
    {
        const bool branch_taken_0x3cd03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd03c) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD044u;
    // 0x3cd044: 0x0  nop
    ctx->pc = 0x3cd044u;
    // NOP
label_3cd048:
    // 0x3cd048: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3cd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3cd04c: 0xa2420020  sb          $v0, 0x20($s2)
    ctx->pc = 0x3cd04cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cd050: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cd050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cd054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cd054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cd058: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cd058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cd05c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3cd05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3cd060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cd060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd064: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3cd064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3cd068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd06c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3cd06cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3cd070: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd074: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cd074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd078: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cd078u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd07c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CD07Cu;
    SET_GPR_U32(ctx, 31, 0x3CD084u);
    ctx->pc = 0x3CD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD07Cu;
    // 0x3cd080: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CD07Cu, 0x3CD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD084u;
label_3cd084:
    // 0x3cd084: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x3CD084u;
    {
        const bool branch_taken_0x3cd084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd084) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD08Cu;
    // 0x3cd08c: 0x0  nop
    ctx->pc = 0x3cd08cu;
    // NOP
label_3cd090:
    // 0x3cd090: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3cd090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3cd094: 0xa2420020  sb          $v0, 0x20($s2)
    ctx->pc = 0x3cd094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cd098: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3cd098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3cd09c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cd0a0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd0a4: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x3cd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
    // 0x3cd0a8: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3cd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3cd0ac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3cd0acu;
    { uint32_t bits = FAST_READ32(0x65E4B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cd0b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cd0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd0b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3cd0b4u;
    { uint32_t bits = FAST_READ32(0x65E4B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cd0b8: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3cd0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3cd0bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3cd0bcu;
    { uint32_t bits = FAST_READ32(0x65E4B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd0c0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x3cd0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3cd0c4: 0xe6420090  swc1        $f2, 0x90($s2)
    ctx->pc = 0x3cd0c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x3cd0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd0cc: 0xe6410094  swc1        $f1, 0x94($s2)
    ctx->pc = 0x3cd0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x3cd0d0: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x3cd0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x3cd0d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3cd0d4u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cd0d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3cd0d8u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cd0dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cd0dcu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd0e0: 0xe642009c  swc1        $f2, 0x9C($s2)
    ctx->pc = 0x3cd0e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
    // 0x3cd0e4: 0xe64100a0  swc1        $f1, 0xA0($s2)
    ctx->pc = 0x3cd0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x3cd0e8: 0xe64000a4  swc1        $f0, 0xA4($s2)
    ctx->pc = 0x3cd0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
    // 0x3cd0ec: 0x82430333  lb          $v1, 0x333($s2)
    ctx->pc = 0x3cd0ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
    // 0x3cd0f0: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x3CD0F0u;
    SET_GPR_U32(ctx, 31, 0x3CD0F8u);
    ctx->pc = 0x3CD0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD0F0u;
    // 0x3cd0f4: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x3CD0F0u, 0x3CD0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD0F8u;
label_3cd0f8:
    // 0x3cd0f8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x3CD0F8u;
    {
        const bool branch_taken_0x3cd0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd0f8) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD100u;
label_3cd100:
    // 0x3cd100: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd104: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3CD104u;
    SET_GPR_U32(ctx, 31, 0x3CD10Cu);
    ctx->pc = 0x3CD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD104u;
    // 0x3cd108: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3CD104u, 0x3CD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD10Cu;
label_3cd10c:
    // 0x3cd10c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3cd10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3cd110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cd110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd114: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3CD114u;
    {
        const bool branch_taken_0x3cd114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD114u;
        // 0x3cd118: 0x8c241284  lw          $a0, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd114) {
            ctx->pc = 0x3CD160u;
            goto label_3cd160;
        }
    }
    ctx->pc = 0x3CD11Cu;
    // 0x3cd11c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cd120: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cd120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cd124: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3cd124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3cd128: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cd128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cd12c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3cd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3cd130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cd130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd134: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3cd134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3cd138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd13c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd140: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cd140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd144: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cd144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd148: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CD148u;
    SET_GPR_U32(ctx, 31, 0x3CD150u);
    ctx->pc = 0x3CD14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD148u;
    // 0x3cd14c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CD148u, 0x3CD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD150u;
label_3cd150:
    // 0x3cd150: 0xc0f333c  jal         func_3CCCF0
    ctx->pc = 0x3CD150u;
    SET_GPR_U32(ctx, 31, 0x3CD158u);
    ctx->pc = 0x3CD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD150u;
    // 0x3cd154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCCF0u, 0x3CD150u, 0x3CD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD158u;
label_3cd158:
    // 0x3cd158: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x3CD158u;
    {
        const bool branch_taken_0x3cd158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd158) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD160u;
label_3cd160:
    // 0x3cd160: 0x1080009f  beqz        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x3CD160u;
    {
        const bool branch_taken_0x3cd160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD160u;
        // 0x3cd164: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd160) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD168u;
    // 0x3cd168: 0x144c009d  bne         $v0, $t4, . + 4 + (0x9D << 2)
    ctx->pc = 0x3CD168u;
    {
        const bool branch_taken_0x3cd168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x3cd168) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD170u;
    // 0x3cd170: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x3cd170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3cd174: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x3cd174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3cd178: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3CD178u;
    {
        const bool branch_taken_0x3cd178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd178) {
            ctx->pc = 0x3CD200u;
            goto label_3cd200;
        }
    }
    ctx->pc = 0x3CD180u;
    // 0x3cd180: 0x92430020  lbu         $v1, 0x20($s2)
    ctx->pc = 0x3cd180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3cd184: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3cd184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3cd188: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3cd188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3cd18c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cd190: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cd190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cd194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cd194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd19c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd19cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd1a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cd1a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd1a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cd1a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd1a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cd1a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd1ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3cd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cd1b0: 0xa2420020  sb          $v0, 0x20($s2)
    ctx->pc = 0x3cd1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cd1b4: 0xa2400021  sb          $zero, 0x21($s2)
    ctx->pc = 0x3cd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cd1b8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CD1B8u;
    SET_GPR_U32(ctx, 31, 0x3CD1C0u);
    ctx->pc = 0x3CD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1B8u;
    // 0x3cd1bc: 0xffac0000  sd          $t4, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CD1B8u, 0x3CD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1C0u;
label_3cd1c0:
    // 0x3cd1c0: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x3CD1C0u;
    SET_GPR_U32(ctx, 31, 0x3CD1C8u);
    ctx->pc = 0x3CD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1C0u;
    // 0x3cd1c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x3CD1C0u, 0x3CD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1C8u;
label_3cd1c8:
    // 0x3cd1c8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3cd1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3cd1cc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3cd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3cd1d0: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3cd1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3cd1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd1d8: 0x34450035  ori         $a1, $v0, 0x35
    ctx->pc = 0x3cd1d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    // 0x3cd1dc: 0xc0dc810  jal         func_372040
    ctx->pc = 0x3CD1DCu;
    SET_GPR_U32(ctx, 31, 0x3CD1E4u);
    ctx->pc = 0x3CD1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1DCu;
    // 0x3cd1e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x3CD1DCu, 0x3CD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1E4u;
label_3cd1e4:
    // 0x3cd1e4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd1e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cd1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd1ec: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3CD1ECu;
    SET_GPR_U32(ctx, 31, 0x3CD1F4u);
    ctx->pc = 0x3CD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1ECu;
    // 0x3cd1f0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3CD1ECu, 0x3CD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1F4u;
label_3cd1f4:
    // 0x3cd1f4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3CD1F4u;
    {
        const bool branch_taken_0x3cd1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1f4) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD1FCu;
    // 0x3cd1fc: 0x0  nop
    ctx->pc = 0x3cd1fcu;
    // NOP
label_3cd200:
    // 0x3cd200: 0x82420333  lb          $v0, 0x333($s2)
    ctx->pc = 0x3cd200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
    // 0x3cd204: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3CD204u;
    {
        const bool branch_taken_0x3cd204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd204) {
            ctx->pc = 0x3CD2A8u;
            goto label_3cd2a8;
        }
    }
    ctx->pc = 0x3CD20Cu;
    // 0x3cd20c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD20Cu;
    {
        const bool branch_taken_0x3cd20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD20Cu;
        // 0x3cd210: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd20c) {
            ctx->pc = 0x3CD220u;
            goto label_3cd220;
        }
    }
    ctx->pc = 0x3CD214u;
    // 0x3cd214: 0x14820024  bne         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3CD214u;
    {
        const bool branch_taken_0x3cd214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd214) {
            ctx->pc = 0x3CD2A8u;
            goto label_3cd2a8;
        }
    }
    ctx->pc = 0x3CD21Cu;
    // 0x3cd21c: 0x0  nop
    ctx->pc = 0x3cd21cu;
    // NOP
label_3cd220:
    // 0x3cd220: 0x924b0020  lbu         $t3, 0x20($s2)
    ctx->pc = 0x3cd220u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3cd224: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3cd224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3cd228: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cd228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cd22c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3cd22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3cd230: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3cd230u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd234: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cd238: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cd238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cd23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cd23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd244: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd248: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cd248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd24c: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x3cd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3cd250: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cd250u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd254: 0xa2420020  sb          $v0, 0x20($s2)
    ctx->pc = 0x3cd254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cd258: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cd258u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd25c: 0xa24c0021  sb          $t4, 0x21($s2)
    ctx->pc = 0x3cd25cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 12));
    // 0x3cd260: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CD260u;
    SET_GPR_U32(ctx, 31, 0x3CD268u);
    ctx->pc = 0x3CD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD260u;
    // 0x3cd264: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CD260u, 0x3CD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD268u;
label_3cd268:
    // 0x3cd268: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x3CD268u;
    SET_GPR_U32(ctx, 31, 0x3CD270u);
    ctx->pc = 0x3CD26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD268u;
    // 0x3cd26c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x3CD268u, 0x3CD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD270u;
label_3cd270:
    // 0x3cd270: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3cd270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3cd274: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3cd274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3cd278: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3cd278u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3cd27c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd280: 0x34450037  ori         $a1, $v0, 0x37
    ctx->pc = 0x3cd280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
    // 0x3cd284: 0xc0dc810  jal         func_372040
    ctx->pc = 0x3CD284u;
    SET_GPR_U32(ctx, 31, 0x3CD28Cu);
    ctx->pc = 0x3CD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD284u;
    // 0x3cd288: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x3CD284u, 0x3CD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD28Cu;
label_3cd28c:
    // 0x3cd28c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cd290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd294: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3CD294u;
    SET_GPR_U32(ctx, 31, 0x3CD29Cu);
    ctx->pc = 0x3CD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD294u;
    // 0x3cd298: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3CD294u, 0x3CD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD29Cu;
label_3cd29c:
    // 0x3cd29c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3CD29Cu;
    {
        const bool branch_taken_0x3cd29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd29c) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD2A4u;
    // 0x3cd2a4: 0x0  nop
    ctx->pc = 0x3cd2a4u;
    // NOP
label_3cd2a8:
    // 0x3cd2a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cd2ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3cd2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3cd2b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cd2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cd2b4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3cd2b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cd2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cd2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cd2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd2c0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3cd2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3cd2c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd2cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cd2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd2d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cd2d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd2d4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CD2D4u;
    SET_GPR_U32(ctx, 31, 0x3CD2DCu);
    ctx->pc = 0x3CD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2D4u;
    // 0x3cd2d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CD2D4u, 0x3CD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD2DCu;
label_3cd2dc:
    // 0x3cd2dc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3CD2DCu;
    {
        const bool branch_taken_0x3cd2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd2dc) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD2E4u;
    // 0x3cd2e4: 0x0  nop
    ctx->pc = 0x3cd2e4u;
    // NOP
label_3cd2e8:
    // 0x3cd2e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3cd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3cd2ec: 0xc095150  jal         func_254540
    ctx->pc = 0x3CD2ECu;
    SET_GPR_U32(ctx, 31, 0x3CD2F4u);
    ctx->pc = 0x3CD2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2ECu;
    // 0x3cd2f0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3CD2ECu, 0x3CD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD2F4u;
label_3cd2f4:
    // 0x3cd2f4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3CD2F4u;
    {
        const bool branch_taken_0x3cd2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2F4u;
        // 0x3cd2f8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd2f4) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD2FCu;
    // 0x3cd2fc: 0xc095154  jal         func_254550
    ctx->pc = 0x3CD2FCu;
    SET_GPR_U32(ctx, 31, 0x3CD304u);
    ctx->pc = 0x3CD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2FCu;
    // 0x3cd300: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3CD2FCu, 0x3CD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD304u;
label_3cd304:
    // 0x3cd304: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3CD304u;
    {
        const bool branch_taken_0x3cd304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd304) {
            ctx->pc = 0x3CD330u;
            goto label_3cd330;
        }
    }
    ctx->pc = 0x3CD30Cu;
    // 0x3cd30c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3cd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3cd310: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd314: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3cd314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3cd318: 0xa2420020  sb          $v0, 0x20($s2)
    ctx->pc = 0x3cd318u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cd31c: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3CD31Cu;
    SET_GPR_U32(ctx, 31, 0x3CD324u);
    ctx->pc = 0x3CD320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD31Cu;
    // 0x3cd320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3CD31Cu, 0x3CD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD324u;
label_3cd324:
    // 0x3cd324: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3CD324u;
    {
        const bool branch_taken_0x3cd324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd324) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD32Cu;
    // 0x3cd32c: 0x0  nop
    ctx->pc = 0x3cd32cu;
    // NOP
label_3cd330:
    // 0x3cd330: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x3cd330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3cd334: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3cd334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3cd338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cd338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cd33c: 0xa2420020  sb          $v0, 0x20($s2)
    ctx->pc = 0x3cd33cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cd340: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x3cd340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
    // 0x3cd344: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3CD344u;
    {
        const bool branch_taken_0x3cd344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD344u;
        // 0x3cd348: 0x8c231284  lw          $v1, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd344) {
            ctx->pc = 0x3CD380u;
            goto label_3cd380;
        }
    }
    ctx->pc = 0x3CD34Cu;
    // 0x3cd34c: 0x94670004  lhu         $a3, 0x4($v1)
    ctx->pc = 0x3cd34cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3cd350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cd350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd354: 0x82460333  lb          $a2, 0x333($s2)
    ctx->pc = 0x3cd354u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
    // 0x3cd358: 0xc0f3590  jal         func_3CD640
    ctx->pc = 0x3CD358u;
    SET_GPR_U32(ctx, 31, 0x3CD360u);
    ctx->pc = 0x3CD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD358u;
    // 0x3cd35c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD640u, 0x3CD358u, 0x3CD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD360u;
label_3cd360:
    // 0x3cd360: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3cd360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3cd364: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3cd364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3cd368: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3cd368u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3cd36c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd370: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3CD370u;
    SET_GPR_U32(ctx, 31, 0x3CD378u);
    ctx->pc = 0x3CD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD370u;
    // 0x3cd374: 0x34450036  ori         $a1, $v0, 0x36 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3CD370u, 0x3CD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD378u;
label_3cd378:
    // 0x3cd378: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3CD378u;
    {
        const bool branch_taken_0x3cd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd378) {
            ctx->pc = 0x3CD3A8u;
            goto label_3cd3a8;
        }
    }
    ctx->pc = 0x3CD380u;
label_3cd380:
    // 0x3cd380: 0x94660004  lhu         $a2, 0x4($v1)
    ctx->pc = 0x3cd380u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3cd384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cd384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd388: 0xc0f35ac  jal         func_3CD6B0
    ctx->pc = 0x3CD388u;
    SET_GPR_U32(ctx, 31, 0x3CD390u);
    ctx->pc = 0x3CD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD388u;
    // 0x3cd38c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD6B0u, 0x3CD388u, 0x3CD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD390u;
label_3cd390:
    // 0x3cd390: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3cd390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3cd394: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3cd394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3cd398: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3cd398u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3cd39c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd3a0: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3CD3A0u;
    SET_GPR_U32(ctx, 31, 0x3CD3A8u);
    ctx->pc = 0x3CD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3A0u;
    // 0x3cd3a4: 0x34450038  ori         $a1, $v0, 0x38 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3CD3A0u, 0x3CD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3A8u;
label_3cd3a8:
    // 0x3cd3a8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd3ac: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x3CD3ACu;
    SET_GPR_U32(ctx, 31, 0x3CD3B4u);
    ctx->pc = 0x3CD3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3ACu;
    // 0x3cd3b0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x3CD3ACu, 0x3CD3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3B4u;
label_3cd3b4:
    // 0x3cd3b4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd3b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cd3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd3bc: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3CD3BCu;
    SET_GPR_U32(ctx, 31, 0x3CD3C4u);
    ctx->pc = 0x3CD3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3BCu;
    // 0x3cd3c0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3CD3BCu, 0x3CD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3C4u;
label_3cd3c4:
    // 0x3cd3c4: 0xc0f3564  jal         func_3CD590
    ctx->pc = 0x3CD3C4u;
    SET_GPR_U32(ctx, 31, 0x3CD3CCu);
    ctx->pc = 0x3CD3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3C4u;
    // 0x3cd3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD590u, 0x3CD3C4u, 0x3CD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3CCu;
label_3cd3cc:
    // 0x3cd3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD3CCu;
    {
        const bool branch_taken_0x3cd3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd3cc) {
            ctx->pc = 0x3CD3E0u;
            goto label_3cd3e0;
        }
    }
    ctx->pc = 0x3CD3D4u;
    // 0x3cd3d4: 0x0  nop
    ctx->pc = 0x3cd3d4u;
    // NOP
label_3cd3d8:
    // 0x3cd3d8: 0xc0f333c  jal         func_3CCCF0
    ctx->pc = 0x3CD3D8u;
    SET_GPR_U32(ctx, 31, 0x3CD3E0u);
    ctx->pc = 0x3CCCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCCF0u, 0x3CD3D8u, 0x3CD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3E0u;
label_3cd3e0:
    // 0x3cd3e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cd3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd3e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cd3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cd3e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cd3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cd3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3F0u;
        // 0x3cd3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD3F8u;
}
