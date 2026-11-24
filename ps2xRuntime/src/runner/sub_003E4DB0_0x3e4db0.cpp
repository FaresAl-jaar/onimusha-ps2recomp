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

// Function: sub_003E4DB0
// Address: 0x3e4db0 - 0x3e5360
void sub_003E4DB0_0x3e4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4DB0_0x3e4db0");
#endif

    switch (ctx->pc) {
        case 0x3e4ea8u: goto label_3e4ea8;
        case 0x3e4f1cu: goto label_3e4f1c;
        case 0x3e4f9cu: goto label_3e4f9c;
        case 0x3e4fecu: goto label_3e4fec;
        case 0x3e5038u: goto label_3e5038;
        case 0x3e5088u: goto label_3e5088;
        case 0x3e50bcu: goto label_3e50bc;
        case 0x3e50d0u: goto label_3e50d0;
        case 0x3e50dcu: goto label_3e50dc;
        case 0x3e50fcu: goto label_3e50fc;
        case 0x3e511cu: goto label_3e511c;
        case 0x3e5164u: goto label_3e5164;
        default: break;
    }

    ctx->pc = 0x3e4db0u;

label_3e4db0:
    // 0x3e4db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e4db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e4db4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3e4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e4db8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e4db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3e4dbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3e4dc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e4dc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e4dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4dc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e4dcc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3e4dd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e4dd4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e4dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e4ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e4de0: 0x1263000b  beq         $s3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3E4DE0u;
    {
        const bool branch_taken_0x3e4de0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DE0u;
        // 0x3e4de4: 0x24920078  addiu       $s2, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4de0) {
            ctx->pc = 0x3E4E10u;
            goto label_3e4e10;
        }
    }
    ctx->pc = 0x3E4DE8u;
    // 0x3e4de8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4DE8u;
    {
        const bool branch_taken_0x3e4de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4de8) {
            ctx->pc = 0x3E4DF8u;
            goto label_3e4df8;
        }
    }
    ctx->pc = 0x3E4DF0u;
    // 0x3e4df0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3E4DF0u;
    {
        const bool branch_taken_0x3e4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4df0) {
            ctx->pc = 0x3E4E28u;
            goto label_3e4e28;
        }
    }
    ctx->pc = 0x3E4DF8u;
label_3e4df8:
    // 0x3e4df8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4dfc: 0x8c31ea24  lw          $s1, -0x15DC($at)
    ctx->pc = 0x3e4dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e4e00: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4e04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E4E04u;
    {
        const bool branch_taken_0x3e4e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E04u;
        // 0x3e4e08: 0x8c30ea28  lw          $s0, -0x15D8($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e04) {
            ctx->pc = 0x3E4E38u;
            goto label_3e4e38;
        }
    }
    ctx->pc = 0x3E4E0Cu;
    // 0x3e4e0c: 0x0  nop
    ctx->pc = 0x3e4e0cu;
    // NOP
label_3e4e10:
    // 0x3e4e10: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4e14: 0x8c31ea30  lw          $s1, -0x15D0($at)
    ctx->pc = 0x3e4e14u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8EEA30u));
    // 0x3e4e18: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4e1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E4E1Cu;
    {
        const bool branch_taken_0x3e4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E1Cu;
        // 0x3e4e20: 0x8c30ea34  lw          $s0, -0x15CC($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e1c) {
            ctx->pc = 0x3E4E38u;
            goto label_3e4e38;
        }
    }
    ctx->pc = 0x3E4E24u;
    // 0x3e4e24: 0x0  nop
    ctx->pc = 0x3e4e24u;
    // NOP
label_3e4e28:
    // 0x3e4e28: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4e2c: 0x8c31ea24  lw          $s1, -0x15DC($at)
    ctx->pc = 0x3e4e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e4e30: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4e34: 0x8c30ea28  lw          $s0, -0x15D8($at)
    ctx->pc = 0x3e4e34u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8EEA28u));
