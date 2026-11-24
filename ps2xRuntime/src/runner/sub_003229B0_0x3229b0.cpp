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

// Function: sub_003229B0
// Address: 0x3229b0 - 0x322dcc
void sub_003229B0_0x3229b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003229B0_0x3229b0");
#endif

    switch (ctx->pc) {
        case 0x322a10u: goto label_322a10;
        case 0x322a24u: goto label_322a24;
        case 0x322b04u: goto label_322b04;
        case 0x322b28u: goto label_322b28;
        case 0x322b48u: goto label_322b48;
        case 0x322b58u: goto label_322b58;
        case 0x322b68u: goto label_322b68;
        case 0x322b78u: goto label_322b78;
        case 0x322b8cu: goto label_322b8c;
        case 0x322c40u: goto label_322c40;
        case 0x322c60u: goto label_322c60;
        case 0x322c70u: goto label_322c70;
        case 0x322d0cu: goto label_322d0c;
        default: break;
    }

    ctx->pc = 0x3229b0u;

    // 0x3229b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3229b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3229b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3229b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3229b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3229b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3229bc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3229bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3229c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3229c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3229c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3229c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3229c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3229c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3229cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3229ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3229d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3229d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3229d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3229d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3229d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3229d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3229dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3229dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3229e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3229e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3229e4: 0x8c236000  lw          $v1, 0x6000($at)
    ctx->pc = 0x3229e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24576)));
    // 0x3229e8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3229E8u;
    {
        const bool branch_taken_0x3229e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3229ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229E8u;
        // 0x3229ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3229e8) {
            ctx->pc = 0x322A40u;
            goto label_322a40;
        }
    }
    ctx->pc = 0x3229F0u;
    // 0x3229f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3229f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3229f4: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x3229f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x3229f8: 0x8c226004  lw          $v0, 0x6004($at)
    ctx->pc = 0x3229f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24580)));
    // 0x3229fc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3229fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x322a00: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x322A00u;
    {
        const bool branch_taken_0x322a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A00u;
        // 0x322a04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a00) {
            ctx->pc = 0x322A40u;
            goto label_322a40;
        }
    }
    ctx->pc = 0x322A08u;
    // 0x322a08: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x322a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a0c: 0x0  nop
    ctx->pc = 0x322a0cu;
    // NOP
label_322a10:
    // 0x322a10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322a14: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x322a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x322a18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x322a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x322a1c: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x322A1Cu;
    SET_GPR_U32(ctx, 31, 0x322A24u);
    ctx->pc = 0x322A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A1Cu;
    // 0x322a20: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x322A1Cu, 0x322A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A24u;
label_322a24:
    // 0x322a24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322a28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x322a2c: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322a30: 0x8c226004  lw          $v0, 0x6004($at)
    ctx->pc = 0x322a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24580)));
    // 0x322a34: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x322a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x322a38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x322A38u;
    {
        const bool branch_taken_0x322a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A38u;
        // 0x322a3c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a38) {
            ctx->pc = 0x322A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322a10;
        }
    }
    ctx->pc = 0x322A40u;