label_3e4e38:
    // 0x3e4e38: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3e4e38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3e4e3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4e40: 0x10a400b9  beq         $a1, $a0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x3E4E40u;
    {
        const bool branch_taken_0x3e4e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E40u;
        // 0x3e4e44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e40) {
            ctx->pc = 0x3E5128u;
            goto label_3e5128;
        }
    }
    ctx->pc = 0x3E4E48u;
    // 0x3e4e48: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E4E48u;
    {
        const bool branch_taken_0x3e4e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e4e48) {
            ctx->pc = 0x3E4E68u;
            goto label_3e4e68;
        }
    }
    ctx->pc = 0x3E4E50u;
    // 0x3e4e50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4E50u;
    {
        const bool branch_taken_0x3e4e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e50) {
            ctx->pc = 0x3E4E60u;
            goto label_3e4e60;
        }
    }
    ctx->pc = 0x3E4E58u;
    // 0x3e4e58: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x3E4E58u;
    {
        const bool branch_taken_0x3e4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e58) {
            ctx->pc = 0x3E5170u;
            goto label_3e5170;
        }
    }
    ctx->pc = 0x3E4E60u;
label_3e4e60:
    // 0x3e4e60: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x3E4E60u;
    {
        const bool branch_taken_0x3e4e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4E60u;
        // 0x3e4e64: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e60) {
            ctx->pc = 0x3E5170u;
            goto label_3e5170;
        }
    }
    ctx->pc = 0x3E4E68u;
label_3e4e68:
    // 0x3e4e68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3e4e6c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3e4e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3e4e70: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3e4e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3e4e74: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E4E74u;
    {
        const bool branch_taken_0x3e4e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e74) {
            ctx->pc = 0x3E4ED8u;
            goto label_3e4ed8;
        }
    }
    ctx->pc = 0x3E4E7Cu;
    // 0x3e4e7c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x3e4e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x3e4e80: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4e84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4e9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ea0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4EA0u;
    SET_GPR_U32(ctx, 31, 0x3E4EA8u);
    ctx->pc = 0x3E4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4EA0u;
    // 0x3e4ea4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4EA0u, 0x3E4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4EA8u;
label_3e4ea8:
    // 0x3e4ea8: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x3e4ea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e4eac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e4eb0: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x3e4eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4eb4: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e4eb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e4eb8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4EB8u;
    {
        const bool branch_taken_0x3e4eb8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3E4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EB8u;
        // 0x3e4ebc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4eb8) {
            ctx->pc = 0x3E4EC8u;
            goto label_3e4ec8;
        }
    }
    ctx->pc = 0x3E4EC0u;
    // 0x3e4ec0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4EC0u;
    {
        const bool branch_taken_0x3e4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4EC0u;
        // 0x3e4ec4: 0xa2430003  sb          $v1, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ec0) {
            ctx->pc = 0x3E4ED8u;
            goto label_3e4ed8;
        }
    }
    ctx->pc = 0x3E4EC8u;
label_3e4ec8:
    // 0x3e4ec8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e4ecc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E4ECCu;
    {
        const bool branch_taken_0x3e4ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4ECCu;
        // 0x3e4ed0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ecc) {
            ctx->pc = 0x3E4ED8u;
            goto label_3e4ed8;
        }
    }
    ctx->pc = 0x3E4ED4u;
    // 0x3e4ed4: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x3e4ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_3e4ed8:
    // 0x3e4ed8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3e4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3e4edc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e4edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e4ee0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3e4ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3e4ee4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E4EE4u;
    {
        const bool branch_taken_0x3e4ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ee4) {
            ctx->pc = 0x3E4F58u;
            goto label_3e4f58;
        }
    }
    ctx->pc = 0x3E4EECu;
    // 0x3e4eec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4ef0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4ef4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4ef8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4efc: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4f10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4F14u;
    SET_GPR_U32(ctx, 31, 0x3E4F1Cu);
    ctx->pc = 0x3E4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F14u;
    // 0x3e4f18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4F14u, 0x3E4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F1Cu;
label_3e4f1c:
    // 0x3e4f1c: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e4f1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e4f20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e4f24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e4f28: 0xa2440003  sb          $a0, 0x3($s2)
    ctx->pc = 0x3e4f28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e4f2c: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e4f2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e4f30: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4F30u;
    {
        const bool branch_taken_0x3e4f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e4f30) {
            ctx->pc = 0x3E4F40u;
            goto label_3e4f40;
        }
    }
    ctx->pc = 0x3E4F38u;
    // 0x3e4f38: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3e4f38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4f3c: 0x0  nop
    ctx->pc = 0x3e4f3cu;
    // NOP