label_322a40:
    // 0x322a40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322a44: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322a44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322a48: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x322a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x322a4c: 0x8c226000  lw          $v0, 0x6000($at)
    ctx->pc = 0x322a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24576)));
    // 0x322a50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x322a58: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322a58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322a5c: 0xac226000  sw          $v0, 0x6000($at)
    ctx->pc = 0x322a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24576), GPR_U32(ctx, 2));
    // 0x322a60: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x322a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x322a64: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x322a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x322a68: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x322a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x322a6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x322a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322a70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x322a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322a74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322a78: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x322A78u;
    {
        const bool branch_taken_0x322a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A78u;
        // 0x322a7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a78) {
            ctx->pc = 0x322AD8u;
            goto label_322ad8;
        }
    }
    ctx->pc = 0x322A80u;
    // 0x322a80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x322a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322a84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322a88: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x322A88u;
    {
        const bool branch_taken_0x322a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322a88) {
            ctx->pc = 0x322AD8u;
            goto label_322ad8;
        }
    }
    ctx->pc = 0x322A90u;
    // 0x322a90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x322a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x322a94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322a98: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322a98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322a9c: 0x8c226008  lw          $v0, 0x6008($at)
    ctx->pc = 0x322a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24584)));
    // 0x322aa0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x322AA0u;
    {
        const bool branch_taken_0x322aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x322AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AA0u;
        // 0x322aa4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322aa0) {
            ctx->pc = 0x322AC8u;
            goto label_322ac8;
        }
    }
    ctx->pc = 0x322AA8u;
    // 0x322aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322aac: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322aacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322ab0: 0xac236008  sw          $v1, 0x6008($at)
    ctx->pc = 0x322ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24584), GPR_U32(ctx, 3));
    // 0x322ab4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322ab8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322abc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x322ABCu;
    {
        const bool branch_taken_0x322abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322ABCu;
        // 0x322ac0: 0xa022600c  sb          $v0, 0x600C($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 24588), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322abc) {
            ctx->pc = 0x322AD8u;
            goto label_322ad8;
        }
    }
    ctx->pc = 0x322AC4u;
    // 0x322ac4: 0x0  nop
    ctx->pc = 0x322ac4u;
    // NOP
label_322ac8:
    // 0x322ac8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322acc: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322accu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322ad0: 0xa020600c  sb          $zero, 0x600C($at)
    ctx->pc = 0x322ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 24588), (uint8_t)GPR_U32(ctx, 0));
    // 0x322ad4: 0x0  nop
    ctx->pc = 0x322ad4u;
    // NOP
label_322ad8:
    // 0x322ad8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322adc: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x322adcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x322ae0: 0x8c226000  lw          $v0, 0x6000($at)
    ctx->pc = 0x322ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24576)));
    // 0x322ae4: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x322ae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x322ae8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x322AE8u;
    {
        const bool branch_taken_0x322ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AE8u;
        // 0x322aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ae8) {
            ctx->pc = 0x322AF8u;
            goto label_322af8;
        }
    }
    ctx->pc = 0x322AF0u;
    // 0x322af0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x322AF0u;
    {
        const bool branch_taken_0x322af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322af0) {
            ctx->pc = 0x322DA0u;
            goto label_322da0;
        }
    }
    ctx->pc = 0x322AF8u;
label_322af8:
    // 0x322af8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x322af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x322afc: 0xc0bd484  jal         func_2F5210
    ctx->pc = 0x322AFCu;
    SET_GPR_U32(ctx, 31, 0x322B04u);
    ctx->pc = 0x322B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AFCu;
    // 0x322b00: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5210u, 0x322AFCu, 0x322B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B04u;
label_322b04:
    // 0x322b04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322B04u;
    {
        const bool branch_taken_0x322b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322b04) {
            ctx->pc = 0x322B18u;
            goto label_322b18;
        }
    }
    ctx->pc = 0x322B0Cu;
    // 0x322b0c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x322B0Cu;
    {
        const bool branch_taken_0x322b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B0Cu;
        // 0x322b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b0c) {
            ctx->pc = 0x322DA0u;
            goto label_322da0;
        }
    }
    ctx->pc = 0x322B14u;
    // 0x322b14: 0x0  nop
    ctx->pc = 0x322b14u;
    // NOP
label_322b18:
    // 0x322b18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x322b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b1c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x322b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b20: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x322b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b24: 0x0  nop
    ctx->pc = 0x322b24u;
    // NOP
label_322b28:
    // 0x322b28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322b2c: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x322b2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x322b30: 0x2019021  addu        $s2, $s0, $at
    ctx->pc = 0x322b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x322b34: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x322b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x322b38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x322B38u;
    {
        const bool branch_taken_0x322b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B38u;
        // 0x322b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b38) {
            ctx->pc = 0x322B90u;
            goto label_322b90;
        }
    }
    ctx->pc = 0x322B40u;
    // 0x322b40: 0xc0c7fc0  jal         func_31FF00
    ctx->pc = 0x322B40u;
    SET_GPR_U32(ctx, 31, 0x322B48u);
    ctx->pc = 0x31FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FF00u, 0x322B40u, 0x322B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B48u;