label_3e4f40:
    // 0x3e4f40: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e4f40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e4f44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3e4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e4f48: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4F48u;
    {
        const bool branch_taken_0x3e4f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F48u;
        // 0x3e4f4c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f48) {
            ctx->pc = 0x3E4F58u;
            goto label_3e4f58;
        }
    }
    ctx->pc = 0x3E4F50u;
    // 0x3e4f50: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x3e4f50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4f54: 0x0  nop
    ctx->pc = 0x3e4f54u;
    // NOP
label_3e4f58:
    // 0x3e4f58: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3e4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3e4f5c: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3e4f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3e4f60: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3e4f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3e4f64: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E4F64u;
    {
        const bool branch_taken_0x3e4f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4f64) {
            ctx->pc = 0x3E4FC0u;
            goto label_3e4fc0;
        }
    }
    ctx->pc = 0x3E4F6Cu;
    // 0x3e4f6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4f70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4f74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4f78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4f7c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4f8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4f90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f94: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4F94u;
    SET_GPR_U32(ctx, 31, 0x3E4F9Cu);
    ctx->pc = 0x3E4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F94u;
    // 0x3e4f98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4F94u, 0x3E4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F9Cu;
label_3e4f9c:
    // 0x3e4f9c: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e4f9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e4fa0: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x3e4fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e4fa4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4FA4u;
    {
        const bool branch_taken_0x3e4fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FA4u;
        // 0x3e4fa8: 0x2483fffb  addiu       $v1, $a0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4fa4) {
            ctx->pc = 0x3E4FB8u;
            goto label_3e4fb8;
        }
    }
    ctx->pc = 0x3E4FACu;
    // 0x3e4fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4FACu;
    {
        const bool branch_taken_0x3e4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FACu;
        // 0x3e4fb0: 0xa2430003  sb          $v1, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4fac) {
            ctx->pc = 0x3E4FC0u;
            goto label_3e4fc0;
        }
    }
    ctx->pc = 0x3E4FB4u;
    // 0x3e4fb4: 0x0  nop
    ctx->pc = 0x3e4fb4u;
    // NOP
label_3e4fb8:
    // 0x3e4fb8: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x3e4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x3e4fbc: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x3e4fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_3e4fc0:
    // 0x3e4fc0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3e4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3e4fc4: 0x346300f0  ori         $v1, $v1, 0xF0
    ctx->pc = 0x3e4fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)240);
    // 0x3e4fc8: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3e4fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3e4fcc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E4FCCu;
    {
        const bool branch_taken_0x3e4fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fcc) {
            ctx->pc = 0x3E4FF8u;
            goto label_3e4ff8;
        }
    }
    ctx->pc = 0x3E4FD4u;
    // 0x3e4fd4: 0x8284007b  lb          $a0, 0x7B($s4)
    ctx->pc = 0x3e4fd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 123)));
    // 0x3e4fd8: 0x8283007f  lb          $v1, 0x7F($s4)
    ctx->pc = 0x3e4fd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 127)));
    // 0x3e4fdc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E4FDCu;
    {
        const bool branch_taken_0x3e4fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FDCu;
        // 0x3e4fe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4fdc) {
            ctx->pc = 0x3E4FF8u;
            goto label_3e4ff8;
        }
    }
    ctx->pc = 0x3E4FE4u;
    // 0x3e4fe4: 0xc0f936c  jal         func_3E4DB0
    ctx->pc = 0x3E4FE4u;
    SET_GPR_U32(ctx, 31, 0x3E4FECu);
    ctx->pc = 0x3E4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4FE4u;
    // 0x3e4fe8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DB0u;
    goto label_3e4db0;
    ctx->pc = 0x3E4FECu;
label_3e4fec:
    // 0x3e4fec: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3E4FECu;
    {
        const bool branch_taken_0x3e4fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fec) {
            ctx->pc = 0x3E5340u;
            goto label_3e5340;
        }
    }
    ctx->pc = 0x3E4FF4u;
    // 0x3e4ff4: 0x0  nop
    ctx->pc = 0x3e4ff4u;
    // NOP
label_3e4ff8:
    // 0x3e4ff8: 0x32232000  andi        $v1, $s1, 0x2000
    ctx->pc = 0x3e4ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x3e4ffc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E4FFCu;
    {
        const bool branch_taken_0x3e4ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ffc) {
            ctx->pc = 0x3E5048u;
            goto label_3e5048;
        }
    }
    ctx->pc = 0x3E5004u;
    // 0x3e5004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5008: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e500c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5010: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5014: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e5014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e5018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e501c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e501cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5028: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e502c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e502cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5030: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5030u;
    SET_GPR_U32(ctx, 31, 0x3E5038u);
    ctx->pc = 0x3E5034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5030u;
    // 0x3e5034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5030u, 0x3E5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5038u;