label_322b48:
    // 0x322b48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322B48u;
    {
        const bool branch_taken_0x322b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B48u;
        // 0x322b4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b48) {
            ctx->pc = 0x322B60u;
            goto label_322b60;
        }
    }
    ctx->pc = 0x322B50u;
    // 0x322b50: 0xc0cfb84  jal         func_33EE10
    ctx->pc = 0x322B50u;
    SET_GPR_U32(ctx, 31, 0x322B58u);
    ctx->pc = 0x33EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE10u, 0x322B50u, 0x322B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B58u;
label_322b58:
    // 0x322b58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x322B58u;
    {
        const bool branch_taken_0x322b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b58) {
            ctx->pc = 0x322B90u;
            goto label_322b90;
        }
    }
    ctx->pc = 0x322B60u;
label_322b60:
    // 0x322b60: 0xc0cfcf4  jal         func_33F3D0
    ctx->pc = 0x322B60u;
    SET_GPR_U32(ctx, 31, 0x322B68u);
    ctx->pc = 0x322B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B60u;
    // 0x322b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3D0u, 0x322B60u, 0x322B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B68u;
label_322b68:
    // 0x322b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x322B68u;
    {
        const bool branch_taken_0x322b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B68u;
        // 0x322b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b68) {
            ctx->pc = 0x322B90u;
            goto label_322b90;
        }
    }
    ctx->pc = 0x322B70u;
    // 0x322b70: 0xc0cfb94  jal         func_33EE50
    ctx->pc = 0x322B70u;
    SET_GPR_U32(ctx, 31, 0x322B78u);
    ctx->pc = 0x33EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE50u, 0x322B70u, 0x322B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B78u;
label_322b78:
    // 0x322b78: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x322b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x322b7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322B7Cu;
    {
        const bool branch_taken_0x322b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B7Cu;
        // 0x322b80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b7c) {
            ctx->pc = 0x322B90u;
            goto label_322b90;
        }
    }
    ctx->pc = 0x322B84u;
    // 0x322b84: 0xc0cfd30  jal         func_33F4C0
    ctx->pc = 0x322B84u;
    SET_GPR_U32(ctx, 31, 0x322B8Cu);
    ctx->pc = 0x33F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F4C0u, 0x322B84u, 0x322B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B8Cu;
label_322b8c:
    // 0x322b8c: 0x0  nop
    ctx->pc = 0x322b8cu;
    // NOP
label_322b90:
    // 0x322b90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x322b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x322b94: 0x2a620100  slti        $v0, $s3, 0x100
    ctx->pc = 0x322b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x322b98: 0x26310110  addiu       $s1, $s1, 0x110
    ctx->pc = 0x322b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x322b9c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x322B9Cu;
    {
        const bool branch_taken_0x322b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B9Cu;
        // 0x322ba0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b9c) {
            ctx->pc = 0x322B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322b28;
        }
    }
    ctx->pc = 0x322BA4u;
    // 0x322ba4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x322ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x322ba8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x322ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x322bac: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x322bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x322bb0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x322bb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x322bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322bb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x322bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322bbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322bc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x322BC0u;
    {
        const bool branch_taken_0x322bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BC0u;
        // 0x322bc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322bc0) {
            ctx->pc = 0x322BE8u;
            goto label_322be8;
        }
    }
    ctx->pc = 0x322BC8u;
    // 0x322bc8: 0xac4008d0  sw          $zero, 0x8D0($v0)
    ctx->pc = 0x322bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2256), GPR_U32(ctx, 0));
    // 0x322bcc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x322bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x322bd0: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x322bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x322bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x322bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322bd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x322bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322be0: 0xac4008d4  sw          $zero, 0x8D4($v0)
    ctx->pc = 0x322be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2260), GPR_U32(ctx, 0));
    // 0x322be4: 0x0  nop
    ctx->pc = 0x322be4u;
    // NOP