label_3e5038:
    // 0x3e5038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e5038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e503c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3E503Cu;
    {
        const bool branch_taken_0x3e503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E503Cu;
        // 0x3e5040: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e503c) {
            ctx->pc = 0x3E5170u;
            goto label_3e5170;
        }
    }
    ctx->pc = 0x3E5044u;
    // 0x3e5044: 0x0  nop
    ctx->pc = 0x3e5044u;
    // NOP
label_3e5048:
    // 0x3e5048: 0x32234000  andi        $v1, $s1, 0x4000
    ctx->pc = 0x3e5048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x3e504c: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3E504Cu;
    {
        const bool branch_taken_0x3e504c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e504c) {
            ctx->pc = 0x3E5170u;
            goto label_3e5170;
        }
    }
    ctx->pc = 0x3E5054u;
    // 0x3e5054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5058: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e505c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5060: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5064: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e5064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e5068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e506c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e506cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e507c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e507cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5080: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5080u;
    SET_GPR_U32(ctx, 31, 0x3E5088u);
    ctx->pc = 0x3E5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5080u;
    // 0x3e5084: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5080u, 0x3E5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5088u;
label_3e5088:
    // 0x3e5088: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e508c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e508cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5090: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5094: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5098: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3e5098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3e509c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e509cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50a0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e50a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e50a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e50a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e50a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e50acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e50b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E50B4u;
    SET_GPR_U32(ctx, 31, 0x3E50BCu);
    ctx->pc = 0x3E50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50B4u;
    // 0x3e50b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E50B4u, 0x3E50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50BCu;
label_3e50bc:
    // 0x3e50bc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3e50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3e50c0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x3e50c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3e50c4: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x3e50c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x3e50c8: 0xc0ce5d0  jal         func_339740
    ctx->pc = 0x3E50C8u;
    SET_GPR_U32(ctx, 31, 0x3E50D0u);
    ctx->pc = 0x3E50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50C8u;
    // 0x3e50cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339740u, 0x3E50C8u, 0x3E50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50D0u;
label_3e50d0:
    // 0x3e50d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e50d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50d4: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E50D4u;
    SET_GPR_U32(ctx, 31, 0x3E50DCu);
    ctx->pc = 0x3E50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50D4u;
    // 0x3e50d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E50D4u, 0x3E50DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50DCu;
label_3e50dc:
    // 0x3e50dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e50e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e50e4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e50e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e50e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e50ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e50f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50f4: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E50F4u;
    SET_GPR_U32(ctx, 31, 0x3E50FCu);
    ctx->pc = 0x3E50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50F4u;
    // 0x3e50f8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E50F4u, 0x3E50FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50FCu;
label_3e50fc:
    // 0x3e50fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e5100: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e5100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e5104: 0xa2820054  sb          $v0, 0x54($s4)
    ctx->pc = 0x3e5104u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e5108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e510c: 0xa283005a  sb          $v1, 0x5A($s4)
    ctx->pc = 0x3e510cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5110: 0xa282005c  sb          $v0, 0x5C($s4)
    ctx->pc = 0x3e5110u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e5114: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x3E5114u;
    SET_GPR_U32(ctx, 31, 0x3E511Cu);
    ctx->pc = 0x3E5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5114u;
    // 0x3e5118: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x3E5114u, 0x3E511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E511Cu;
label_3e511c:
    // 0x3e511c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3E511Cu;
    {
        const bool branch_taken_0x3e511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e511c) {
            ctx->pc = 0x3E5170u;
            goto label_3e5170;
        }
    }
    ctx->pc = 0x3E5124u;
    // 0x3e5124: 0x0  nop
    ctx->pc = 0x3e5124u;
    // NOP
label_3e5128:
    // 0x3e5128: 0x32234000  andi        $v1, $s1, 0x4000
    ctx->pc = 0x3e5128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x3e512c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E512Cu;
    {
        const bool branch_taken_0x3e512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e512c) {
            ctx->pc = 0x3E5170u;
            goto label_3e5170;
        }
    }
    ctx->pc = 0x3E5134u;
    // 0x3e5134: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x3e5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x3e5138: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e5138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e513c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e513cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5144: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5148: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e514c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e514cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5150: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5154: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5158: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e515c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E515Cu;
    SET_GPR_U32(ctx, 31, 0x3E5164u);
    ctx->pc = 0x3E5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E515Cu;
    // 0x3e5160: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E515Cu, 0x3E5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5164u;