label_322be8:
    // 0x322be8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x322be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x322bec: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x322becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x322bf0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x322bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x322bf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x322bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x322bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x322bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322bfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x322bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322c00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322c04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x322C04u;
    {
        const bool branch_taken_0x322c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c04) {
            ctx->pc = 0x322C30u;
            goto label_322c30;
        }
    }
    ctx->pc = 0x322C0Cu;
    // 0x322c0c: 0xac4008d0  sw          $zero, 0x8D0($v0)
    ctx->pc = 0x322c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2256), GPR_U32(ctx, 0));
    // 0x322c10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x322c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x322c14: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x322c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x322c18: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x322c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x322c1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x322c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322c20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x322c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322c28: 0xac4008d4  sw          $zero, 0x8D4($v0)
    ctx->pc = 0x322c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2260), GPR_U32(ctx, 0));
    // 0x322c2c: 0x0  nop
    ctx->pc = 0x322c2cu;
    // NOP
label_322c30:
    // 0x322c30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x322c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c34: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x322c34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x322c3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322c40:
    // 0x322c40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322c44: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x322c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x322c48: 0x2e18821  addu        $s1, $s7, $at
    ctx->pc = 0x322c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x322c4c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x322c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x322c50: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x322C50u;
    {
        const bool branch_taken_0x322c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C50u;
        // 0x322c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c50) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322C58u;
    // 0x322c58: 0xc0cfcf4  jal         func_33F3D0
    ctx->pc = 0x322C58u;
    SET_GPR_U32(ctx, 31, 0x322C60u);
    ctx->pc = 0x33F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3D0u, 0x322C58u, 0x322C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C60u;
label_322c60:
    // 0x322c60: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x322C60u;
    {
        const bool branch_taken_0x322c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C60u;
        // 0x322c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c60) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322C68u;
    // 0x322c68: 0xc0cfcd8  jal         func_33F360
    ctx->pc = 0x322C68u;
    SET_GPR_U32(ctx, 31, 0x322C70u);
    ctx->pc = 0x322C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C68u;
    // 0x322c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F360u, 0x322C68u, 0x322C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C70u;
label_322c70:
    // 0x322c70: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x322C70u;
    {
        const bool branch_taken_0x322c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c70) {
            ctx->pc = 0x322CE0u;
            goto label_322ce0;
        }
    }
    ctx->pc = 0x322C78u;
    // 0x322c78: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x322c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x322c7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x322c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x322c80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x322C80u;
    {
        const bool branch_taken_0x322c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x322C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C80u;
        // 0x322c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c80) {
            ctx->pc = 0x322CA8u;
            goto label_322ca8;
        }
    }
    ctx->pc = 0x322C88u;
    // 0x322c88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x322C88u;
    {
        const bool branch_taken_0x322c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x322C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C88u;
        // 0x322c8c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c88) {
            ctx->pc = 0x322CA8u;
            goto label_322ca8;
        }
    }
    ctx->pc = 0x322C90u;
    // 0x322c90: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x322c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x322c94: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x322c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x322c98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x322C98u;
    {
        const bool branch_taken_0x322c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C98u;
        // 0x322c9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c98) {
            ctx->pc = 0x322CE0u;
            goto label_322ce0;
        }
    }
    ctx->pc = 0x322CA0u;
    // 0x322ca0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x322CA0u;
    {
        const bool branch_taken_0x322ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322ca0) {
            ctx->pc = 0x322CE0u;
            goto label_322ce0;
        }
    }
    ctx->pc = 0x322CA8u;