label_3e5164:
    // 0x3e5164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5168: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x3e5168u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e516c: 0x0  nop
    ctx->pc = 0x3e516cu;
    // NOP
label_3e5170:
    // 0x3e5170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5174: 0x1263003c  beq         $s3, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3E5174u;
    {
        const bool branch_taken_0x3e5174 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e5174) {
            ctx->pc = 0x3E5268u;
            goto label_3e5268;
        }
    }
    ctx->pc = 0x3E517Cu;
    // 0x3e517c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E517Cu;
    {
        const bool branch_taken_0x3e517c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e517c) {
            ctx->pc = 0x3E5190u;
            goto label_3e5190;
        }
    }
    ctx->pc = 0x3E5184u;
    // 0x3e5184: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3E5184u;
    {
        const bool branch_taken_0x3e5184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5184) {
            ctx->pc = 0x3E5340u;
            goto label_3e5340;
        }
    }
    ctx->pc = 0x3E518Cu;
    // 0x3e518c: 0x0  nop
    ctx->pc = 0x3e518cu;
    // NOP
label_3e5190:
    // 0x3e5190: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e5190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e5194: 0x9023fc8f  lbu         $v1, -0x371($at)
    ctx->pc = 0x3e5194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x3e5198: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E5198u;
    {
        const bool branch_taken_0x3e5198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5198) {
            ctx->pc = 0x3E51E8u;
            goto label_3e51e8;
        }
    }
    ctx->pc = 0x3E51A0u;
    // 0x3e51a0: 0x82450003  lb          $a1, 0x3($s2)
    ctx->pc = 0x3e51a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e51a4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e51a8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e51ac: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x3e51acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    // 0x3e51b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e51b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e51b4: 0x2463fa32  addiu       $v1, $v1, -0x5CE
    ctx->pc = 0x3e51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965810));
    // 0x3e51b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e51b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e51bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e51c0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3e51c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e51c4: 0xa424f994  sh          $a0, -0x66C($at)
    ctx->pc = 0x3e51c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965652), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e51c8: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e51c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e51cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e51ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e51d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e51d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e51d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e51d8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3e51d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e51dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3E51DCu;
    {
        const bool branch_taken_0x3e51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51DCu;
        // 0x3e51e0: 0xa423f996  sh          $v1, -0x66A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294965654), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e51dc) {
            ctx->pc = 0x3E5228u;
            goto label_3e5228;
        }
    }
    ctx->pc = 0x3E51E4u;
    // 0x3e51e4: 0x0  nop
    ctx->pc = 0x3e51e4u;
    // NOP
label_3e51e8:
    // 0x3e51e8: 0x82450003  lb          $a1, 0x3($s2)
    ctx->pc = 0x3e51e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e51ec: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e51f0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e51f4: 0x2484fa60  addiu       $a0, $a0, -0x5A0
    ctx->pc = 0x3e51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
    // 0x3e51f8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e51f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e51fc: 0x2463fa62  addiu       $v1, $v1, -0x59E
    ctx->pc = 0x3e51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965858));
    // 0x3e5200: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e5200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e5204: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e5204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e5208: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3e5208u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e520c: 0xa424f994  sh          $a0, -0x66C($at)
    ctx->pc = 0x3e520cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965652), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e5210: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e5210u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e5214: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5218: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e5218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e521c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e5220: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3e5220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e5224: 0xa423f996  sh          $v1, -0x66A($at)
    ctx->pc = 0x3e5224u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965654), (uint16_t)GPR_U32(ctx, 3));