label_322ca8:
    // 0x322ca8: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x322ca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x322cac: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x322CACu;
    {
        const bool branch_taken_0x322cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CACu;
        // 0x322cb0: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cac) {
            ctx->pc = 0x322D98u;
            goto label_322d98;
        }
    }
    ctx->pc = 0x322CB4u;
    // 0x322cb4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x322cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x322cb8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x322cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x322cbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x322cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x322cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322cc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322cc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x322CC8u;
    {
        const bool branch_taken_0x322cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cc8) {
            ctx->pc = 0x322CD8u;
            goto label_322cd8;
        }
    }
    ctx->pc = 0x322CD0u;
    // 0x322cd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x322cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x322cd4: 0xac5108d0  sw          $s1, 0x8D0($v0)
    ctx->pc = 0x322cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2256), GPR_U32(ctx, 17));
label_322cd8:
    // 0x322cd8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x322cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x322cdc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x322cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_322ce0:
    // 0x322ce0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x322ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x322ce4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x322ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x322ce8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x322ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x322cec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x322cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x322cf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x322cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x322cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322cf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322cfc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x322CFCu;
    {
        const bool branch_taken_0x322cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CFCu;
        // 0x322d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cfc) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322D04u;
    // 0x322d04: 0xc0cfcd8  jal         func_33F360
    ctx->pc = 0x322D04u;
    SET_GPR_U32(ctx, 31, 0x322D0Cu);
    ctx->pc = 0x322D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322D04u;
    // 0x322d08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F360u, 0x322D04u, 0x322D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D0Cu;
label_322d0c:
    // 0x322d0c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x322D0Cu;
    {
        const bool branch_taken_0x322d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d0c) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322D14u;
    // 0x322d14: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x322d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x322d18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x322d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x322d1c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x322D1Cu;
    {
        const bool branch_taken_0x322d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x322D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D1Cu;
        // 0x322d20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d1c) {
            ctx->pc = 0x322D48u;
            goto label_322d48;
        }
    }
    ctx->pc = 0x322D24u;
    // 0x322d24: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x322D24u;
    {
        const bool branch_taken_0x322d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x322D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D24u;
        // 0x322d28: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d24) {
            ctx->pc = 0x322D48u;
            goto label_322d48;
        }
    }
    ctx->pc = 0x322D2Cu;
    // 0x322d2c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x322d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x322d30: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x322d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x322d34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x322D34u;
    {
        const bool branch_taken_0x322d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D34u;
        // 0x322d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d34) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322D3Cu;
    // 0x322d3c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x322D3Cu;
    {
        const bool branch_taken_0x322d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322d3c) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322D44u;
    // 0x322d44: 0x0  nop
    ctx->pc = 0x322d44u;
    // NOP
label_322d48:
    // 0x322d48: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x322d48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x322d4c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x322D4Cu;
    {
        const bool branch_taken_0x322d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D4Cu;
        // 0x322d50: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d4c) {
            ctx->pc = 0x322D98u;
            goto label_322d98;
        }
    }
    ctx->pc = 0x322D54u;
    // 0x322d54: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x322d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x322d58: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x322d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x322d5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x322d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x322d60: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x322d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x322d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x322d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x322d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322d70: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x322d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x322d74: 0xac5108d0  sw          $s1, 0x8D0($v0)
    ctx->pc = 0x322d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2256), GPR_U32(ctx, 17));
    // 0x322d78: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x322d78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x322d7c: 0x0  nop
    ctx->pc = 0x322d7cu;
    // NOP
label_322d80:
    // 0x322d80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x322d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x322d84: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x322d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x322d88: 0x26b50110  addiu       $s5, $s5, 0x110
    ctx->pc = 0x322d88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x322d8c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x322D8Cu;
    {
        const bool branch_taken_0x322d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D8Cu;
        // 0x322d90: 0x26f70050  addiu       $s7, $s7, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d8c) {
            ctx->pc = 0x322C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322c40;
        }
    }
    ctx->pc = 0x322D94u;
    // 0x322d94: 0x0  nop
    ctx->pc = 0x322d94u;
    // NOP
label_322d98:
    // 0x322d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322d9c: 0x0  nop
    ctx->pc = 0x322d9cu;
    // NOP
label_322da0:
    // 0x322da0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x322da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322da4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x322da4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322da8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x322da8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322dac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322db0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x322db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x322DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DC4u;
        // 0x322dc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322DCCu;
}