label_3e5228:
    // 0x3e5228: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x3e5228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x3e522c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3e522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3e5230: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e5230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e5234: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x3e5234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3e5238: 0x2484f994  addiu       $a0, $a0, -0x66C
    ctx->pc = 0x3e5238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965652));
    // 0x3e523c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e5240: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e5240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e5244: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e5244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e5248: 0x2463f996  addiu       $v1, $v1, -0x66A
    ctx->pc = 0x3e5248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965654));
    // 0x3e524c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5250: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e5250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e5254: 0xa424f9c4  sh          $a0, -0x63C($at)
    ctx->pc = 0x3e5254u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65F9C4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x65F9C4u, _value); } while (0);
    // 0x3e5258: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e5258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e525c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e525cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5260: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3E5260u;
    {
        const bool branch_taken_0x3e5260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5260u;
        // 0x3e5264: 0xa423f9c6  sh          $v1, -0x63A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294965702), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5260) {
            ctx->pc = 0x3E5340u;
            goto label_3e5340;
        }
    }
    ctx->pc = 0x3E5268u;
label_3e5268:
    // 0x3e5268: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e5268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e526c: 0x9023fc8f  lbu         $v1, -0x371($at)
    ctx->pc = 0x3e526cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x3e5270: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E5270u;
    {
        const bool branch_taken_0x3e5270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5270) {
            ctx->pc = 0x3E52C0u;
            goto label_3e52c0;
        }
    }
    ctx->pc = 0x3E5278u;
    // 0x3e5278: 0x82450003  lb          $a1, 0x3($s2)
    ctx->pc = 0x3e5278u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e527c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e527cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e5280: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e5280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e5284: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x3e5284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    // 0x3e5288: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e528c: 0x2463fa32  addiu       $v1, $v1, -0x5CE
    ctx->pc = 0x3e528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965810));
    // 0x3e5290: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e5290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e5294: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e5294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e5298: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3e5298u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e529c: 0xa424f9ac  sh          $a0, -0x654($at)
    ctx->pc = 0x3e529cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965676), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e52a0: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e52a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e52a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e52a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e52a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e52ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e52acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e52b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3e52b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e52b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3E52B4u;
    {
        const bool branch_taken_0x3e52b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52B4u;
        // 0x3e52b8: 0xa423f9ae  sh          $v1, -0x652($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294965678), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52b4) {
            ctx->pc = 0x3E5300u;
            goto label_3e5300;
        }
    }
    ctx->pc = 0x3E52BCu;
    // 0x3e52bc: 0x0  nop
    ctx->pc = 0x3e52bcu;
    // NOP
label_3e52c0:
    // 0x3e52c0: 0x82450003  lb          $a1, 0x3($s2)
    ctx->pc = 0x3e52c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e52c4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e52c8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e52c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e52cc: 0x2484fa60  addiu       $a0, $a0, -0x5A0
    ctx->pc = 0x3e52ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
    // 0x3e52d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e52d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e52d4: 0x2463fa62  addiu       $v1, $v1, -0x59E
    ctx->pc = 0x3e52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965858));
    // 0x3e52d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e52dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e52e0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3e52e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e52e4: 0xa424f9ac  sh          $a0, -0x654($at)
    ctx->pc = 0x3e52e4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965676), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e52e8: 0x82440003  lb          $a0, 0x3($s2)
    ctx->pc = 0x3e52e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3e52ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e52ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e52f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e52f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e52f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3e52f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e52fc: 0xa423f9ae  sh          $v1, -0x652($at)
    ctx->pc = 0x3e52fcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965678), (uint16_t)GPR_U32(ctx, 3));
label_3e5300:
    // 0x3e5300: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x3e5300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x3e5304: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3e5304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3e5308: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e5308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e530c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x3e530cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3e5310: 0x2484f994  addiu       $a0, $a0, -0x66C
    ctx->pc = 0x3e5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965652));
    // 0x3e5314: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e5314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e5318: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e5318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e531c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e531cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e5320: 0x2463f996  addiu       $v1, $v1, -0x66A
    ctx->pc = 0x3e5320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965654));
    // 0x3e5324: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5328: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e5328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e532c: 0x24840012  addiu       $a0, $a0, 0x12
    ctx->pc = 0x3e532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x3e5330: 0xa424f9dc  sh          $a0, -0x624($at)
    ctx->pc = 0x3e5330u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65F9DCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x65F9DCu, _value); } while (0);
    // 0x3e5334: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e5334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e5338: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e533c: 0xa423f9de  sh          $v1, -0x622($at)
    ctx->pc = 0x3e533cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65F9DEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x65F9DEu, _value); } while (0);
label_3e5340:
    // 0x3e5340: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e5340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e5344: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e5344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e5348: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e5348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e534c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e534cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5350: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e5350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e5354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5358: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5358u;
        // 0x3e535c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5360u;
}
